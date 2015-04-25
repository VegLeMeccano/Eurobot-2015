#include "Mission_Zone_Ennemie.h"


Mission_Zone_Ennemie::Mission_Zone_Ennemie(bool mission_a_faire_):
    Mission(mission_a_faire_, 9, Coord(0,0,0),"mission zone ennemie"),
    couleur(0)
{
    //ctor
    set_couleur(couleur);
    //affiche();
}


void Mission_Zone_Ennemie::set_couleur(int couleur_)
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

