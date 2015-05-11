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

// Le principe de cette BF est de rester � distance constante du centre. On corrige l'erreur en tournant
// plus si on est trop loin, et moins si on est trop pr�s.
void CBFCercle::calculCmd(double XReel, double YReel, double capReel, int deltaT)
{
    // Calcul de la distance au centre du cercle
    double dx = XReel - XCentre;
    double dy = YReel - YCentre;
    double distance = sqrt(dx*dx + dy*dy);

    // on corrige la trajectoire du robot pour se rapprocher ou s'�loigner du centre
    VRotCons = -sens*pidRot.calculCmd(rayon, distance);
    VCons = vitesse; // tout simplement
}

bool CBFCercle::assFini(double XReel, double YReel, double capReel)
{
    /*//Calcul de la distance �  l'objectif final
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
    // Param�tres du cercle � suivre
    // capobj est le cap que le robot doit avoir � la fin de l'asserv
    XCentre = XCentre_;
    YCentre = YCentre_;
    rayon = rayon_;
    capObj = moduloCap(capObj_);
    sens = sens_;  // 1 pour trigo, -1 pour horaire
    nbTours = nbTours_;

    // On ajoute au PID une commande directe. En effet, si le robot est � la bonne distance, on veut quand m�me
    // qu'il tourne, plut�t que de continuer tout droit et de corriger apr�s. Cette commande directe est inverse-
    // ment proportionnelle au rayon du cercle. Il faut bien s�r trouver la bonne constante de proportionnalit�.
    pidRot.set(rKP, rKI, rKD, 1/rayon, rSatI);

    //RAZ des integrateurs des PID
    pidTrans.RAZ_integrateur();
    pidRot.RAZ_integrateur();
}
