#include "BoucleVitesse.h"
#include "Util/Util.h"
#include "Slave/Util/Odo.h"
#include "Slave/Util/Propu.h"
#include "../constantesrobot.h"


using namespace Constantes;

BoucleVitesse::BoucleVitesse() :
    VCons(0), VRotCons(0), prop(ADRESSE_SABER_PROPU, Serial3)
{
}

void BoucleVitesse::interruption()
{
    commanderMoteur();
}

void BoucleVitesse::commanderMoteur()
{
    // Calcul des commandes de vitesse et vitesse de rotation.
    double cmdV = VCons;
    double cmdVRot = VRotCons;

    // On convertit les vitesses en commande Sabertooth
    double cmdVST = cmdV*127/100;
    double cmdVRotST = cmdVRot*127/100;

    cmdVST = Util::sat(cmdVST, -VITESSE_TRANS_MAX, VITESSE_TRANS_MAX);
    cmdVRotST = Util::sat(cmdVRotST, -VITESSE_ROT_MAX, VITESSE_ROT_MAX);

    // Calcul des commandes sur chaques moteurs.
    // Il n'y a pas besoin de multiplier par le demi empattement, parce qu'on a tout converti en signaux numériques,
    // donc il n'y a pas de problèmes d'homogénéité.
    double cmdMotGauche = cmdVST - cmdVRotST;
    double cmdMotDroit =  cmdVST + cmdVRotST;

    // Envoie des commandes aux moteurs.
    // Si des saturations doivent être appliquées, elles le seront dans Propu.
    // Le signe moins est là pour éviter de changer les branchements sur la sabertooth inaccessible.
    prop.cmdMotGaucheSimple(-cmdMotGauche);
    prop.cmdMotDroiteSimple(cmdMotDroit);

//    if (cmdMotGauche != 0 && cmdMotDroit != 0)
//    {
//        Serial.print(F(" cmdSab "));
//        Serial.print(cmdMotGauche);
//        Serial.print(" ");
//        Serial.println(cmdMotDroit);
//    }
}

void BoucleVitesse::setVCons(double VCons_)
{
    VCons = VCons_;
}

void BoucleVitesse::setVRotCons(double VRotCons_)
{
    VRotCons = VRotCons_;
}
