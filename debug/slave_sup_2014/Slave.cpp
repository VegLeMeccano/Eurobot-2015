#include "Slave.h"
#include "Util/Odo.h"
#include "Util/Util.h"
#include "Util/Propu.h"
#include <math.h>

// Temps entre chaque execution du Slave. Toutes les classes d'asserv doivent avoir la même période.
int const Slave::DUREE_PERIODE = 20;

// Définition du repère
double const Slave::Xmin = -1500;
double const Slave::Xmax = 1500;
double const Slave::Ymin = 0;
double const Slave::Ymax = 2000;

Slave::Slave (): periode (DUREE_PERIODE), XDebut(0), YDebut(0), capDebut(0),
    BP(), m_BO(), m_BFCap(DUREE_PERIODE), m_BFDroite(DUREE_PERIODE), m_BFDroiteSeq(DUREE_PERIODE),
    m_BFAvance(DUREE_PERIODE), m_BFCercle(DUREE_PERIODE), recal(Recalage::AUCUN), needDetection(true), blocage(false)
{
    set<ARRET_ROBOT>();
    needDetection = true;
}

void Slave::run ()
{
    if (periode.DureeAtteinte ())
    {
        periode.PeriodeTraitee ();

        if (BP.getAsservPosition() != nullptr && detecterBlocage())
        {
            blocage = true;
        }
    }

    // Execution de la boucle de position.
    BP.run ();
}

bool Slave::setXYCap (double X, double Y, double Cap)
{
    // On vérifie les coordonnées fournies avant de copier
    if (Xmin <= X && X <= Xmax && Ymin <= Y && Y <= Ymax)
    {
        BP.setXYCap(X, Y, Util::mod(Cap, 0., 360.));
        Serial.print("setXYCap ok ");
        Serial.print(X);
        Serial.print(" ");
        Serial.print(Y);
        Serial.print(" ");
        Serial.println(Cap);
        return true;
    }
    else
    {
        Serial.print("setXYCap ko ");
        Serial.print(X);
        Serial.print(" ");
        Serial.print(Y);
        Serial.print(" ");
        Serial.println(Cap);
        return false;
    }
}

bool Slave::getNeedDetection()
{
    return needDetection;
}

void Slave::setNeedDetection(bool detect)
{
    needDetection = detect;
}

bool Slave::detecterBlocage()
{
    // constantes qui définissent le blocage
#ifdef PRINCIPAL
    const double NORME_NON_AVANCEMENT = 0.02;
    const int DUREE_BLOCAGE = 500;
    const double NORME_NON_ROTATION = 0.02;
    static int tempsBlocage = 0;
#elif defined PMI
    const double NORME_NON_AVANCEMENT = 0.025;
    const int DUREE_BLOCAGE = 500;
    const double NORME_NON_ROTATION = 0.025;
    static int tempsBlocage = 0;
#endif

    if (BP.getAsservPosition() == nullptr)
        return false;
    // la valeur des consignes de vitesse. En effet, il n'y a pas de blocage si les moteurs n'ont pas de commande.
    double cmd = fabs (BP.getAsservPosition()->getVCons() + fabs (BP.getAsservPosition()->getVRotCons()));

    // position au dernier appel
    static double XAncien = getX();
    static double YAncien = getY();
    static double capAncien = getCap();

    // position actuelle
    double X = getX();
    double Y = getY();
    double cap = getCap();

    // mouvement depuis le dernier appel (en norme, en quelque sorte)
    double trans = ((X-XAncien)*(X-XAncien)+(Y-YAncien)*(Y-YAncien))/(double)DUREE_PERIODE;
    double rot = fabs(cap - capAncien)/(double)DUREE_PERIODE;

    XAncien = X;
    YAncien = Y;
    capAncien = cap;

//    Serial.print("bloc ");
//    Serial.print(trans);
//    Serial.print(" ");
//    Serial.println(rot);

    // Si la commande est non nulle, et que le robot n'a pas assez bougé, il y a blocage
    if (cmd > 0 && trans < NORME_NON_AVANCEMENT && rot < NORME_NON_ROTATION)
    {
        tempsBlocage += DUREE_PERIODE;

        if (tempsBlocage > DUREE_BLOCAGE) // si le blocage dure suffisament longtemps
        {
            Serial.println(F("BLOC"));
            // Si on était en recalage, alors on a rencontré une butée, et on calcule la position recalée
            if (recal == Recalage::ARRIERE)
                recaler(capAvantRecalage, Marche::ARRIERE);
            if (recal == Recalage::AVANT)
                recaler(capAvantRecalage, Marche::AVANT);

            tempsBlocage = 0;  // on remet le compteur de temps à zéro pour le prochain blocage
            recal = Recalage::AUCUN;
            return true; // on renvoit vrai : il y a blocage
        }

        else // le robot ne bouge pas, mais pas depuis très longtemps
            return false;
    }
    else // il n'y a pas blocage
    {
        tempsBlocage = 0; // on reset le temps de blocage
        return false; // on renvoit faux
    }
}

void Slave::recaler(double CapOrigine_, Marche mode_)
{
    Serial.print("cap ori ");
    Serial.print(CapOrigine_);
    if (mode_ == Marche::ARRIERE)
    {
        Serial.println(" arr");
        if (CapOrigine_ < 45 || CapOrigine_ > 315)
        {
            //Recalage sur bord Xmin (robot orienté à 0°)
            setXYCap(Xmin  + Constantes::DIST_RECAL_ARRIERE, getY(), 0);
        }
        else if (CapOrigine_ < 135)
        {
            //Recalage sur bord Ymin (robot orienté à 90°)
            setXYCap(getX(), Ymin + Constantes::DIST_RECAL_ARRIERE, 90);
        }
        else if (CapOrigine_ < 225)
        {
            //Recalage sur bord Xmax (robot orienté à 180°)
            setXYCap(Xmax - Constantes::DIST_RECAL_ARRIERE, getY(), 180);
        }
        else
        {
            //Recalage sur bord Ymax (robot orienté à 270°)
            setXYCap(getX(), Ymax - Constantes::DIST_RECAL_ARRIERE, 270);
        }
    }
    if (mode_ == Marche::AVANT)
    {
        Serial.println(" av");
        if (CapOrigine_ < 45 || CapOrigine_ > 315)
        {
            //Recalage sur bord Xmax (robot orienté à 0°)
            setXYCap(Xmax - Constantes::DIST_RECAL_AVANT, getY(), 0);
        }
        else if (CapOrigine_ < 135)
        {
            //Recalage sur bord Ymax (robot orienté à 90°)
            setXYCap(getX(), Ymax - Constantes::DIST_RECAL_AVANT, 90);
        }
        else if (CapOrigine_ < 225)
        {
            //Recalage sur bord Xmin (robot orienté à 180°)
            setXYCap(Xmin + Constantes::DIST_RECAL_AVANT, getY(), 180);
        }
        else
        {
            //Recalage bord Ymin (robot orienté à 270°)
            setXYCap(getX(), Ymin + Constantes::DIST_RECAL_AVANT, 270);
        }
    }
}

void Slave::set(tag_helper<BO>,double VCons_, double VRotCons_, int duree_ )
{
    BP.setAsservPosition(&m_BO);
    m_BO.set (VCons_, VRotCons_, duree_);
    needDetection = true;
//    Serial.print(F("BO set "));
//    Serial.print(VCons_);
//    Serial.print(" ");
//    Serial.print(VRotCons_);
//    Serial.print(" ");
//    Serial.println(duree_);
}

void Slave::set(tag_helper<BFCap>,double capCons, double vitesseRot, bool arretFinal)
{
    BP.setAsservPosition(&m_BFCap);
    m_BFCap.set (capCons, vitesseRot, arretFinal);
    needDetection = false;

    Serial.print(F("BFCap set "));
    Serial.println(capCons);
}

void Slave::set(tag_helper<BFAvance>, double distance, double vitesse, bool arretFinal)
{
    BP.setAsservPosition(&m_BFAvance);
    m_BFAvance.set(BP.getXReel(), BP.getYReel(), distance, vitesse, BP.getCapReel(), arretFinal);

#ifdef PRINCIPAL
    needDetection = true;
#elif defined PMI
    needDetection = (distance > 0);
#endif

    Serial.print(F("BFAvance set "));
    Serial.print(distance);
    Serial.print(" ");
    Serial.println(vitesse);
}

void Slave::set(tag_helper<BFDroite>, double xObj, double yObj, double capObj, double vitesse)
{
    BP.setAsservPosition(&m_BFDroite);
    m_BFDroite.set(xObj, yObj, capObj, vitesse, getX(), getY(), getCap());
#ifdef PRINCIPAL
    needDetection = true;
#elif defined PMI
    needDetection = marcheAvant();
#endif

    Serial.print(F("BFDroite set "));
    Serial.print(xObj);
    Serial.print(" ");
    Serial.print(yObj);
    Serial.print(" ");
    Serial.print(capObj);
    Serial.print(" ");
    Serial.println(vitesse);
}

void Slave::set(tag_helper<BFDroiteSeq>, double xObj, double yObj, double capObj, double vitesse)
{
    BP.setAsservPosition(&m_BFDroiteSeq);
    m_BFDroiteSeq.set(xObj, yObj, capObj, vitesse, getX(), getY(), getCap());
#ifdef PRINCIPAL
    needDetection = true;
#elif defined PMI
    needDetection = marcheAvant();
#endif

    Serial.print(F("BFDroiteSeq set "));
    Serial.print(xObj);
    Serial.print(" ");
    Serial.print(yObj);
    Serial.print(" ");
    Serial.print(capObj);
    Serial.print(" ");
    Serial.println(vitesse);
}

void Slave::set(tag_helper<BFCercle>,double xCentre, double yCentre, double rayon, double capObj,
                double vitesse, int sens, int nbTours)
{
    BP.setAsservPosition(&m_BFCercle);
    m_BFCercle.set(xCentre, yCentre,  rayon, capObj, sens, vitesse, nbTours);

//    Serial.print("BFCercle set ");
//    Serial.print(xCentre);
//    Serial.print(" ");
//    Serial.print(yCentre);
//    Serial.print(" ");
//    Serial.print(rayon);
//    Serial.print(" ");
//    Serial.println(capObj);
}

void Slave::set(tag_helper<ARRET_ROBOT>)
{
    needDetection = false;
    BP.setAsservPosition(nullptr);
    Serial.print(F("arret robot "));
    afficherStatsOdo();
}

void Slave::set(tag_helper<ARRET_SLAVE>)
{
    BP.setAsservPosition(nullptr);
}

void Slave::set(tag_helper<Recaler>, Recalage mode)
{
    needDetection = false;
    const double distanceRecalage = 3000;
    switch(mode)
    {
    case Recalage::AVANT:
        recal = Recalage::AVANT;
        m_BFAvance.set(getX(), getY(), distanceRecalage, .25, getCap(), true);
        Serial.println(F("Recalage av"));
        BP.setAsservPosition(&m_BFAvance);
        break;

    case Recalage::ARRIERE:
        recal = Recalage::ARRIERE;
        m_BFAvance.set(getX(), getY(), -distanceRecalage, .25, getCap(), true);
        Serial.println(F("Recalage ar"));
        BP.setAsservPosition(&m_BFAvance);
        break;
    case Recalage::AUCUN:
        break;
    }
    capAvantRecalage = getCap();
}

void Slave::afficherStatsOdo()
{
    BP.printDistance();
    Serial.print("X ");
    Serial.print(getX());
    Serial.print(" Y ");
    Serial.print(getY());
    Serial.print(" cap ");
    Serial.println(getCap());
}

bool Slave::marcheAvant()
{
    return !BP.getAsservPosition()->getMarcheArriere();
}

bool Slave::assFini()
{
    return BP.getAssFini();
}

void Slave::resetAssFini()
{
    BP.resetAssFini();
}

void Slave::setPIDtrans(double kP, double kI, double kD, double satI)
{
    m_BFAvance.setPIDtrans(kP, kI, kD, satI);
}

double Slave::getX () const
{
    return BP.getXReel();
}

double Slave::getY () const
{
    return BP.getYReel();
}

double Slave::getCap () const
{
    return BP.getCapReel();
}

bool Slave::enBlocage()
{
    return blocage;
}

void Slave::resetBlocage()
{
    blocage = false;
}
