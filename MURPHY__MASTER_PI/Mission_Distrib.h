#ifndef MISSION_DISTRIB_H
#define MISSION_DISTRIB_H

#include "Coord.h"
#include "Mission.h"

class Mission_Distrib : public Mission
{
    public:
        Mission_Distrib(bool mission_a_faire_);
        void set_couleur(int couleur_);

    private:
        int couleur;

};

#endif // MISSION_DISTRIB_H
