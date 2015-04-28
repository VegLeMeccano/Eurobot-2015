#ifndef MISSION_DEPOT_TOUR_DEPART_H
#define MISSION_DEPOT_TOUR_DEPART_H

#include "Coord.h"
#include "Mission.h"

class Mission_Depot_Tour_Depart : public Mission
{
    public:
        Mission_Depot_Tour_Depart(bool mission_a_faire_);
        void set_couleur(int couleur_);

    private:
        int couleur;
        bool depot_tour_1;
        bool depot_tour_2;

};

#endif // MISSION_DEPOT_TOUR_DEPART_H
