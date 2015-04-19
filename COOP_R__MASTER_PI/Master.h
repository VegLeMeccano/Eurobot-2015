#ifndef MASTER_H
#define MASTER_H
#include "Period.h"
#include "MAE_COOP_R.h"

#define PERIODE_MASTER 50

#define STRAT_NOMINALE 0
#define STRAT_CHIANTE 1

#define COULEUR_JAUNE 0
#define COULEUR_VERT 1

class Master
{
    public:

        // méthodes
        Master();
        //static Master* getInstance{ return &masterInstance;}
        void run();
        void set_time_out(int dt_);     // besoin d'avoir acces de l'exterieur, pour mettre les tempos
        void reset_time_out();
        bool is_time_out();

        void set_couleur(int couleur_);
        MAE_COOP_R* get_MAE_COOP_R();
        int get_Couleur();
        bool is_Vert();
        bool is_Jaune();


    private:
        //static Master masterInstance;
        // attribut
        long t_over;
        bool time_out_on;
        Period periode_run;
        MAE_COOP_R mae_coop_r;
        bool est_jaune;         // couleur de jeu
        int couleur;
        int strategie;


};

extern Master* master;

#endif // MASTER_H
