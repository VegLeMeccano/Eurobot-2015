#include "BFCap.h"
#include "Slave/Boucle/BouclePosition.h"
#include "Util/Util.h"
#include "../Slave/constantesrobot.h"

using namespace Constantes;

CBFCap::CBFCap(int deltaT) : capCons(0), pid()
{
    pid.set(rKP, rKI, rKD, rKF, rSatI, deltaT);
}

void CBFCap::calculCmd(double XReel, double YReel, double capReel, int deltaTms)
{
    // On met la translation à 0 et on calcule la rotation
    VCons = 0;

    // On convertit deltaT en secondes
    double deltaT = (double)deltaTms/(double)1000;

    /* On veut un profil de vitesse trapézoïdal. La vitesse de consigne est donc proportionnelle,
     * saturée à la vitesse max (on limite ainsi la décélération). Pour limiter
     * l'accélération, on impose que la commande ne peut augmenter plus que l'accélération. */

    double vitesseTrapeze = pid.calculCmd(moduloCap(capCons-capReel));

    // La multiplication par 100 est arbitraire. Mais en fait elle change rien, ça revient à changer les gains.
    // Mais ça évite d'avoir des gains de l'ordre de 0.0001 par exemple
    vitesseTrapeze = Util::sat(vitesseTrapeze, -vitesseRot*100, vitesseRot*100);

    if (fabs(VRotCons-vitesseTrapeze) <= ACCELERATION_ROT_MAX*deltaT)
        VRotCons = vitesseTrapeze;
    else if (VRotCons > vitesseTrapeze)
        VRotCons -= ACCELERATION_ROT_MAX*deltaT;
    else if (VRotCons < vitesseTrapeze)
        VRotCons += ACCELERATION_ROT_MAX*deltaT;

//    Serial.print("cons ");
//    Serial.print(capCons);
//    Serial.print(" reel ");
//    Serial.print(capReel);
//    Serial.print(" trap ");
//    Serial.print(vitesseTrapeze);
//    Serial.print(" Vrot ");
//    Serial.print(VRotCons);

    // Remarque : on ne sature pas la commande ici. En effet, c'est pas à l'algo de saturer la commande,
    // mais à la propu.
}

bool CBFCap::assFini(double XReel, double YReel, double capReel)
{
    if (fabs(moduloCap(capReel - capCons))<=3)
        compteurFinAsserv ++;
    else
        compteurFinAsserv = 0;
    return (compteurFinAsserv >= 5);
}

void CBFCap::set(double capCons_, double vitesseRot_, bool arretFinal_)
{
    compteurFinAsserv = 0;
    VRotCons = 0;
    capCons = capCons_;
    vitesseRot = vitesseRot_;
    arretFinal = arretFinal_;
    pid.RAZ_integrateur();
}

void CBFCap::setPIDrot(double kP, double kI, double kD, double satI)
{
    pid.set(kP, kI, kD, 0, satI);
}
