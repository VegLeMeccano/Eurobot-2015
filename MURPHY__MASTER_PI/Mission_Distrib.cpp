#include "Mission_Distrib.h"

Mission_Distrib::Mission_Distrib(bool mission_a_faire_):
    Mission(mission_a_faire_, 14, Coord(0,0,0),"mission distrib"),
    couleur(0)
{
    //ctor
    set_couleur(couleur);
}

void Mission_Distrib::set_couleur(int couleur_)
{
    couleur = couleur_;
    if(couleur == 0)
    {
        set_coord_debut_mission(Coord(-996,999,-90));
    }
    if(couleur == 1)
    {
        set_coord_debut_mission(Coord(996,999, 90));
    }
}
