#include "Mission_Zone_centrale.h"

Mission_Zone_centrale::Mission_Zone_centrale(bool mission_a_faire_):
    Mission(mission_a_faire_, 4, Coord(0,0,0),"mission zone centrale"),
    couleur(0)
{
    set_couleur(couleur);
}



void Mission_Zone_centrale::set_couleur(int couleur_)
{
    couleur = couleur_;
    if(couleur == 0)
    {
        set_coord_debut_mission(Coord(-200,800,-90));
    }
    if(couleur == 1)
    {
        set_coord_debut_mission(Coord(200,800, 90));
    }
}
