#ifndef IO_H
#define IO_H

#include "Const.h"
#include "pins.h"
#include <Arduino.h>
#include <Utils/Period.h>
#include <Utils/SwitchAnalog.h>
#include "./Utils/SwitchAnalog.h"
#include <Servo.h>
#include "NewPing.h"

// IMU
// http://www.seeedstudio.com/wiki/Xadow_-_IMU_6DOF


/****************************************************
   CHENILLE SECONDAIRE
*****************************************************/
class ChenilleSecondaire
{
    private:
        Servo bascule;
        Servo chenille_secondaire;
        bool etat_chaine;
        bool etat_levier;

    public:
        ChenilleSecondaire();
        void ON();
        void OFF();
        void position_rangee();
        void position_miHauteur(); // pour preparer le rangement
        void position_auSol();
};


/****************************************************
   CHENILLE PRINCIPALE
*****************************************************/
// base roulante, slave bis
#define LONGI_GAUCHE_STOP 1500
#define LONGI_GAUCHE_AVANCE 1500
#define LONGI_GAUCHE_RECULE 1500
#define LONGI_DROITE_STOP 1500
#define LONGI_DROITE_AVANCE 1500
#define LONGI_DROITE_RECULE 1500
#define LATERAL_STOP 1500
#define LATERAL_GAUCHE 1500
#define LATERAL_DROITE 1500

class ChenillePrincipale
{
    private:

        double temps_distance_lateral;

        //faire une classe??
        Servo chenille_laterale;
        Servo chenille_gauche;
        Servo chenille_droite;


        //rampe IR avant
		SwitchAnalog val_ir_bas;
        SwitchAnalog val_ir_haut;

        //rampe avant
        SwitchAnalog bumper_av_g;
        SwitchAnalog bumper_av_d;

        //rampe gauche
        SwitchAnalog bumper_g_av;
        SwitchAnalog bumper_g_ar;

        //rampe droite
        SwitchAnalog bumper_d_av;
        SwitchAnalog bumper_d_ar;

        // sonar (pour l'evitement)
        double val_sonar_avant;
        double val_sonar_gauche;
        double val_sonar_droit;
        // penser a mettre un timer


        bool assFini;
        long tempo;
        long tempo_remaining;
        int asserv_set; // recalage, tempo, si pause activated
        bool pause;

        Period period_run;
        Period period_asserv;



    public:
        ChenillePrincipale();
        // mouvement + bumper

        //briques de base
        void longi_gauche_stop();
        void longi_gauche_avance();
        void longi_gauche_recule();
        void longi_droite_stop();
        void longi_droite_avance();
        void longi_droite_recule();
        void lateral_gauche();
        void lateral_droite();
        void lateral_stop();


        void stop();



        void recalage_gauche();
        void recalage_droite();
        void recalage_face(); //tak droite et gauche, mettre un timer de sortie


        void set_asserv(int asserv);
        // dans la periode de run tout se passe

        // evitement a integrer (sur base de sonar)
        void decalage_droite(double tempsTotAction);
        void decalage_gauche(double tempsTotAction); // mettre un timer
        void decalage_avant(double tempsTotAction);
        void decalage_arriere(double tempsTotAction);
        void rotation(double tempsTotAction); //couplage avec IMU???

        // mise en place escalier
        void arret(); // arret de l'asserv en cours
        void pause_asserv(); //pause de l'asserv en cours (timer)
        void reprise(); //reprise de l'asserv en cours, si existe
        void run();
        void asservFini(); //envoi au master l'ordre de fin
        bool isFini();

        // chaine secondaire
        void chenilleSecondaire_ON();
        void chenilleSecondaire_OFF();

};




/****************************************************
   TURBINE
*****************************************************/
class Turbine
{
    private:
        Servo turbine;

    public:
        Turbine();
        void ON();
        void OFF();
};

/****************************************************
   NOZZLE
*****************************************************/
class Nozzle
{
    private:
        Servo nozzle;

    public:
        Nozzle();
        void haut();
        void middle();
        void bas();
};

/****************************************************
   PINCE
*****************************************************/
// pince porte tapis rouge
class Pince
{
    private:
        bool cote_droit; // constante differente true droit, false gauche
        Servo garde;
		Servo bras;

    public:
        Pince(bool cote_droit);
        void haut();
        void middle();
        void bas();
        void pince_ON();
        void pince_OFF();

};


/****************************************************
   DEPOSEUR DE TAPIS
*****************************************************/
// deposeur de tapis, ici c'est une MAE
// ne pas oublier de mettre les differents etats
#define ETAT_TAPIS_INIT 0
#define ETAT_TAPIS_AT 1
#define ETAT_TAPIS_DF_1 2
#define ETAT_TAPIS_DF_2 3
#define ETAT_TAPIS_DF_3 4
#define ETAT_TAPIS_DFP_1 5
#define ETAT_TAPIS_DFP_2 6
#define ETAT_TAPIS_RF_1 7
#define ETAT_TAPIS_RF_2 8
#define ETAT_TAPIS_DS_1 9
#define ETAT_TAPIS_DS_2 10
#define ETAT_TAPIS_DS_3 11
#define ETAT_TAPIS_DSP_1 12
#define ETAT_TAPIS_DSP_2 13
#define ETAT_TAPIS_RS_1 14
#define ETAT_TAPIS_RS_2 15
#define ETAT_TAPIS_RS_3 16

#define TRANS_TAPIS_TIME_OUT 0
#define TRANS_TAPIS_POSE_FIRST 1
#define TRANS_TAPIS_REPLI_FIRST 2
#define TRANS_TAPIS_POSE_SECOND 3
#define TRANS_TAPIS_REPLI_SECOND 4

class DeposeurTapis
{
    private:
        Turbine turbine;
		Nozzle nozzle;
		Pince pince_droite;
		Pince pince_gauche;
		bool time_out_on;
		int state;
        long t_over;
        Period period_run;

    public:
        // MAE depose tapis
        DeposeurTapis();
        void run();
        void stop();
        void trigger(int transition);
        //void set_time_out(int dt_, int trigger);
        void reset_time_out();
        bool is_time_out();

        void depose_first(); //depose une fois en position
        void replis_first();
        void depose_second();
        void replis_second();
        void in_state_func();
        void set_time_out(int dt_);


};


/****************************************************
   SONAR
*****************************************************/
class Sonar
{
    private:
        Period period_sonar;
        NewPing sonar_gauche;//(PIN_PWM_SONAR_G_TRIGGER,PIN_PWM_SONAR_G_Echo,SONAR_DISTANCE_MAX);
        NewPing sonar_droite;//(PIN_PWM_SONAR_D_TRIGGER,PIN_PWM_SONAR_D_Echo,SONAR_DISTANCE_MAX);
        NewPing sonar_face;//(PIN_PWM_SONAR_C_TRIGGER,PIN_PWM_SONAR_C_Echo,SONAR_DISTANCE_MAX);
        unsigned int sonar_distance_droite;
        unsigned int sonar_distance_gauche;
        unsigned int sonar_distance_face;

    public:
        Sonar();
        void run();
        bool adv_gauche();
        bool adv_droite();
        bool adv_face();
        void affiche();
        void afficheADV();
};


/****************************************************
   IO
*****************************************************/
class IO
{
    private:
        DeposeurTapis deposeurTapis;
        ChenilleSecondaire chenilleSecondaire;
        ChenillePrincipale chenillePrincipale;
        Sonar sonar;

    public:
        IO();
        void run();
        DeposeurTapis* get_DeposeurTapis();
        ChenilleSecondaire* get_ChenilleSecondaire();
        ChenillePrincipale* get_ChenillePrincipale();

};





#endif
