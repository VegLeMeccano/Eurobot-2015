#ifndef _BFCERCLE_H
#define _BFCERCLE_H


#include "AsservPosition.h"
#include "Slave/Util/PID.h"
#include "Slave/Util/Vitesse.h"
class BouclePosition;
class Util;

class CBFCercle : public AsservPosition
{
private:

    //Variables d'entrees
    double vitesse_droite;
    double rayon;
    double capObj; //Defini comme angle Theta du cercle correspondant, voir repere de la table
    double XCentre;
    double YCentre;
    double vitesse;
    int sens; //1 pour trigo, -1 pour horaire. Sens détermine donc si le robot est en marche avant ou arrière
    int nbTours;

public:
    CBFCercle(int deltaT);

    void calculCmd(double XReel, double YReel, double capReel, int deltaT);

    bool assFini(double XReel, double YReel, double capReel);

    void set(double XCentre_, double YCentre_, double rayon_, double capObj_,
             double vitesse_, int sens_ = 1, int nbTours_ = 0);

private:
    PID pidTrans;
    PID pidRot;
};

typedef CBFCercle BFCercle;
#endif
