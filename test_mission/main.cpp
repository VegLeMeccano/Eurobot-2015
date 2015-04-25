#include <iostream>



#include "../MURPHY__MASTER_PI/Mission.h"
#include "../MURPHY__MASTER_PI/Mission_Zone_Ennemie.h"
#include "../MURPHY__MASTER_PI/Gestionnaire_Mission.h"

#include <vector>
using namespace std;

int main()
{

    /*
    cout << "Hello world!" <<true<< endl;
    Mission mission(true, 5, Coord(500,0,90),"basique");

    cout << "X : " <<mission.get_coord_debut_mission().get_x()<< endl;
    cout << "Y : " <<mission.get_coord_debut_mission().get_y()<< endl;
    cout << "CAP : " <<mission.get_coord_debut_mission().get_cap()<< endl;

    cout << "mission : " <<mission.is_accomplie()<< endl;
    mission.mission_remplie();
    cout << "mission : " <<mission.is_accomplie()<< endl;

    cout << "distance to mission : " <<mission.distance_to_mission(Coord(0,0,0))<< endl;
*/
/**
    Coord coord_reel(0,0,0);
    Mission_Zone_Ennemie mission_zone_ennemie(false);
    mission_zone_ennemie.set_couleur(1);
    mission_zone_ennemie.affiche();
    cout << "distance to mission : " <<mission_zone_ennemie.distance_to_mission(coord_reel)<< endl;
*/
/**
    Coord coord_reel(0,0,0);
    Mission_Zone_Ennemie* mission_zone_ennemie;
    mission_zone_ennemie = new Mission_Zone_Ennemie(false);
    mission_zone_ennemie->set_couleur(1);
    mission_zone_ennemie->affiche();
    cout << "distance to mission : " <<mission_zone_ennemie->distance_to_mission(coord_reel)<< endl;
*/

    Gestionnaire_Mission* gestionnaire;
    gestionnaire = new Gestionnaire_Mission();
    gestionnaire->decision_mission();

    //gestionnaire->affiche_mission_active();
    gestionnaire->get_mission_claps()->mission_remplie();

    gestionnaire->affiche_mission_active();
/*
    Mission_Zone_Ennemie* mission_zone_ennemie;
    mission_zone_ennemie = new Mission_Zone_Ennemie(true);

    vector<float> vectorDistance;
    vectorDistance.push_back(0.1);
    vectorDistance.push_back(4.0);

    for (int index=0; index<vectorDistance.size(); index++) {
        cout << vectorDistance[index] << endl;
    }
*/

    gestionnaire->decision_mission();



    return 0;


}
