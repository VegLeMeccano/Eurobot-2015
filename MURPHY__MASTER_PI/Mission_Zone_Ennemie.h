#ifndef MISSION_ZONE_ENNEMIE_H
#define MISSION_ZONE_ENNEMIE_H

#include "Coord.h"
#include "Mission.h"

class Mission_Zone_Ennemie : public Mission
{
    public:
        Mission_Zone_Ennemie(bool mission_a_faire_);
        void set_couleur(int couleur_);

    private:
        int couleur;

};

#endif // MISSION_ZONE_ENNEMIE_H
