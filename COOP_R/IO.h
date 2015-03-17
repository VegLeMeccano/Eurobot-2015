#ifndef IO_H
#define IO_H

#include "Const.h"
#include "pins.h"
#include <Arduino.h>
#include <Utils/Period.h>
#include <Utils/SwitchAnalog.h>
#include "./Utils/SwitchAnalog.h"
#include <Servo.h>

class ChenilleSecondaire
{
    private:
        Servo bascule;
        Servo chenille_secondaire;
        //bool etat_chaine;
        //bool etat_levier;

    public:
        ChenilleSecondaire();
        void ON();
        void OFF();
        void position_rangee();
        void position_miHauteur(); // pour preparer le rangement
        void position_auSol();
};



// base roulante, slave bis
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


    public:
        ChenillePrincipale();
        // mouvement + bumper

        void stop();
        void recalage_gauche();
        void recalage_droite();
        void recalage_face(); //tak droite et gauche, mettre un timer de sortie

        // evitement a integrer (sur base de sonar)
        void decalage_droite(double tempsTotAction);
        void decalage_gauche(double tempsTotAction); // mettre un timer
        void decalage_avant(double tempsTotAction);
        void decalage_arriere(double tempsTotAction);
        void rotation(double tempsTotAction); //couplage avec IMU???

        // mise en place escalier
        void arret(); // arret de l'asserv en cours
        void pause(); //pause de l'asserv en cours (timer)
        void reprise(); //reprise de l'asserv en cours
        void run();
        void asservFini(); //envoi au master l'ordre de fin
        bool isFini();

        // chaine secondaire
        void chenilleSecondaire_ON();
        void chenilleSecondaire_OFF();

};




//
class Turbine
{
    private:
        Servo turbine;

    public:
        Turbine();
        void ON();
        void OFF();
};


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


// deposeur de tapis, ici c'est une MAE
// ne pas oublier de mettre les differents etats
class DeposeurTapis
{
    private:
        Turbine turbine;
		Nozzle nozzle;
		Pince pince_droite;
		Pince pince_gauche;

    public:
        // MAE depose tapis
        DeposeurTapis();
        void run();
        void stop();
        void trigger(int transition);
        void set_time_out(int dt_, int trigger);
        void reset_time_out();
        bool is_time_out();

        void depose_first(); //depose une fois en position
        void depose_second();

};




/** definition IO **/
class IO
{
    private:


    public:
         IO();
        void run();
        DeposeurTapis deposeurTapis;
        ChenilleSecondaire chenilleSecondaire;
        ChenillePrincipale chenillePrincipale;
        //ChenillePrincipale getChenillePrincipale();

};

#endif
