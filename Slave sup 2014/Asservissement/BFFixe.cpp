#include "BFFixe.h"
#include "Util/Util.h"
#include "Slave/constantesrobot.h"
#include <math.h>

using namespace Constantes;

BFFixe::BFFixe(int deltaT) : XObjectif(0), YObjectif(0), capObjectif(0)
{
    pidRot.set(rKP, rKI, rKD, rKF, rSatI, deltaT);
    pidTrans.set(tKP, tKI, tKD, tKF, tSatI, deltaT);
}

void BFFixe::calculCmd(double XReel, double YReel, double capReel, int deltaTms)
{
//    // On convertit deltaT en secondes
//    double deltaT = (double)deltaTms/(double)1000;

//    // On commence par calculer les angles nécessaires. cf rapport
//    double alpha = capObjectif - capReel;
//    double beta = Util::arg(XObjectif - XReel, YObjectif - YReel) - capObjectif;

//    if (signeMarche == -1)
//        beta += 180;

//    double erreurCapTotal = moduloCap(alpha + beta * poidsBeta);

//    // Puis on calcule la consigne de rotation
//    double VRotTrapeze = pidRot.calculCmd(erreurCapTotal);
//    //Serial.print(VRotTrapeze);
//    //Serial.print(" ");
//    VRotTrapeze = Util::sat(VRotTrapeze, -100, 100);

//    // Et on limite l'accélération en rotation
//    if (fabs(VRotCons-VRotTrapeze) <= ACCELERATION_ROT_MAX*deltaT)
//        VRotCons = VRotTrapeze;
//    else if (VRotCons > VRotTrapeze)
//        VRotCons -= ACCELERATION_ROT_MAX*deltaT;
//    else if (VRotCons < VRotTrapeze)
//        VRotCons += ACCELERATION_ROT_MAX*deltaT;

//    // Ensuite on s'occupe de la translation
//    double distanceRestante = sqrt( (XObjectif-XReel)*(XObjectif-XReel) + (YObjectif-YReel)*(YObjectif-YReel) );
//    double VTransTrapeze = pidTrans.calculCmd(distanceRestante);
//    VTransTrapeze = signeMarche*Util::sat(VTransTrapeze, 0, vitesse*100);

//    if (fabs(VCons-VTransTrapeze) <= ACCELERATION_TRANS_MAX*deltaT)
//        VCons = VTransTrapeze;
//    else if (VCons > VTransTrapeze)
//        VCons -= ACCELERATION_TRANS_MAX*deltaT;
//    else if (VCons < VTransTrapeze)
//        VCons += ACCELERATION_TRANS_MAX*deltaT;
}

bool BFFixe::assFini(double XReel, double YReel, double capReel)
{
    return false;
}

void BFFixe::set(double XObjectif_, double YObjectif_, double capObjectif_)
{
    XObjectif = XObjectif_;
    YObjectif = YObjectif_;
    capObjectif = capObjectif_;
}
