#include "Gestionnaire_Mission.h"

/********************************************************
    GESTIONNAIRE DE MISSION
*********************************************************/
Gestionnaire_Mission::Gestionnaire_Mission():
        element_robot(),        // pour savoir ce qu'on a sous la dent
        mission_claps(true),
        mission_distrib(true),
        mission_chiage_balle(true),
        mission_zone_centrale(true),
        mission_depot_tour_depart(true),
        mission_depot_tour_estrade(true),
        mission_zone_ennemie(true),
        coord_reel(0,0,0)
{

}

#define MISSION_CLAPS 0
#define MISSION_DISTRIB 1
#define MISSION_CHIAGE_BALLE 2
#define MISSION_ZONE_CENTRALE 3
#define MISSION_TOUR_DEPART 4
#define MISSION_TOUR_ESTRADE 5
#define MISSION_ZONE_ENNEMIE 6

void Gestionnaire_Mission::decision_mission()
{
    vector<float> vectorDistance;
    vector<string> vectorName;
    vector<int> vectorMission;

    if(!mission_claps.is_accomplie())               { vectorMission.push_back(MISSION_CLAPS); vectorName.push_back(mission_claps.get_title()); vectorDistance.push_back(mission_claps.distance_to_mission(coord_reel)); }
    if(!mission_distrib.is_accomplie())             { mission_distrib.affiche(); }
    if(!mission_chiage_balle.is_accomplie())        { mission_chiage_balle.affiche(); }
    if(!mission_zone_centrale.is_accomplie())       { mission_zone_centrale.affiche(); }
    if(!mission_depot_tour_depart.is_accomplie())   { mission_depot_tour_depart.affiche(); }
    if(!mission_depot_tour_estrade.is_accomplie())  { mission_depot_tour_estrade.affiche(); }
    if(!mission_zone_ennemie.is_accomplie())        { mission_zone_ennemie.affiche(); }

    cout<<"mission dispo : "<<vectorDistance.size()<<endl;


}

void Gestionnaire_Mission::set_couleur(int couleur_)
{
    couleur = couleur_;
    mission_claps.set_couleur(couleur_);
    mission_distrib.set_couleur(couleur_);
    mission_chiage_balle.set_couleur(couleur_);
    mission_zone_centrale.set_couleur(couleur_);
    mission_depot_tour_depart.set_couleur(couleur_);
    mission_depot_tour_estrade.set_couleur(couleur_);
    mission_zone_ennemie.set_couleur(couleur_);
}


void Gestionnaire_Mission::affiche_mission_active()
{
    cout<<"mission en cours : "<<endl;
    if(!mission_claps.is_accomplie())               { mission_claps.affiche(); }
    if(!mission_distrib.is_accomplie())             { mission_distrib.affiche(); }
    if(!mission_chiage_balle.is_accomplie())        { mission_chiage_balle.affiche(); }
    if(!mission_zone_centrale.is_accomplie())       { mission_zone_centrale.affiche(); }
    if(!mission_depot_tour_depart.is_accomplie())   { mission_depot_tour_depart.affiche(); }
    if(!mission_depot_tour_estrade.is_accomplie())  { mission_depot_tour_estrade.affiche(); }
    if(!mission_zone_ennemie.is_accomplie())        { mission_zone_ennemie.affiche(); }
}


Mission_Claps*                  Gestionnaire_Mission::get_mission_claps()
{
    return &mission_claps;
}
Mission_Distrib*                Gestionnaire_Mission::get_mission_distrib()
{
    return &mission_distrib;
}
Mission_Chiage_Balle*           Gestionnaire_Mission::get_mission_chiage_balle()
{
    return &mission_chiage_balle;
}
Mission_Zone_centrale*          Gestionnaire_Mission::get_mission_zone_centrale()
{
    return &mission_zone_centrale;
}
Mission_Depot_Tour_Depart*      Gestionnaire_Mission::get_mission_depot_tour_depart()
{
    return &mission_depot_tour_depart;
}
Mission_Depot_Tour_Estrade*     Gestionnaire_Mission::get_mission_depot_tour_estrade()
{
    return &mission_depot_tour_estrade;
}
Mission_Zone_Ennemie*           Gestionnaire_Mission::get_mission_zone_ennemie()
{
    return &mission_zone_ennemie;
}

Element_Robot* Gestionnaire_Mission::get_element_robot()
{
    return &element_robot;
}


// retourne la strategie en cours, pour gestionnaire
int Gestionnaire_Mission::strategie()
{
    if(strategie_1 == 0 && strategie_2 == 0)
    {
        return STRAT_0;
    }
    if(strategie_1 == 1 && strategie_2 == 0)
    {
        return STRAT_1;
    }
    if(strategie_1 == 0 && strategie_2 == 1)
    {
        return STRAT_2;
    }
    if(strategie_1 == 1 && strategie_2 == 1)
    {
        return STRAT_3;
    }
}

void Gestionnaire_Mission::set_strategie_1(int strat_)
{
    strategie_1 = strat_;
}

void Gestionnaire_Mission::set_strategie_2(int strat_)
{
    strategie_2 = strat_;
}

