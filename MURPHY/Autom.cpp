#include "Autom.h"
#include "Const.h"

/*
Autom implementation
*/
Autom::Autom():
    real_coord(),
    period_update_coords(10),
    control(),
    period_pid_loop(40),
    gain_inter_odos(GAIN_ODO_inter),
    gain_odo_g(GAIN_ODO_G),
    gain_odo_d(GAIN_ODO_D),
    //camera(),
    last_ticG(0),
    last_ticD(0),
    distance_g(0),
    distance_d(0),
    tic_total_g(0),
    tic_total_d(0)
   {
        send_cmd();
        moteur_droit.attach(PIN_PWM_MOTEUR_PROPU_DROITE);
        moteur_gauche.attach(PIN_PWM_MOTEUR_PROPU_GAUCHE);
        stop();
   }


void Autom::update_cap(){
    /* attention ici, faudra tester la precision*/
    float cap = (ticD * gain_odo_d - ticG * gain_odo_g) * gain_inter_odos;
    real_coord.set_cap(real_coord.get_cap() + cap);
    //Serial.println(ticG);
}

void Autom::update_coords(){
    /* peut etre prendre la moyenne des caps ou autre technique d'integration? */
    update_cap();
    int delta_ticG = ticG; //- last_ticG;
    int delta_ticD = ticD; //  - last_ticD;
    reset_tics_odos();
    float d = (delta_ticG * gain_odo_g + delta_ticD * gain_odo_d) * 0.5;

    //pour test et debug de gain
    distance_d += delta_ticD * gain_odo_d;
    distance_g += delta_ticG * gain_odo_g;
    tic_total_g += delta_ticG;
    tic_total_d += delta_ticD;

    real_coord.forward_translation(d);
    /* maybe add a delta cond on distance to avoid noise ? */
    last_ticD = ticD;
    last_ticG = ticG;
};

// remet a zero les compteurs (pour le start)
void Autom::reset_tics_odos(){
    ticG = 0;
    ticD = 0;
}

#define CMD_MAX 60

void Autom::send_cmd(){

    int cmd_g = control.get_cmd_g();
    int cmd_d = control.get_cmd_d();

    // bridage des commandes (cmd entre 0 et 100)
    if(cmd_g>CMD_MAX)
    {
        cmd_g = CMD_MAX;
    }
    if(cmd_d>CMD_MAX)
    {
        cmd_d = CMD_MAX;
    }

    // to test
    //cmd_g = 20;
    //cmd_d = 20; // for testing motor signs
    //fw_g = true;
    //fw_d = true;

    bool fw_g = control.get_fw_g();
    bool fw_d = control.get_fw_d();

    int PWM_moteur_G = MOTEUR_PROPU_GAUCHE_ARRET;
    int PWM_moteur_D = MOTEUR_PROPU_DROIT_ARRET;

    double delta_G = 0;
    double delta_D = 0;

    if(fw_g)
    {
        delta_G = 1.0*cmd_g/(1.0*CMD_MAX)*(MOTEUR_PROPU_GAUCHE_MAX_AVANT - MOTEUR_PROPU_GAUCHE_ARRET);
    }
    else
    {
        delta_G = 1.0*cmd_g/(1.0*CMD_MAX)*(MOTEUR_PROPU_GAUCHE_MAX_ARRIERE - MOTEUR_PROPU_GAUCHE_ARRET);
    }

    if(fw_d)
    {
        delta_D = 1.0*cmd_d/(1.0*CMD_MAX)*(MOTEUR_PROPU_DROIT_MAX_AVANT - MOTEUR_PROPU_DROIT_ARRET);
    }
    else
    {
        delta_D = 1.0*cmd_d/(1.0*CMD_MAX)*(MOTEUR_PROPU_DROIT_MAX_ARRIERE - MOTEUR_PROPU_DROIT_ARRET);
    }

    PWM_moteur_G += (int)delta_G;
    PWM_moteur_D += (int)delta_D;

    //PWM_moteur_G = MOTEUR_PROPU_GAUCHE_ARRET + delta_G;
    //PWM_moteur_D = MOTEUR_PROPU_DROIT_ARRET + delta_D;

    moteur_droit.writeMicroseconds(PWM_moteur_D);
    Serial.print("ordre droite : ");
    Serial.println(PWM_moteur_D);
    moteur_gauche.writeMicroseconds(PWM_moteur_G);
    Serial.print("ordre gauche : ");
    Serial.println(PWM_moteur_G);


}


void Autom::stop()
{
    //analogWrite(PIN_MOT_CMDG, 0);
    //analogWrite(PIN_MOT_CMDD, 0);
    moteur_droit.writeMicroseconds(MOTEUR_PROPU_DROIT_ARRET);
    moteur_gauche.writeMicroseconds(MOTEUR_PROPU_GAUCHE_ARRET);
}

void Autom::write_cmd(int cmd_g, int cmd_d, bool fw_g, bool fw_d){
    Serial.print(" cmdG  ");
    Serial.print(cmd_g);
    Serial.print("  G  ");
    Serial.print(fw_g);
    Serial.print("  cmdD  ");
    Serial.print(cmd_d);
    Serial.print("  D  ");
    Serial.print(fw_d);
}



void Autom::run(){
    /* this is where all the magic happends */

    if (period_update_coords.is_over())
    {
        period_update_coords.reset();
        update_coords();
        //real_coord.write_serial();
    }
    if (period_pid_loop.is_over())
    {
        period_pid_loop.reset();
        control.run(real_coord);
        send_cmd();
    }
}

ControlLoop* Autom::get_control(){
    return &control;
}


/*
Camera* Autom::camera_control()
{
	return &camera;
}
*/

void write_serial_strat()
{
   Serial.print("* START : ");
   Serial.println(digitalRead(PIN_BUMPER_STRAT_START));
   Serial.print("* COUL : ");
   Serial.println(digitalRead(PIN_BUMPER_STRAT_COULEUR));
   Serial.print("* STRAT 1 : ");
   Serial.print(digitalRead(PIN_BUMPER_STRAT_STRAT_1));
   Serial.print("* STRAT 2 : ");
   Serial.print(digitalRead(PIN_BUMPER_STRAT_STRAT_2));

    }


void Autom::setxycap(Coord new_coord)
{
    real_coord = new_coord;
    get_control()->setxycap(new_coord);
}


void Autom::setxycap_no_x(int y, float cap)
{
    real_coord = Coord(real_coord.get_x(), y, cap);
    get_control()->setxycap(real_coord);
}

void Autom::setxycap_no_y(int x, float cap)
{
    real_coord = Coord(x, real_coord.get_y(), cap);
    get_control()->setxycap(real_coord);
}

void Autom::debuggDistanceInit()
{
	distance_g = 0;
	distance_d = 0;
}


float Autom::debuggDistance_g()
{
	return distance_g;
}

float Autom::debuggDistance_d()
{
	return distance_d;
}
int Autom::debuggTic_g()
{
	return tic_total_g;
}

int Autom::debuggTic_d()
{
	return tic_total_d;
}
void Autom::debuggTicInit()
{
	tic_total_d = 0;
	tic_total_g = 0;
}

void Autom::setTuningCap(float Kp, float Ki, float Kd )
{
    get_control()->setTuningCap(Kp, Ki, Kd);
}

void Autom::setTuningDep(float Kp, float Ki, float Kd )
{
    get_control()->setTuningDep(Kp, Ki, Kd);
}


void Autom::turn_on_evit()
{
    get_control()->turn_on_evit();
}

