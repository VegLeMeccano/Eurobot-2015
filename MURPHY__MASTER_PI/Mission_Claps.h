#ifndef MISSION_CLAPS_H
#define MISSION_CLAPS_H

#include "Coord.h"
#include "Mission.h"

class Mission_Claps: public Mission
{
    public:
        Mission_Claps(bool mission_a_faire_);
        void set_couleur(int couleur_);

    private:
        int couleur;

};

#endif // MISSION_CLAPS_H
