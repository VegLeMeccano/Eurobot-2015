#include "Odo.h"
#include "Slave/constantesrobot.h"

using namespace Constantes;

Encoder Odo::OdoDroite(PIN_ODO_DROITE1, PIN_ODO_DROITE2);
Encoder Odo::OdoGauche(PIN_ODO_GAUCHE1, PIN_ODO_GAUCHE2);

// Distance parcourue en 1 tic odo droit, en mm.
const double Odo::D = Constantes::GAIN_ODO_DROITE;
// Distance parcourue en 1 tic odo gauche, en mm.
const double Odo::G = Constantes::GAIN_ODO_GAUCHE;


//Distance entre le centre du robot et la face arrière du robot (en mm).
//Permet de savoir à quelle distance du bord se trouve le centre du robot lorsque le robot est collé contre un bord.
const double Odo::D_RECAL_Ar = Constantes::DIST_RECAL_ARRIERE;
const double Odo::D_RECAL_Av = Constantes::DIST_RECAL_AVANT;

// Distance entre les deux roues odo, en mm.
const double Odo::R = Constantes::DISTANCE_ODOS;

// Inverse de la distance entre les deux roues odo, en mm-1.
//Permet d'éviter des divisions.
const double Odo::R_INV= 1/R;

int Odo::tickG = 0;
int Odo::tickD = 0;
#define REGISTARODO

// Lecture de la vitesse.

double Odo::getVitesseGauche()
{
    int temp = OdoGauche.read();
    OdoGauche.write(0);
    tickG += temp;
    return G*temp;
}

double Odo::getVitesseDroite()
{
    int temp = OdoDroite.read();
    tickD += temp;
    OdoDroite.write(0);
    return D*temp;
}

// Lecture du nombre de tics depuis la dernière lecture.
double Odo::getDeltaGauche()
{
    getVitesseGauche();
    int tmp = tickG;
    tickG = 0;
    return tmp*G;
}

double Odo::getDeltaDroite()
{
    getVitesseDroite();
    int tmp = tickD;
    tickD = 0;
    return tmp*D;
}

// Lecture du nombre de tics sans remise a zéro. Utile pour le réglage des gains odo.
int Odo::getTicsGauche()
{
    return OdoGauche.read();
}

int Odo::getTicsDroite()
{
    return OdoDroite.read();
}

//Remet à zéro tous les compteurs de tics odo (en vitesse et position)
void Odo::resetDeltas()
{
    OdoGauche.write(0);
    OdoDroite.write(0);
    OdoGauche.writeVitesse(0);
    OdoDroite.writeVitesse(0);
}

