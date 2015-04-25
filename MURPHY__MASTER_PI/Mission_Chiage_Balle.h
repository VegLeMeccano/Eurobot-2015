#ifndef MISSION_CHIAGE_BALLE_H
#define MISSION_CHIAGE_BALLE_H

#include "Coord.h"
#include "Mission.h"

class Mission_Chiage_Balle : public Mission
{
    public:
        Mission_Chiage_Balle(bool mission_a_faire_);
        void set_couleur(int couleur_);

    private:
        int couleur;

};

#endif // MISSION_CHIAGE_BALLE_H
