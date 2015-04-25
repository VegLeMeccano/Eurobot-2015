#ifndef GESTIONNAIRE_MISSION_H
#define GESTIONNAIRE_MISSION_H

#include "Element_Robot.h"

#include "Mission_Claps.h"
#include "Mission_Depot_Tour_Depart.h"
#include "Mission_Depot_Tour_Estrade.h"
#include "Mission_Distrib.h"
#include "Mission_Zone_Ennemie.h"
#include "Mission_Zone_centrale.h"
#include "Mission_Chiage_Balle.h"

#define STRAT_0 0
#define STRAT_1 1
#define STRAT_2 2
#define STRAT_3 3

#include <vector>
using namespace std;

class Gestionnaire_Mission
{
    private:

        Element_Robot element_robot;        // pour savoir ce qu'on a sous la dent

        // mission prioritaire
        Mission_Claps mission_claps;
        Mission_Distrib mission_distrib;
        Mission_Chiage_Balle mission_chiage_balle;
        Mission_Zone_centrale mission_zone_centrale;

        // mission a remplir avant le gong de fin
        Mission_Depot_Tour_Depart mission_depot_tour_depart;
        Mission_Depot_Tour_Estrade mission_depot_tour_estrade;

        // mission apres depot
        Mission_Zone_Ennemie mission_zone_ennemie;

        //Coordonne actuel
        Coord coord_reel;

        //
        int couleur;
        long temps_restant;

        // pour les trategies
        int strategie_1;
        int strategie_2;

    public:
        Gestionnaire_Mission();
        int strategie();
        void set_strategie_1(int strat_);
        void set_strategie_2(int strat_);

        void set_coord(Coord coord_reel_);

        void set_couleur(int couleur_);
        void decision_mission();            // appel de triger sur la mission a realiser
        void affiche_mission_active();

        Mission_Claps*                  get_mission_claps();
        Mission_Distrib*                get_mission_distrib();
        Mission_Chiage_Balle*           get_mission_chiage_balle();
        Mission_Zone_centrale*          get_mission_zone_centrale();
        Mission_Depot_Tour_Depart*      get_mission_depot_tour_depart();
        Mission_Depot_Tour_Estrade*     get_mission_depot_tour_estrade();
        Mission_Zone_Ennemie*           get_mission_zone_ennemie();

        Element_Robot* get_element_robot();


};

#endif // GESTIONNAIRE_MISSION_H
