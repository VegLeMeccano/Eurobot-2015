#ifndef _PROPU_H
#define _PROPU_H

#include <Sabertooth.h>
#include <Servo.h>

// Cette classe modélise une sabertooth avec deux moteurs.

class Propu
{
private:
    Sabertooth saber;
    const bool saturation;
    static const double valeurSat;

public:
    void cmdMotGaucheSimple(int cmd);  // M2 sur la sabertooth
    void cmdMotDroiteSimple(int cmd);   // M1 sur la sabertooth

    Propu(int adress,Stream& port, bool sat=true);
};
#endif
