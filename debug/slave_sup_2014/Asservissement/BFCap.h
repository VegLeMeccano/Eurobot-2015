#ifndef _BFCAP_H
#define _BFCAP_H


#include "AsservPosition.h"
#include "Slave/Util/PID.h"

class BouclePosition;
class Util;

class CBFCap : public AsservPosition
{
private:
    // la consigne de cap, et si on a besoin d'être précis ou pas
    double capCons;
    double vitesseRot;
    // le PID de fin de trajectoire
    PID pid;
public:
    CBFCap(int deltaT);

    void calculCmd(double XReel, double YReel, double capReel, int deltaTms);
    bool assFini(double XReel, double YReel, double capReel);
    void set(double CapCons_, double vitesseRot_, bool arretFinal_);

    // temporaire
    void setPIDrot(double kP, double kI, double kD, double satI);
};

typedef CBFCap BFCap;
#endif
