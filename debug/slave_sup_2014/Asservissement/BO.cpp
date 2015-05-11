#include "BO.h"
#include "Slave/Boucle/BouclePosition.h"

void CBO::calculCmd(double XReel, double YReel, double CapReel, int deltaT)
{
    duree -= deltaT;
}

bool CBO::assFini(double XReel, double YReel, double CapReel)
{
    return (duree <= 0);
}

void CBO::set(double VCons_, double VRotCons_, int duree_)
{
    // Initialise la duree restante.
    duree = duree_;

    // Initialise les commandes.
    VCons = VCons_*1000;
    VRotCons = VRotCons_*100;

    signeMarche = Util::signe(VCons);
}

