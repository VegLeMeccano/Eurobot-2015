#ifndef BFFIXE_H
#define BFFIXE_H

#include "AsservPosition.h"
#include "Slave/Util/PID.h"

class BFFixe : public AsservPosition
{
private:
    double XObjectif;
    double YObjectif;
    double capObjectif;

    // PID pour le cap et la vitesse
    PID pidRot;
    PID pidTrans;

public:
    BFFixe(int deltaT);

    void calculCmd(double XReel, double YReel, double capReel, int deltaTms);
    bool assFini(double XReel, double YReel, double capReel);
    void set(double XObjectif_, double YObjectif_, double capObjectif_);
};

#endif // BFFIXE_H
