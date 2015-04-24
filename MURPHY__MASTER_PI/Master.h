#ifndef MASTER_H
#define MASTER_H
#include "Period.h"
#include "MAE_MURPHY.h"
#include <wiringPi.h>

#define PERIODE_MASTER 50

#define STRAT_NOMINALE 0
#define STRAT_CHIANTE 1

#define COULEUR_JAUNE 0
#define COULEUR_VERT 1

class Gestionnaire_Mission
{
    private:

    public:
        Gestionnaire_Mission();

};


class Master
{
    private:
        //static Master masterInstance;
        // attribut
        long t_over;
        bool time_out_on;
        Period periode_run;

        MAE_MURPHY mae_murphy;
        int couleur;
        int tour_de_roue;       // pour le deplacement lateral du debut
        int cycle_attente;
        int portSerie;


    public:

        // méthodes
        Master(int portSerie_);
        //static Master* getInstance{ return &masterInstance;}

        // gestion du temps de la MAE
        int getPortSerie();
        void run();
        void set_time_out(int dt_);     // besoin d'avoir acces de l'exterieur, pour mettre les tempos
        void reset_time_out();
        bool is_time_out();


        void set_couleur(int couleur_);     // fixe la couleur, appel depuis la COM
        MAE_MURPHY* get_MAE_MURPHY();       // retourne la MAE, util? je sais pas
        int get_Couleur();                  // couleur pour la strat
        bool is_Vert();                     // couleur pour la strat
        bool is_Jaune();                    // couleur pour la strat



        // pour l'attente dans l'evitement
        int get_cycle_attente();
        void cycle_attente_incremente();
        void cycle_attente_reset();



};

extern Master * master;

#endif // MASTER_H
