#include "Mission_Chiage_Balle.h"

Mission_Chiage_Balle::Mission_Chiage_Balle(bool mission_a_faire_):
    Mission(mission_a_faire_, 12, Coord(0,0,0),"mission chiage"),
    couleur(0)
{
    //ctor
    set_couleur(couleur);
}

void Mission_Chiage_Balle::set_couleur(int couleur_)
{
    couleur = couleur_;
    if(couleur == 0)
    {
        set_coord_debut_mission(Coord(0,600,-90));
    }
    if(couleur == 1)
    {
        set_coord_debut_mission(Coord(0,600, 90));
    }
}
