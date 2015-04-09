#include "BFDroite.h"
#include "Util/Util.h"
#include "Slave/Boucle/BouclePosition.h"
#include "Slave/Slave.h"
#include "Slave/constantesrobot.h"
#include <math.h>

using namespace Constantes;

// on créé trois PID correspondant aux trois étapes.
CBFDroite::CBFDroite(int deltaT) : XObjectif(0), YObjectif(0), capObjectif(0),
    vitesse(0), cosCap(0), sinCap(0), poidsAlpha(1), poidsBeta(2)
{
    pidRot.set(rKP, rKI, rKD, rKF, rSatI, deltaT);
    pidTrans.set(tKP, tKI, tKD, tKF, tSatI, deltaT);
}

void CBFDroite::calculCmd(double XReel, double YReel, double capReel, int deltaTms)
{
    // On convertit deltaT en secondes
    double deltaT = (double)deltaTms/(double)1000;

    // On s'occupe de la translation
    double distanceRestante = sqrt( (XObjectif-XReel)*(XObjectif-XReel) + (YObjectif-YReel)*(YObjectif-YReel) );
    double VTransTrapeze = pidTrans.calculCmd(distanceRestante);
    VTransTrapeze = signeMarche*Util::sat(VTransTrapeze, -vitesse*100, vitesse*100);

    if (fabs(VCons-VTransTrapeze) <= ACCELERATION_TRANS_MAX*deltaT)
        VCons = VTransTrapeze;
    else if (VCons > VTransTrapeze)
        VCons -= ACCELERATION_TRANS_MAX*deltaT;
    else if (VCons < VTransTrapeze)
        VCons += ACCELERATION_TRANS_MAX*deltaT;

    // Et on calcule les angles nécessaires. cf rapport
    double alpha = moduloCap(capObjectif - capReel);
    double beta = Util::arg(XObjectif - XReel, YObjectif - YReel) - capObjectif;
    if (signeMarche == -1)
        beta += 180;
//    if (distanceRestante < 100*vitesse)
//        beta = 0;
    beta = moduloCap(beta);

    double erreurCapTotal = moduloCap(alpha * poidsAlpha + beta * poidsBeta);

    // Puis on calcule la consigne de rotation
    double VRotTrapeze = pidRot.calculCmd(erreurCapTotal);
    //Serial.print(VRotTrapeze);
    //Serial.print(" ");
    VRotTrapeze = Util::sat(VRotTrapeze, -100, 100);

    // Et on limite l'accélération en rotation
    if (fabs(VRotCons-VRotTrapeze) <= ACCELERATION_ROT_MAX*deltaT)
        VRotCons = VRotTrapeze;
    else if (VRotCons > VRotTrapeze)
        VRotCons -= ACCELERATION_ROT_MAX*deltaT;
    else if (VRotCons < VRotTrapeze)
        VRotCons += ACCELERATION_ROT_MAX*deltaT;

//    Serial.print(alpha);
//    Serial.print(" ");
//    Serial.print(beta);
//    Serial.print(" ");
//    Serial.print(erreurCapTotal);
//    Serial.print(" ");
//    Serial.print(VRotTrapeze);
//    Serial.print(" ");
//    Serial.print(VRotCons);
//    Serial.print(" ");
//    Serial.print(VTransTrapeze);
//    Serial.print(" ");
//    Serial.println(VCons);
}

//Condition de fin correspondant a l'arrivée a la position.
bool CBFDroite::assFini(double XReel, double YReel, double capReel)
{
    // Calcul du produit scalaire pour savoir si on a dépasse la ligne orthogonale
    // au vecteur cap d'arrivée. Si on est en marche avant, le ps sera négatif, sinon il sera négatif.
    double ps = cosCap*(XObjectif - XReel) + sinCap*(YObjectif - YReel);
    // Calcul de la distance au point objectif
    double distance = pow(XObjectif - XReel, 2) + pow(YObjectif - YReel, 2);
//    Serial.print("assFini : ");
//    Serial.println(signeMarche*ps);

#ifdef PRINCIPAL
    return (signeMarche*ps < (40*vitesse) && distance < 100*100);
#elif defined PMI
    return (signeMarche*ps < (25*vitesse) && distance < 100*100);
#endif
}

void CBFDroite::set(double XObjectif_, double YObjectif_, double capObjectif_, double vitesse_,
                    double XReel, double YReel, double capReel)
{
    XObjectif = XObjectif_;
    YObjectif = YObjectif_;
    capObjectif = capObjectif_;
    cosCap = cos(capObjectif_ * Util::DEG2RAD);
    sinCap = sin(capObjectif_ * Util::DEG2RAD);
    vitesse = fabs(vitesse_);
    signeMarche = Util::signe(cos(capReel*Util::DEG2RAD)*(XObjectif - XReel) +
                              sin(capReel*Util::DEG2RAD)*(YObjectif - YReel));
    if (signeMarche == 0) signeMarche = 1;
    pidRot.RAZ_integrateur();
}
