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

        bool claps_coin;
        bool claps_estrade;
        bool verre_et_stands;
        bool stand_estrade;


};

#endif // MISSION_CLAPS_H
