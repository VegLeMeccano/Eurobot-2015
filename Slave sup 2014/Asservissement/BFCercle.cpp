#include "BFCercle.h"
#include "Util/Util.h"
#include "Slave/Boucle/BouclePosition.h"
#include "Slave/Slave.h"
#include "Slave/constantesrobot.h"
#include <math.h>

using namespace Constantes;

CBFCercle::CBFCercle(int deltaT)
{
    pidTrans.set(tKP,tKI,tKD,tKF,tSatI, deltaT);
    pidRot.set(rKP, rKI,rKD,rKF,rSatI, deltaT);
}

// Le principe de cette BF est de rester à distance constante du centre. On corrige l'erreur en tournant
// plus si on est trop loin, et moins si on est trop près.
void CBFCercle::calculCmd(double XReel, double YReel, double capReel, int deltaT)
{
    // Calcul de la distance au centre du cercle
    double dx = XReel - XCentre;
    double dy = YReel - YCentre;
    double distance = sqrt(dx*dx + dy*dy);

    // on corrige la trajectoire du robot pour se rapprocher ou s'éloigner du centre
    VRotCons = -sens*pidRot.calculCmd(rayon, distance);
    VCons = vitesse; // tout simplement
}

bool CBFCercle::assFini(double XReel, double YReel, double capReel)
{
    /*//Calcul de la distance Ã  l'objectif final
    double Dx = XReel - XEtape;
    double Dy = YReel - YEtape;
    double Erreur = sqrt(Dx*Dx + Dy*Dy);
    static int i=0;
    //Si on est pas loin...
    if(fin && (Erreur<2*largeurCible))
    {
        i++;
        if (i==20)
        {
            i=0;
            return true;
        }
    }
    else i=0;*/
    return false;
}

void CBFCercle::set(double XCentre_, double YCentre_, double rayon_, double capObj_, double vitesse_,
                    int sens_, int nbTours_)
{
    // Paramètres du cercle à suivre
    // capobj est le cap que le robot doit avoir à la fin de l'asserv
    XCentre = XCentre_;
    YCentre = YCentre_;
    rayon = rayon_;
    capObj = moduloCap(capObj_);
    sens = sens_;  // 1 pour trigo, -1 pour horaire
    nbTours = nbTours_;

    // On ajoute au PID une commande directe. En effet, si le robot est à la bonne distance, on veut quand même
    // qu'il tourne, plutôt que de continuer tout droit et de corriger après. Cette commande directe est inverse-
    // ment proportionnelle au rayon du cercle. Il faut bien sûr trouver la bonne constante de proportionnalité.
    pidRot.set(rKP, rKI, rKD, 1/rayon, rSatI);

    //RAZ des integrateurs des PID
    pidTrans.RAZ_integrateur();
    pidRot.RAZ_integrateur();
}
