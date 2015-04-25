#include "Mission_Depot_Tour_Estrade.h"

Mission_Depot_Tour_Estrade::Mission_Depot_Tour_Estrade(bool mission_a_faire_):
    Mission(mission_a_faire_, 20, Coord(0,0,0),"mission depot tour estrade"),
    couleur(0)
{
    //ctor
    set_couleur(couleur);
}

void Mission_Depot_Tour_Estrade::set_couleur(int couleur_)
{
    couleur = couleur_;
    if(couleur == 0)
    {
        set_coord_debut_mission(Coord(-210,300,180));
    }
    if(couleur == 1)
    {
        set_coord_debut_mission(Coord(210,300, 180));
    }
}
