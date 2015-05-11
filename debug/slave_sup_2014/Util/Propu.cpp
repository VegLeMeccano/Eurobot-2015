#include "Propu.h"
#ifdef PRINCIPAL

double const Propu::valeurSat = 128;

#elif defined PMI

double const Propu::valeurSat = 128;

#endif

Propu::Propu(int adress,Stream& port,bool sat): saber(adress,port),saturation(sat)
{
    //moteur.attach(42, 0, 2040);

    saber.setRamping(true);
    saber.autobaud(false);
}

void Propu::cmdMotGaucheSimple(int cmd)
{
    if(saturation)
    {
        cmd = cmd > valeurSat ? valeurSat : cmd;
        cmd = cmd < -valeurSat ? -valeurSat : cmd;
    }
    saber.motor(2, cmd);
}

void Propu::cmdMotDroiteSimple(int cmd)
{
    if(saturation)
    {
        cmd = cmd > valeurSat ? valeurSat : cmd;
        cmd = cmd < -valeurSat ? -valeurSat : cmd;
    }
    saber.motor(1, cmd);
}

