#ifndef _BOUCLEVITESSE_H
#define _BOUCLEVITESSE_H

#include "Util/periode.h"
#include "Slave/Util/PID.h"
#include "Slave/Util/Propu.h"
#include "Slave/constantesrobot.h"

class BoucleVitesse
{
private:
    // Les consignes de vitesse
    double VCons;
    double VRotCons;

    // Les moteurs que l'on commande
    Propu prop;

    void commanderMoteur();

public:
    BoucleVitesse();
    void interruption();

    void setVCons(double Vcons_);
    void setVRotCons(double VRotCons_);
};


#endif
