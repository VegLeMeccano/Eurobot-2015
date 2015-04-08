#ifndef CONTROL_H
#define CONTROL_H

#include "Utils/Coord.h"
#include "Utils/Sonar.h"
#include "Utils/PID.h"
#include "pins.h"
#include "Const.h"



// type of BF
#define STOP 0
#define BFFW 1
#define BFCAP 2
#define BFXYCAP 3

// type of speed
#define SLOW 0
#define MEDIUM 1
#define FAST 2

// gain PID deplacement
#define GAIN_KP_DEP 3
#define GAIN_KI_DEP 0.00
#define GAIN_KD_DEP 0.00
// norme sur les etats de transistion proche  et fini
#define NEAR_ERROR_DEP 70.0
#define DONE_ERROR_DEP  20.0

// gain PID cap (rotation)
#define GAIN_KP_CAP 160  //Ku = 260
#define GAIN_KI_CAP 0 //52.0 //70.0
#define GAIN_KD_CAP 0 //18.0 //40.0

#define NEAR_ERROR_CAP 8.0 * 3.14 / 180.0
#define DONE_ERROR_CAP  4.0 * 3.14 / 180.0

// compteur blocage
#define BLOCAGE_MAX 10


class ControlLoop
/* This class gets the updated coordinate, and talk to the 2 PID
 * loops to tell the robot where to go.
 * This class also talk to the Raspberry Pi to say when the movement is finished*/
{
    private:
        Coord real_coord;           // coordonne actuelle
        Coord target_position;      // coordonne cible
        Vector dir;                 // vecteur de direction a suivre entre le point actuel et la cible (provisoire ou finale)
        bool detect_on;             // activation de la detection d'adversaire
        int bf_type;                // type de BF en cours
        int asserv_state;           // etat PID -> FAR, NEAR
        PID pidcap;                 // PID cap
        PID piddep;                 // PID deplacement
        int cmd_g;                  // commande sur roue gauche
        int cmd_d;                  // commande sur roue droite
        int cmd_dep;                // commande deplacement
        int cmd_cap;                // commance cap
        bool fw_g;                  // avance roue gauche
        bool fw_d;                  // avance roue droite
        int count_not_moving;       // Compteur de blocage
        Coord late_pos;             // to check how much we moved lately
        Sonar sonarg;               // Sonar cote droit
        Sonar sonard;               // Sonar cote gauche

    public:
        ControlLoop();
        void bf_avance(float d);
        void set_target(Coord coord);
        void update_error(Coord coord);
        int get_cmd_g();
        bool get_fw_g();
        int get_cmd_d();
        bool get_fw_d();
        void run(Coord real_coord_);
        void compute_pids();
        void compute_cmds();
        void set_BF(int bf_type_, Coord target_position_);
        void next_asserv_state();
        void check_blockage();
        void check_adversary();
        void setxycap(Coord new_coord);
        void write_real_coords();
        void write_debug();
        void set_speed(int speed);
        void recaler();
        void setTuningCap(float Kp, float Ki, float Kd );
        void setTuningDep(float Kp, float Ki, float Kd );
        void turn_on_evit();
        void turn_off_evit();

};



#endif
