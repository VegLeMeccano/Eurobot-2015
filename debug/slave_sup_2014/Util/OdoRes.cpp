#ifdef PRINCIPAL

#include "OdoRes.h"
#include "../constantesrobot.h"

Encoder OdoRes::OdoDroit(Constantes::PIN_ODO_RES_AR1, Constantes::PIN_ODO_RES_AR2);
Encoder OdoRes::OdoGauche(Constantes::PIN_ODO_RES_AV1, Constantes::PIN_ODO_RES_AV2);

// Distance parcourue en 1 tic odo droit, en mm.
const double OdoRes::D = Constantes::GAIN_ODO_RES_AR;
// Distance parcourue en 1 tic odo gauche, en mm.
const double OdoRes::G = Constantes::GAIN_ODO_RES_AV;

//Distance entre le centre du robot et la face arrière du robot (en mm).
//Permet de savoir à quelle distance du bord se trouve le centre du robot lorsque le robot est collé contre un bord.
const double OdoRes::D_RECAL_Arr = Constantes::DIST_RECAL_ARRIERE;
const double OdoRes::D_RECAL_Av = Constantes::DIST_RECAL_AVANT;

// Distance entre les deux roues odo, en mm.
const double OdoRes::R = Constantes::DISTANCE_ODOS;

// Inverse de la distance entre les deux roues odo, en mm-1.
//Permet d'éviter des divisions.
const double OdoRes::R_INV= 1/R;

int OdoRes::tickG = 0;
int OdoRes::tickD = 0;
#define REGISTARODO

// Lecture de la vitesse.

double OdoRes::getVitesseGauche()
{
    int temp = OdoGauche.read();
    OdoGauche.write(0);
    tickG += temp;
    return G*temp;
}

double OdoRes::getVitesseDroite()
{
    int temp = OdoDroit.read();
    OdoDroit.write(0);
    tickD += temp;
    return D*temp;
}

// Lecture du nombre de tics depuis la dernière lecture.
double OdoRes::getDeltaGauche()
{
    getVitesseGauche();
    int tmp = tickG;
    tickG = 0;
    return tmp*G;
}

double OdoRes::getDeltaDroite()
{
    getVitesseDroite();
    int tmp = tickD;
    tickD = 0;
    return tmp*D;
}

// Lecture du nombre de tics sans remise a zéro. Utile pour le réglage des gains odo.
int OdoRes::getTicsGauche()
{
    return OdoGauche.read();
}

int OdoRes::getTicsDroite()
{
    return OdoDroit.read();
}

//Remet à zéro tous les compteurs de tics odo (en vitesse et position)
void OdoRes::resetDeltas()
{
    OdoGauche.write(0);
    OdoDroit.write(0);
    OdoGauche.writeVitesse(0);
    OdoDroit.writeVitesse(0);
}

#endif
