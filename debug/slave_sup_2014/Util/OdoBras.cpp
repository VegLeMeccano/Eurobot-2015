#ifdef PRINCIPAL

#include "OdoBras.h"
#include "../constantesrobot.h"

Encoder OdoBras::OdoDroit(Constantes::PIN_ODO_BRAS_AR1, Constantes::PIN_ODO_BRAS_AR2);
Encoder OdoBras::OdoGauche(Constantes::PIN_ODO_BRAS_AV1, Constantes::PIN_ODO_BRAS_AV2);

// Distance parcourue en 1 tic odo droit, en mm.
const double OdoBras::D = Constantes::GAIN_ODO_BRAS_AR;
// Distance parcourue en 1 tic odo gauche, en mm.
const double OdoBras::G = Constantes::GAIN_ODO_BRAS_AV;

//Distance entre le centre du robot et la face arrière du robot (en mm).
//Permet de savoir à quelle distance du bord se trouve le centre du robot lorsque le robot est collé contre un bord.
const double OdoBras::D_RECAL_Arr = Constantes::DIST_RECAL_ARRIERE;
const double OdoBras::D_RECAL_Av = Constantes::DIST_RECAL_AVANT;

// Distance entre les deux roues odo, en mm.
const double OdoBras::R = Constantes::DISTANCE_ODOS;

// Inverse de la distance entre les deux roues odo, en mm-1.
//Permet d'éviter des divisions.
const double OdoBras::R_INV= 1/R;

int OdoBras::tickG = 0;
int OdoBras::tickD = 0;
#define REGISTARODO

// Lecture de la vitesse.

double OdoBras::getVitesseGauche()
{
    int temp = OdoGauche.read();
    OdoGauche.write(0);
    tickG += temp;
    return G*temp;
}


double OdoBras::getVitesseDroite()
{
    int temp = OdoDroit.read();
    tickD += temp;
    OdoDroit.write(0);
    return D*temp;
}

// Lecture du nombre de tics depuis la dernière lecture.
double OdoBras::getDeltaGauche()
{
    getVitesseGauche();
    int tmp = tickG;
    tickG = 0;
    return tmp*G;
}

double OdoBras::getDeltaDroite()
{
    getVitesseDroite();
    int tmp = tickD;
    tickD = 0;
    return tmp*D;
}

// Lecture du nombre de tics sans remise a zéro. Utile pour le réglage des gains odo.
int OdoBras::getTicsGauche()
{
    return OdoGauche.read();
}

int OdoBras::getTicsDroite()
{
    return OdoDroit.read();
}

//Remet à zéro tous les compteurs de tics odo (en vitesse et position)
void OdoBras::resetDeltas()
{
    OdoGauche.write(0);
    OdoDroit.write(0);
    OdoGauche.writeVitesse(0);
    OdoDroit.writeVitesse(0);
}

#endif
