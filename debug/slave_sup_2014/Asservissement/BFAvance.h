#ifndef _BFAVANCE_H
#define _BFAVANCE_H


#include "AsservPosition.h"
#include "Slave/Util/PID.h"
#include "Slave/Util/Vitesse.h"

class Util;



class CBFAvance : public AsservPosition
{
private:

    // distance à parcourir, avec la vitesse demandée
    double distanceObjectif;
    double vitesse;
    // distance parcourue depuis le début de la ligne droite
    double distanceParcourue;
    // le cap à conserver pendant le mouvement (on avance en ligne droite)
    double capConst;
    // le pid pour asservir le cap
    PID pidCap;

    // variables pour mesurer la distance parcourue depuis la dernière fois
    double oldX, oldY;
    double cosCap, sinCap;

    // le PID pour la fin de course
    PID pid;

public:
    CBFAvance(int deltaT);

    void calculCmd(double XReel, double YReel, double capReel, int deltaTms);
    bool assFini(double XReel, double YReel, double CapReel);

    // On donne la position initiale, la distance à parcourir, la vitesse max, et le cap à conserver au long du mouvement
    void set(double Xactuel, double Yactuel, double distance_, double vitesse_, double capConst_, bool arretFinal_);

    // temporaire
    void setPIDtrans(double kP, double kI, double kD, double satI);
};

typedef CBFAvance BFAvance;
#endif
