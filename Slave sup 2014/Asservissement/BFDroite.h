#ifndef _BFDROITE_H
#define _BFDROITE_H


#include "AsservPosition.h"
#include "Slave/Util/PID.h"
#include "Slave/Util/Vitesse.h"
#include<math.h>

class Util;
class BouclePosition;
class StationSol;

class CBFDroite : public AsservPosition
{
private:
    double XObjectif;
    double YObjectif;
    double capObjectif;

    // la vitesse max à laquelle se déplacer
    double vitesse;

    // variables pour éviter de calculer de la trigo trop souvent
    double cosCap;
    double sinCap;

    // poids du beta dans la pondération. cf rapport
    double poidsAlpha, poidsBeta;

    // PID pour le cap et la vitesse
    PID pidRot;
    PID pidTrans;

public:
    CBFDroite(int deltaT);

    void calculCmd(double XReel, double YReel, double capReel, int deltaT);
    bool assFini(double XReel, double YReel, double capReel);
    void set(double XObjectif_, double YObjectif_, double capObjectif_, double vitesse_, double XReel, double YReel, double capReel);
};

typedef CBFDroite BFDroite;
#endif
