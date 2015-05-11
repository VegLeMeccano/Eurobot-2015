#include "BFAvance.h"
#include "Slave/Boucle/BouclePosition.h"
#include "Util/Util.h"
#include "../constantesrobot.h"

using namespace Constantes;

CBFAvance::CBFAvance(int deltaT) : pid()
{
    pid.set(tKP, tKI, tKD, tKF, tSatI, deltaT);
    pidCap.set(1,0,5,0,0,deltaT);
}

void CBFAvance::calculCmd(double XReel, double YReel, double capReel, int deltaTms)
{
    // On commence par commender le cap, asservi à capConst
    double erreurCap = moduloCap(capConst-capReel);
    VRotCons = pidCap.calculCmd(erreurCap);

    // On convertit deltaT en secondes
    double deltaT = (double)deltaTms/1000;

    // Ensuite on s'occupe de la translation.
    double sensAvance = Util::signe(cosCap*(XReel-oldX) + sinCap*(YReel-oldY));
    // Dans le calcul de la distance parcourue, on suppose que le cap réel respecte suffisamment la consigne.
    distanceParcourue += sensAvance*sqrt((XReel-oldX)*(XReel-oldX) + (YReel-oldY)*(YReel-oldY));

    /* On veut un profil de vitesse trapézoïdal. La vitesse de consigne est donc proportionnelle
     * qu'il reste à parcourir, saturée à la vitesse max (on limite ainsi la décélération). Pour
     * limiter l'accélération, on impose que la commande ne peut augmenter plus que l'accélération. */

    double vitesseTrapeze = signeMarche*pid.calculCmd(distanceObjectif, distanceParcourue);

//    Serial.print("pid ");
//    Serial.print(vitesseTrapeze);

    // La multiplication par 100 est arbitraire. Mais en fait elle change rien, ça revient à changer les gains.
    // Mais ça évite d'avoir des gains de l'ordre de 0.005 par exemple
    vitesseTrapeze = signeMarche*Util::sat(vitesseTrapeze , -vitesse*100, vitesse*100);

    if (fabs(VCons-vitesseTrapeze) <= ACCELERATION_TRANS_MAX*deltaT)
        VCons = vitesseTrapeze;
    else if (VCons > vitesseTrapeze)
        VCons -= ACCELERATION_TRANS_MAX*deltaT;
    else if (VCons < vitesseTrapeze)
        VCons += ACCELERATION_TRANS_MAX*deltaT;

//    Serial.print(" parc ");
//    Serial.print(distanceParcourue);
//    Serial.print(" trap ");
//    Serial.print(vitesseTrapeze);
//    Serial.print(" VCons ");
//    Serial.print(VCons);

    // Mise à jour des variables
    oldX = XReel; oldY = YReel;
}

// L'asservissement est considéré comme fini une fois qu'on a parcouru la distance demandée
bool CBFAvance::assFini(double XReel, double YReel, double CapReel)
{
    // si le robot est en marche avant
    if (signeMarche == 1)
    {
        if ((distanceObjectif - distanceParcourue) <= 5)
        {
            compteurFinAsserv ++;
        }
        else
            compteurFinAsserv = 0;
        return (compteurFinAsserv >= 5);
    }
    // sinon on est en marche arrière
    else
    {
        if ((distanceObjectif - distanceParcourue) >= -5)
        {
            compteurFinAsserv ++;
        }
        else
            compteurFinAsserv = 0;
        return (compteurFinAsserv >= 5);
    }
}


void CBFAvance::set(double Xactuel, double Yactuel, double distance_, double vitesse_, double capConst_, bool arretFinal_)
{
    VCons = 0;
    VRotCons = 0;
    distanceParcourue = 0;
    oldX = Xactuel;
    oldY = Yactuel;
    distanceObjectif = distance_;
    vitesse = fabs(vitesse_);
    capConst = capConst_;
    cosCap = cos(capConst_*Util::DEG2RAD);
    sinCap = sin(capConst_*Util::DEG2RAD);
    arretFinal = arretFinal_;
    signeMarche = Util::signe(distance_);
    compteurFinAsserv = 0;
    pid.RAZ_integrateur();
    pidCap.RAZ_integrateur();
}

void CBFAvance::setPIDtrans(double kP, double kI, double kD, double satI)
{
    pid.set(kP, kI, kD, 0, satI);
}
