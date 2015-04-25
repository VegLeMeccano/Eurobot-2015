#include "Mission_Depot_Tour_Depart.h"

Mission_Depot_Tour_Depart::Mission_Depot_Tour_Depart(bool mission_a_faire_):
    Mission(mission_a_faire_, 20, Coord(0,0,0),"mission depot tour depart"),
    couleur(0)
{
    //ctor
    set_couleur(couleur);
}

void Mission_Depot_Tour_Depart::set_couleur(int couleur_)
{
    couleur = couleur_;
    if(couleur == 0)
    {
        set_coord_debut_mission(Coord(-940,996,-90));
    }
    if(couleur == 1)
    {
        set_coord_debut_mission(Coord(940,996, 90));
    }
}
