#include "Master.h"

Master::Master():
    est_jaune(true),
    periode_run(PERIODE_MASTER),
    time_out_on(false),
    t_over(0),
    couleur(0),
    tour_de_roue(0),
    cycle_attente(0)
{
    //set_couleur(COULEUR_JAUNE);
    //ctor
    mae_coop_r.create();
    //mae_coop_r.doActivity();
    //mae_coop_r.stratEnleve();
    //mae_coop_r.evitement();
    cout << "[MASTER_COOP'R] initialisation" << endl;
    //mae_coop_r.s
}

// retourne la couleur de la strat
int Master::get_Couleur()
{
    return couleur;
}

// la strat est elle verte?
bool Master::is_Vert()()
{
    return (couleur==COULEUR_VERT);
}

// jaune?
bool Master::is_Jaune()()()
{
    return (couleur==COULEUR_JAUNE);
}

// retourne la MAE
MAE_COOP_R* Master::get_MAE_COOP_R()
{
    return &mae_coop_r;
}


// modifie la couleur de la strat
void Master::set_couleur(int couleur_)
{
    couleur = couleur_;
    if (couleur == COULEUR_JAUNE)
    {
        cout << "[COULEUR] Jaune" << endl;
    }

    if (couleur == COULEUR_VERT)
    {
        cout << "[COULEUR] Vert" << endl;
    }
}


// boucle de controle du master
void Master::run()
{
    if(periode_run.is_over())
        {
            periode_run.reset();

            // execution des instructions
            mae_coop_r.doActivity();

            // les transistions autre que time_out provienne du protocole de COM par ordre retour

            // check les time out
            if(is_time_out())
            {
                mae_coop_r.time_out();
            }

            /** appel du protocol de COM
                - adversaire
                - assFini
                - ioFini
            */

        }
}


// tempo
void Master::set_time_out(int dt_)
{
    t_over = clock() + dt_;
    time_out_on = true;
    cout<<"time_out set "<< dt_<<endl;
}

// reset time out
void Master::reset_time_out()
{
    time_out_on = false;
}

// es ce que c'est fini
bool Master::is_time_out()
{
   if (time_out_on && t_over < clock())
   {
     time_out_on = false;
     return true;
   }
   return false;
}

/** gere les cycle d'attente de l'evitement
*/
int Master::get_cycle_attente()
{
    return cycle_attente;
}
void Master::cycle_attente_incremente()
{
    cycle_attente++;
}
void Master::cycle_attente_reset()
{
    cycle_attente = 0;
}


/** gere les tour de roue
*/
int Master::get_tour_roue()
{
    return tour_de_roue;
}
void Master::tour_roue_incremente()
{
    tour_de_roue++;
}
void Master::tour_roue_reset()
{
    tour_de_roue = 0;;
}
