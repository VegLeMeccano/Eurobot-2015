#ifndef _BO_H
#define _BO_H


#include "AsservPosition.h"

class BouclePosition;

class CBO : public AsservPosition
{
private:
    int duree;
    double VCons;
    double VRotCons;

public:
    void calculCmd(double XReel, double YReel, double CapReel, int deltaT);
    bool assFini(double XReel, double YReel, double CapReel);
    void set(double VCons_, double VRotCons_, int duree_);
};

typedef CBO BO;
#endif
