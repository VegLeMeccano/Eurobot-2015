#include "BouclePosition.h"
#include "Util/Util.h"
#include "Slave/Util/Odo.h"
#include "Slave/Slave.h"

using namespace Constantes;

BouclePosition::BouclePosition() : periode(Slave::DUREE_PERIODE), XReel(0), YReel(0), capReel(0),
    distanceDroite(0), distanceGauche(0), asservPosition(nullptr), BV()
{
}

void BouclePosition::run()
{
    // Tache périodique
    if (periode.DureeAtteinte())
    {
        //Serial.println("BP Interruption dedans");
        periode.PeriodeTraitee();

        // Intègre les deltas odo pour calculer capReel, XReel et YReel
        calculPosition();

        // Si on est en blocage on coupe les commandes
        if (slave->enBlocage())
        {
            asservPosition = nullptr;
        }

        // Protection si aucun asservissement n'est demandé
        if(asservPosition != nullptr)
        {
            // Appel l'asservissement pour connaitre la vitesse à imposer à la BV.
            asservPosition->calculCmd(XReel, YReel, capReel, Slave::DUREE_PERIODE);
            // Applique les données de l'asservissement à la BV.
            commanderBV();

            // Vérifie si l'asservissement a rejoint sa condition de sortie.
            if(asservPosition->assFini(XReel, YReel, capReel))
            {
                asservPosition = nullptr;
                slave->setNeedDetection(false);
                BV.setVCons(0);
                BV.setVRotCons(0);

                assFini = true;
                Serial.print(F("AFINI "));
                Serial.print(XReel);
                Serial.print(" ");
                Serial.print(YReel);
                Serial.print(" ");
                Serial.println(capReel);
            }
        }
        else
        {
            // Si on n'a pas d'asservissement, on met les consignes à 0, ie le robot ne doit plus bouger.
            // -> pour l'instant il n'est pas asservi en position. C'est pas bien.
            BV.setVCons(0);
            BV.setVRotCons(0);
        }

        BV.interruption();
    }
}

void BouclePosition::calculPosition()
{
    // Recuperation des deltas odo depuis la dernière lecture.
    double deltaGauche = Odo::getDeltaGauche();
    double deltaDroite = Odo::getDeltaDroite();

    distanceDroite += deltaDroite;
    distanceGauche += deltaGauche;

    // Variation de cap du robot.Les caps augmentent dans le sens trigo. Le cap est en degrés.
    double dCap = (deltaDroite-deltaGauche) * Odo::R_INV* Util::RAD2DEG;
    // Deplacement depuis le dernier calcul.
    double dep = (deltaGauche+deltaDroite)/2;

    capReel += dCap/2;
    XReel += dep * cos(capReel * Util::DEG2RAD);
    YReel += dep * sin(capReel * Util::DEG2RAD);
    capReel += dCap/2;
    capReel = Util::mod(capReel, 0., 360.);
}

void BouclePosition::commanderBV()
{
    BV.setVRotCons(asservPosition->getVRotCons());
    BV.setVCons(asservPosition->getVCons());
}
AsservPosition *BouclePosition::getAsservPosition() const
{
    return asservPosition;
}

void BouclePosition::setAsservPosition(AsservPosition *value)
{
    asservPosition = value;
    assFini = (value == nullptr);
}

void BouclePosition::printDistance()
{
    Serial.print("G ");
    Serial.print(distanceGauche);
    Serial.print(" D ");
    Serial.println(distanceDroite);
}

double BouclePosition::getXReel() const
{
    return XReel;
}

double BouclePosition::getYReel() const
{
    return YReel;
}

double BouclePosition::getCapReel() const
{
    return capReel;
}

void BouclePosition::setXYCap(double X, double Y, double cap)
{
    XReel = X;
    YReel = Y;
    capReel = cap;
}

bool BouclePosition::getAssFini()
{
    return assFini;
}

void BouclePosition::resetAssFini()
{
    assFini = false;
}
