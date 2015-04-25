#ifndef MISSION_DEPOT_TOUR_ESTRADE_H
#define MISSION_DEPOT_TOUR_ESTRADE_H

#include "Coord.h"
#include "Mission.h"

class Mission_Depot_Tour_Estrade : public Mission
{
    public:
        Mission_Depot_Tour_Estrade(bool mission_a_faire_);
        void set_couleur(int couleur_);

    private:
        int couleur;

};

#endif // MISSION_DEPOT_TOUR_ESTRADE_H
