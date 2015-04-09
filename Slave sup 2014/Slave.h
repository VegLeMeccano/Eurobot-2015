#ifndef _SLAVE_H
#define _SLAVE_H

#include "Slave/Boucle/BouclePosition.h"
#include "Slave/Asservissement/BFCap.h"
#include "Slave/Asservissement/BFDroite.h"
#include "Slave/Asservissement/BFDroiteSeq.h"
#include "Slave/Asservissement/BFAvance.h"
#include "Slave/Asservissement/BO.h"
#include "Slave/Asservissement/BFCercle.h"
#include "Slave/Asservissement/Tags.h"
#include "Slave/Util/Vitesse.h"
#include "Slave/Util/Marche.h"
#include "Slave/Util/Recalage.h"
#include "Util/periode.h"
#include "IO/IO.h"
#include "constantesrobot.h"

#define nullptr 0

class Slave
{
private:
    // permet d'appeler périodiquement l'asservissement, pour faire du pseudo multi-thread
    Periode periode;

    // Position initiale du robot, au début du match
    double XDebut;
    double YDebut;
    double capDebut;

    // Boucle qui mesure la position, gère les algos, et envoie la consigne de vitesse à la boucle de vitesse
    BouclePosition BP;

    CBO m_BO;
    CBFCap m_BFCap;
    CBFDroite m_BFDroite;
    BFDroiteSeq m_BFDroiteSeq;
    CBFAvance m_BFAvance;
    CBFCercle m_BFCercle;

    // sert pour le recalage
    double capAvantRecalage;
    Recalage recal;

    bool needDetection;
    bool blocage; // Pour le master. Seul lui a le droit de le remettre à false, une fois qu'il l'a lu

public:
    Slave();
    // sert pour le debug des odos
    void afficherStatsOdo();
    bool marcheAvant();
    bool assFini();
    void resetAssFini();
    bool enBlocage();
    void resetBlocage();  //Seul le master doit appeler cette méthode, pour indiquer qu'il a reçu le message

    template <class tag> struct tag_helper{};

    // DOIT RESTER OBLIGATOIREMENT DANS LE.h
    // voir http://cpp.developpez.com/faq/cpp/?page=templates#DIVERS_templates
    template <class T,class ...Args> void set(Args... a)
    {
        set(tag_helper<T>(),a...);
#ifdef PRINCIPAL
        if(marcheAvant())
            io->sonarAvant();
        else
            io->sonarArriere();
#endif
    }

    void run();

    static const int DUREE_PERIODE;

    // Variables qui définissent le plan de jeu
    static double const Xmin;
    static double const Xmax;
    static double const Ymin;
    static double const Ymax;

    double getX() const;
    double getY() const;
    double getCap() const;

    // Met à jour les coordonnées après un recalage. Attention : cette méthode ne déplace pas le robot !
    // Elle ne fait que changer des variables !
    void recaler(double CapOrigine_, Marche mode_ = Marche::ARRIERE);

    // Setter pour X, Y et cap. Renvoie false s'il y a une erreur dans les coordonnées.
    bool setXYCap(double X_, double Y_, double Cap_);
    // Détecte les blocages (càd les moteurs tournent mais le robot ne se déplace pas)
    bool detecterBlocage();
    //void setMaster(MAEPrincipal* m);

    bool getNeedDetection();
    void setNeedDetection(bool detect);

    void setPIDtrans(double kP, double kI, double kD, double satI);

private:

    // BO : vitesses positives ou négatives
    // BFCap : vitesse positive, le sens est automatique
    // BFAvance : distance positive ou négative, vitesse positive
    // BFDroite : vitesse positive ou négative
    // BFCercle : vitesse positive, impossible de reculer
    void set(tag_helper<BO>,double VCons_, double VRotCons_, int duree_ );
    void set(tag_helper<BFCap>, double CapCons, double vitesseRot, bool arretFinal = true);
    void set(tag_helper<BFAvance>, double distance_, double vitesse_, bool arretFinal = true);
    void set(tag_helper<BFDroite>, double xObj, double yObj, double capObj, double vitesse_);
    void set(tag_helper<BFDroiteSeq>, double xObj, double yObj, double capObj, double vitesse_);
    void set(tag_helper<BFCercle>, double XCentre_, double YCentre_, double rayon_, double capObj_, double vitesse,
             int sens_ = 1, int nbTours_ = 0);
    void set(tag_helper<Recaler>, Recalage mode = Recalage::ARRIERE);
    void set(tag_helper<ARRET_ROBOT>);
    void set(tag_helper<ARRET_SLAVE>);
};

extern Slave* slave;
#endif

