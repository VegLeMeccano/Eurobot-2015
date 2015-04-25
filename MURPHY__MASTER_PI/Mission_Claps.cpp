#include "Mission_Claps.h"

Mission_Claps::Mission_Claps(bool mission_a_faire_):
    Mission(mission_a_faire_, 18, Coord(0,0,0),"mission claps"),
    couleur(0)
{
    //ctor
    set_couleur(couleur);
}

void Mission_Claps::set_couleur(int couleur_)
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
