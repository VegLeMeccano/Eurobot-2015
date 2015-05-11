
#include "PID.h"
#include "Util/Util.h"

//Constructeur
PID::PID() : KP(0), KI(0), KD(0), KF(0), SatI(0), deltaT(1), erreurT1(0), erreurT2(0), cmd(0)
{
}

// Renvoie la nouvelle commande.
// Prend en paramètre la position de consigne et la valeur réelle renvoyée par les capteurs.
// ATTENTION : cette fonction doit être appelée tous les "deltaT" millisecondes.
double PID::calculCmd(double consigne, double reel)
{
    double erreurT0 = consigne - reel;

    // La formule suivante est extraite de :
    // http://lorien.ncl.ac.uk/ming/digicont/digimath/dpid1.htm
    // edit : il serait mieux de dériver la position et pas l'erreur, mais à cause de la surcharge c'est compliqué.
    // cf : en.wikipedia.org/wiki/PID_controller#Basing_derivative_action_on_PV
    cmd += KP*(erreurT0-erreurT1)
         + KI*deltaT*Util::sat(erreurT0, -SatI, SatI)
         + KD*(erreurT0-2.*erreurT1+erreurT2)/deltaT;

    erreurT2 = erreurT1;
    erreurT1 = erreurT0;

    return (cmd + KF*consigne);
}

double PID::calculCmd(double erreur)
{
    // erreur est égal à consigne - réel
    return calculCmd(erreur, 0);
}

//Remet à zéro la valeur de l'intégrateur du PID.
//Permet de repartir d'un asservissement propre lorsqu'un nouvel ordre d'asservissement arrive.
//Evite les effets de bord (et donc les mauvaises surprises !)
void PID::RAZ_integrateur()
{
    erreurT1 = 0.;
    erreurT2 = 0.;
    cmd = 0.;
}

void PID::set(double KP_, double KI_, double KD_, double KF_, double SatI_)
{
    KP = KP_;
    KI = KI_;
    KD = KD_;
    KF = KF_;
    SatI = SatI_;
}

void PID::set(double KP_, double KI_, double KD_, double KF_, double SatI_, int deltaT_)
{
    set(KP_, KI_, KD_, KF_, SatI_);
    deltaT = deltaT_;
}

