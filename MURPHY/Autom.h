#ifndef AUTOM_H
#define AUTOM_H


#include "Utils/Period.h"
#include "Arduino.h"
#include "interrupts.h"
#include "pins.h"
#include "Utils/Coord.h"
#include "ControlLoop.h"
#include <Servo.h>

class Autom
{
    private:
        Coord real_coord;               // coordonnee reelles
        ControlLoop control;            // boucle de controle (PID et tout...)
        Period period_update_coords;    // periode de refreh position du robot
        Period period_pid_loop;         // periode de refreh autom
        float gain_odo_g;               // gain odo gauche
        float gain_odo_d;               // gain odo droit
        float gain_inter_odos;          // gain inter odo
        int last_ticG;                  // dernier tic odo gauche
        int last_ticD;                  // dernier tic odo droite
        Servo moteur_gauche;            // commande PWM moteur gauche
        Servo moteur_droit;             // commande PWM moteur droit

        // pour debugg
        int tic_total_g;                // tic total gauche
        int tic_total_d;                // tic total droit
        float distance_g;               // distance prcourue a gauche
        float distance_d;               // distance prcourue a droite

    public:
        Autom();
        Coord get_real_coord();
        void send_cmd();
        void write_cmd(int cmd_g, int cmd_d, bool fw_g, bool fw_d);
        void update_cap();
        void update_coords();
        void reset_tics_odos();

        void run();
        void stop();

        void setxycap(Coord real_coord);
        void setxycap_no_x(int y, float cap);
        void setxycap_no_y(int x, float cap);
        void setTuningCap(float Kp, float Ki, float Kd );
        void setTuningDep(float Kp, float Ki, float Kd );
        void turn_on_evit();
        void turn_off_evit();

        ControlLoop* get_control();

        float debuggDistance_g();
		float debuggDistance_d();
		int debuggTic_g();
		int debuggTic_d();
		void debuggDistanceInit();
		void debuggTicInit();

};

void write_serial_strat();
#endif
