#include "IO.h"




/****************************************************
   Claps
*****************************************************/
#define CLAPS_GAUCHE_FERME 1500
#define CLAPS_GAUCHE_OUVERT 1500
#define CLAPS_DROITE_FERME 1500
#define CLAPS_DROITE_OUVERT 1500

Claps::Claps(bool cote_droit_s)
{
    cote_droit = cote_droit_s;
    Serial.println(" claps init");
    if(cote_droit)
    {
        servo_tacle.attach(PIN_PWM_SERVO_CLAPS_DROITE);
    }
    else
    {
        servo_tacle.attach(PIN_PWM_SERVO_CLAPS_GAUCHE);
    }
    fermeture();


}

void Claps::fermeture()
{
    if(cote_droit)
    {
        servo_tacle.writeMicroseconds(CLAPS_DROITE_FERME);
    }
    else
    {
        servo_tacle.writeMicroseconds(CLAPS_GAUCHE_FERME);
    }
}

void Claps::ouverture()
{
    if(cote_droit)
    {
        servo_tacle.writeMicroseconds(CLAPS_DROITE_OUVERT);
    }
    else
    {
        servo_tacle.writeMicroseconds(CLAPS_GAUCHE_OUVERT);
    }
}


/****************************************************
   Aspiration balle
*****************************************************/
#define ASPIRATION_OFF 1000
#define ASPIRATION_ON 1400

Aspiration::Aspiration()
{
        servo_turbine_droite.attach(PIN_PWM_SERVO_TURBINE_DROITE);
        servo_turbine_gauche.attach(PIN_PWM_SERVO_TURBINE_GAUCHE);
        off();
        Serial.println(" aspi init");
}

void Aspiration::off()
{
    servo_turbine_droite.writeMicroseconds(ASPIRATION_OFF);
    servo_turbine_gauche.writeMicroseconds(ASPIRATION_OFF);
}

void Aspiration::on()
{
    servo_turbine_droite.writeMicroseconds(ASPIRATION_ON);
    servo_turbine_gauche.writeMicroseconds(ASPIRATION_ON);
}



/****************************************************
   CAPOT Arriere
*****************************************************/
#define CAPOT_FERMETURE 1500
#define CAPOT_OUVERTURE 1500

Capot::Capot()
{
    servo_capot.attach(PIN_PWM_SERVO_CACHE);
    fermeture();
    Serial.println(" capot init");
}

void Capot::fermeture()
{
    servo_capot.writeMicroseconds(CAPOT_FERMETURE);
}

void Capot::ouverture()
{
    servo_capot.writeMicroseconds(CAPOT_OUVERTURE);
}


/****************************************************
   CAMERA
*****************************************************/
#define CAMERA_DEVANT 1500
#define CAMERA_BASSE 1500

Camera::Camera()
{
    servo_camera.attach(PIN_PWM_SERVO_CAMERA);
    position_devant();
    Serial.println(" cam init");
}

void Camera::position_devant()
{
    servo_camera.writeMicroseconds(CAMERA_DEVANT);
}

void Camera::position_basse()
{
    servo_camera.writeMicroseconds(CAMERA_BASSE);
}




/****************************************************
   Taclette INT
*****************************************************/
#define TACLETTE_INT_FERMETURE_GAUCHE 1500
#define TACLETTE_INT_DEGAGEMENT_GAUCHE 1500
#define TACLETTE_INT_PRISE_CENTRALE_GAUCHE 1500

#define TACLETTE_INT_FERMETURE_DROITE 1500
#define TACLETTE_INT_DEGAGEMENT_DROITE 1500
#define TACLETTE_INT_PRISE_CENTRALE_DROITE 1500

Taclette_INT::Taclette_INT(bool cote_droit_s)
{
    cote_droit = cote_droit_s;
    Serial.println(" T init");
    if(cote_droit)
    {
        servo_taclette_INT.attach(PIN_PWM_SERVO_TACLETTE_INT_DROITE);
    }
    else
    {
        servo_taclette_INT.attach(PIN_PWM_SERVO_TACLETTE_INT_GAUCHE);
    }
    position_fermeture();
}


void Taclette_INT::position_fermeture()
{
    if(cote_droit)
    {
        servo_taclette_INT.writeMicroseconds(TACLETTE_INT_FERMETURE_DROITE);
    }
    else
    {
        servo_taclette_INT.writeMicroseconds(TACLETTE_INT_FERMETURE_GAUCHE);
    }
}

void Taclette_INT::position_degagement()
{
    if(cote_droit)
    {
        servo_taclette_INT.writeMicroseconds(TACLETTE_INT_DEGAGEMENT_DROITE);
    }
    else
    {
        servo_taclette_INT.writeMicroseconds(TACLETTE_INT_DEGAGEMENT_GAUCHE);
    }
}

void Taclette_INT::position_prise_central()
{
    if(cote_droit)
    {
        servo_taclette_INT.writeMicroseconds(TACLETTE_INT_PRISE_CENTRALE_DROITE);
    }
    else
    {
        servo_taclette_INT.writeMicroseconds(TACLETTE_INT_PRISE_CENTRALE_GAUCHE);
    }
}


/****************************************************
   Taclette EXT
*****************************************************/
#define TACLETTE_EXT_FERMETURE_GAUCHE 1500
#define TACLETTE_EXT_DEGAGEMENT_GAUCHE 1500
#define TACLETTE_EXT_MOISS_BAT_GAUCHE 1500

#define TACLETTE_EXT_FERMETURE_DROITE 1500
#define TACLETTE_EXT_DEGAGEMENT_DROITE 1500
#define TACLETTE_EXT_MOISS_BAT_DROITE 1500


Taclette_EXT::Taclette_EXT(bool cote_droit_s)
{
    cote_droit = cote_droit_s;
    if(cote_droit)
    {
        servo_taclette_EXT.attach(PIN_PWM_SERVO_TACLETTE_EXT_DROITE);
    }
    else
    {
        servo_taclette_EXT.attach(PIN_PWM_SERVO_TACLETTE_EXT_GAUCHE);
    }
    position_fermeture();
    Serial.println(" tacle init");
}

void Taclette_EXT::position_fermeture()
{
    if(cote_droit)
    {
        servo_taclette_EXT.writeMicroseconds(TACLETTE_EXT_FERMETURE_DROITE);
    }
    else
    {
        servo_taclette_EXT.writeMicroseconds(TACLETTE_EXT_FERMETURE_GAUCHE);
    }
}

void Taclette_EXT::position_degagement()
{
    if(cote_droit)
    {
        servo_taclette_EXT.writeMicroseconds(TACLETTE_EXT_DEGAGEMENT_DROITE);
    }
    else
    {
        servo_taclette_EXT.writeMicroseconds(TACLETTE_EXT_DEGAGEMENT_GAUCHE);
    }
}

void Taclette_EXT::position_moiss_bat()
{
    if(cote_droit)
    {
        servo_taclette_EXT.writeMicroseconds(TACLETTE_EXT_MOISS_BAT_DROITE);
    }
    else
    {
        servo_taclette_EXT.writeMicroseconds(TACLETTE_EXT_MOISS_BAT_GAUCHE);
    }
}




/****************************************************
   Balle Gauche
*****************************************************/
#define BALLE_GAUCHE_CHARGEMENT 1500
#define BALLE_GAUCHE_EJECTION 1500

Balle_gauche::Balle_gauche()
{
    servo_balle_gauche.attach(PIN_PWM_SERVO_DECLENCHEUR_BALLE_GAUCHE);
    chargement();
    Serial.println(" balle gauche init");
}
void Balle_gauche::chargement()
{
    servo_balle_gauche.writeMicroseconds(BALLE_GAUCHE_CHARGEMENT);
}

void Balle_gauche::ejection()
{
	servo_balle_gauche.writeMicroseconds(BALLE_GAUCHE_EJECTION);
}


/****************************************************
   ejecteur (balle droite)
*****************************************************/
#define EJECTEUR_BAS 1500
#define EJECTEUR_HAUT 1500

Ejecteur::Ejecteur()
{
    servo_ejecteur.attach(PIN_PWM_SERVO_DECLENCHEUR_BALLE_DROITE);
    position_haute();
    Serial.println(" ejecteur init");
}

void Ejecteur::position_basse()
{
    servo_ejecteur.writeMicroseconds(EJECTEUR_BAS);
}

void Ejecteur::position_haute()
{
    servo_ejecteur.writeMicroseconds(EJECTEUR_HAUT);
}


/****************************************************
   bras horizontal
*****************************************************/
#define BRAS_HORIZONTAL_OUVERTURE 1500
#define BRAS_HORIZONTAL_FERMETURE 1500

Bras_horizontal::Bras_horizontal()
{
    servo_bras_horizontal.attach(PIN_PWM_SERVO_BRAS_HORIZONTAL);
    fermeture();
    Serial.println(" bras horizontal init");
}

void Bras_horizontal::ouverture()
{
    servo_bras_horizontal.writeMicroseconds(BRAS_HORIZONTAL_OUVERTURE);
}

void Bras_horizontal::fermeture()
{
    servo_bras_horizontal.writeMicroseconds(BRAS_HORIZONTAL_FERMETURE);
}


/****************************************************
   bras vertical
*****************************************************/
#define BRAS_VERTICAL_BAS 1500
#define BRAS_VERTICAL_HAUT 1500

Bras_vertical::Bras_vertical()
{
    servo_bras_vertical.attach(PIN_PWM_SERVO_BRAS_VERTICAL);
    monte();
    Serial.println(" bras vertical init");
}

void Bras_vertical::monte()
{
    servo_bras_vertical.writeMicroseconds(BRAS_VERTICAL_HAUT);
}

void Bras_vertical::descend()
{
    servo_bras_vertical.writeMicroseconds(BRAS_VERTICAL_BAS);
}





/****************************************************
   Balle Droite (MAE, sequencage de mouvement)
*****************************************************/
#define attente_balle_droite 200
#define PERIODE_BALLE_DROITE 50
Balle_droite::Balle_droite():
    bras_vertical(),
    bras_horizontal(),
    ejecteur(),
    time_out_on(false),
    state(ETAT_BALLE_DROITE_RANGE_DEPART),
    period_run(PERIODE_BALLE_DROITE)
{
    Serial.println(" Balle droite init");
}

void Balle_droite::debug()
{
    Serial.println("Balle_droite -> debug ");
    Serial.print("ETAT ACTUEL : ");
    Serial.println(state);
    //Serial.print("time_out_on : ");
    //Serial.println(time_out_on);
    //Serial.print("t_over : ");
    //Serial.println(t_over);
}


void Balle_droite::trigger(int transition)
{
    Serial.println("");
    Serial.print("appel trigger balle droite : ");
    Serial.println(transition);
    // add things here for MAE
    if (transition == TRANSISTION_BALLE_DROITE_PRISE || transition == TRANSISTION_BALLE_DROITE_EJECTION )
    {
         Serial.println(" ");
         Serial.print("TRANSISTION FORCEE -> BALLE_DROITE: ");
         Serial.println(transition);
         //trigger_to_be = transition;
    }

    if (transition == TRANSISTION_BALLE_DROITE_TIME_OUT )
    {
         Serial.println(" ");
         Serial.print("TRANSITION AUTO -> BALLE_DROITE: ");
         Serial.println(transition);
         //trigger_to_be = transition;
    }
   Serial.print("ACTUAL STATE -> BALLE_DROITE : ");
   Serial.println(state);
   int old_state;
   old_state = state;
   switch(state)
    {
        case ETAT_BALLE_DROITE_RANGE_DEPART :
           //Serial.println("ETAT_BALLE_DROITE_RANGE_DEPART");
           if (transition == TRANSISTION_BALLE_DROITE_PRISE)
           {
                state = ETAT_BALLE_DROITE_DEPLOYEMENT;
                //Serial.println("modif etat depart");
           }
           break;

        case ETAT_BALLE_DROITE_DEPLOYEMENT :
            //Serial.println("ETAT_BALLE_DROITE_DEPLOYEMENT");
            if (transition == TRANSISTION_BALLE_DROITE_TIME_OUT)
            {
                state = ETAT_BALLE_DROITE_PRISE;
                //Serial.println("modif deployement");
            }
            break;

        case ETAT_BALLE_DROITE_PRISE :
            //Serial.println("ETAT_BALLE_DROITE_PRISE");
            if (transition == TRANSISTION_BALLE_DROITE_TIME_OUT)
                {
                    state = ETAT_BALLE_DROITE_RELEVE;
                }
            break;

        case ETAT_BALLE_DROITE_RELEVE :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == TRANSISTION_BALLE_DROITE_TIME_OUT)
                {
                    state = ETAT_BALLE_DROITE_RANGE_1;
                }
            break;

        case ETAT_BALLE_DROITE_RANGE_1 :
            //Serial.println("ETAT_BALLE_DROITE_RANGE_1");
            if (transition == TRANSISTION_BALLE_DROITE_TIME_OUT)
            {
                state = ETAT_BALLE_DROITE_RANGE_2;
            }
            break;

        case ETAT_BALLE_DROITE_RANGE_2 :
            //Serial.println("ETAT_BALLE_DROITE_RANGE_2");
            if (transition == TRANSISTION_BALLE_DROITE_EJECTION)
            {
                state = ETAT_BALLE_DROITE_EXPULSION;
            }
            break;

        case ETAT_BALLE_DROITE_EXPULSION :
            //Serial.println("ETAT_BALLE_DROITE_EXPULSION");
            if (transition == TRANSISTION_BALLE_DROITE_TIME_OUT)
            {
                state = ETAT_BALLE_DROITE_RANGE_DEPART;
            }
            break;
    }
   if (old_state != state)
    {
        Serial.print("NEW STATE -> BALLE_DROITE: ");
        Serial.println(state);

        reset_time_out();
        in_state_func();
    }
}
int Balle_droite::actualState()
{
    return state;
}

void Balle_droite::run(){
    if (period_run.is_over())
    {
        //Serial.println("Balle_droite -> period");
        //Serial.println("Balle_droite -> period");
        period_run.reset();
        if (is_time_out())
        {
            //Serial.print("time_out finish");
            trigger(TRANSISTION_BALLE_DROITE_TIME_OUT);
        }
    }

}

void Balle_droite::set_time_out(int dt_)
{
    t_over = millis() + dt_;
    time_out_on = true;
    //trigger_to_be = trigger;
    Serial.print("time_out set ");
    //Serial.println(trigger);
}

void Balle_droite::reset_time_out()
{
    time_out_on = false;
}


bool Balle_droite::is_time_out()
{
   if (time_out_on && t_over < millis())
   {
     time_out_on = false;
     return true;
   }
   return false;
}

#define ETAT_BALLE_DROITE_RANGE_DEPART 0
#define ETAT_BALLE_DROITE_DEPLOYEMENT 1 //horizontal et gachette
#define ETAT_BALLE_DROITE_PRISE 2 //descente
#define ETAT_BALLE_DROITE_RELEVE 3 //remonte
#define ETAT_BALLE_DROITE_RANGE_1 4 //horintal
#define ETAT_BALLE_DROITE_RANGE_2 5 //gachette
#define ETAT_BALLE_DROITE_EXPULSION 6 //horizontal
void Balle_droite::in_state_func()
{
    switch (state)
    {
        case ETAT_BALLE_DROITE_RANGE_DEPART :
            bras_horizontal.fermeture();
            bras_vertical.monte();
            ejecteur.position_haute();
            Serial.println("ETAT_BALLE_DROITE_RANGE_DEPART");
            break;

        case ETAT_BALLE_DROITE_DEPLOYEMENT :
            set_time_out(attente_balle_droite);
            bras_horizontal.fermeture();
            ejecteur.position_basse();
            Serial.println("ETAT_BALLE_DROITE_DEPLOYEMENT");
            break;

        case ETAT_BALLE_DROITE_PRISE :
            //set_time_out(400, trigger_to_be);
            set_time_out(attente_balle_droite);
            bras_vertical.descend();
            Serial.println("ETAT_BALLE_DROITE_PRISE");
            break;

        case ETAT_BALLE_DROITE_RELEVE :
            set_time_out(attente_balle_droite);
            bras_vertical.monte();
            Serial.println("ETAT_BALLE_DROITE_RELEVE");
            break;

        case ETAT_BALLE_DROITE_RANGE_1 :
            set_time_out(attente_balle_droite);
            bras_horizontal.fermeture();
            Serial.println("ETAT_BALLE_DROITE_RANGE_1");
            break;

        case ETAT_BALLE_DROITE_RANGE_2:
            set_time_out(attente_balle_droite);
            ejecteur.position_haute();
            Serial.println("ETAT_BALLE_DROITE_RANGE_2");
            break;

        case ETAT_BALLE_DROITE_EXPULSION :
            set_time_out(attente_balle_droite);
            bras_horizontal.ouverture();
            Serial.println("ETAT_BALLE_DROITE_EXPULSION");
            break;
    }
}



/****************************************************
   Pince
*****************************************************/
#define PINCEUR_DEPLOYEMENT_TOTAL_GAUCHE 1500
#define PINCEUR_RELACHEMENT_GAUCHE 1500
#define PINCEUR_SAISIE_GAUCHE 1500

#define PINCEUR_DEPLOYEMENT_TOTAL_DROITE 1500
#define PINCEUR_RELACHEMENT_DROITE 1500
#define PINCEUR_SAISIE_DROITE 1500

Pinceur::Pinceur(bool cote_droit_s)
{

        cote_droit = cote_droit_s;
        if(cote_droit)
        {
            servo_pinceur.attach(PIN_PWM_SERVO_PINCE_DROITE);
        }
        else
        {
            servo_pinceur.attach(PIN_PWM_SERVO_PINCE_GAUCHE);
        }
        Serial.println(" Pinceur init");
}

// pour le depot des tours
void Pinceur::deployement_total()
{
     if(cote_droit)
        {
            servo_pinceur.writeMicroseconds(PINCEUR_DEPLOYEMENT_TOTAL_DROITE);
        }
        else
        {
            servo_pinceur.writeMicroseconds(PINCEUR_DEPLOYEMENT_TOTAL_GAUCHE);
        }
}

// pince la tour pour maintient
void Pinceur::saisie()
{
     if(cote_droit)
        {
            servo_pinceur.writeMicroseconds(PINCEUR_SAISIE_DROITE);
        }
        else
        {
            servo_pinceur.writeMicroseconds(PINCEUR_SAISIE_DROITE);
        }
}

// relachement pour prise en dessous
void Pinceur::relachement()
{
     if(cote_droit)
        {
            servo_pinceur.writeMicroseconds(PINCEUR_RELACHEMENT_DROITE);
        }
        else
        {
            servo_pinceur.writeMicroseconds(PINCEUR_RELACHEMENT_GAUCHE);
        }
}

/****************************************************
   Capteur couleur
*****************************************************/
#define SEUIL_VERT 3000//sup a
#define SEUIL_JAUNE 1300//inf a
#define PERIODE_CAPTEUR_COULEUR 100
ColorSensor::ColorSensor(bool cote_droit_s):
    period_reset(PERIODE_CAPTEUR_COULEUR)
{
    cote_droit = cote_droit_s;
}

bool ColorSensor::is_vert()
{
   return last_count < SEUIL_VERT;
}

bool ColorSensor::is_jaune()
{
    return (!is_vert());

}

void ColorSensor::run()
{
    int dt;
    dt = millis() - last_time;
    if (period_reset.is_over())
    {
        period_reset.reset();
        if (dt > 0.)
        {
            if(cote_droit)
            {
                last_count = 100. *  pulse_color_D / dt ;
                pulse_color_D = 0;
            }
            else
            {
                last_count = 100. *  pulse_color_G / dt ;
                pulse_color_G = 0;
            }
            last_time = millis();
        }
    }
}

void ColorSensor::write_debug()
{
    Serial.print("capteur couleur : freq ");
    Serial.print(last_count);
    Serial.print(" vert ? ");
    Serial.println(is_vert());
    Serial.print(" jaune ? ");
    Serial.println(is_jaune());

}



/****************************************************
   Ascenseur (juste la montee et descente controlee)
*****************************************************/
#define ASCENSEUR_STOP_DROITE 1500
#define ASCENSEUR_MONTE_DROITE 1500
#define ASCENSEUR_DESCEND_DROITE 1500

#define ASCENSEUR_STOP_GAUCHE 1500
#define ASCENSEUR_MONTE_GAUCHE 1500
#define ASCENSEUR_DESCEND_GAUCHE 1500

#define ASCENSEUR_DIRECTIVE_HAUT -1
#define ASCENSEUR_DIRECTIVE_BAS 0
//constant odo a regler
//voir si besoin de gauche et droite
#define ASC_TARGET_CHOPE 130
#define ASC_TARGET_DEPOT_ESTRADE 100
#define ASC_TARGET_CHARGE_HAUTE 10

Ascenseur::Ascenseur(bool cote_droit_s,int pin_bas,int pin_haut):
    bumper_asc_bas(pin_bas),
    bumper_asc_haut(pin_haut)
{
    // mettre une procedure d'init ici ou dans l'init d'apres
    // monte bump en haut et re init les odos
    bumper_asc_bas.reverse();
    bumper_asc_haut.reverse();
    if(cote_droit)
    {
        servos_moteur_asc.attach(PIN_PWM_MOTEUR_ASC_DROITE);
    }
    else
    {
        servos_moteur_asc.attach(PIN_PWM_MOTEUR_ASC_GAUCHE);
    }



    Serial.println(" ASC init");
}

// renvoi si l'asserv en cours est fini en pas
// util pour le haut niveau
bool Ascenseur::is_assFini()
{
    return in_asserv;
}

// indique si le bumper haut a toucher
bool Ascenseur::is_up()
{
    return bumper_asc_haut.is_on();
}

// indique si le bumper bas a toucher
bool Ascenseur::is_low()
{
    return bumper_asc_bas.is_on();
}

// monte l'assenseur jusqu'a bumper en haut
// a utiliser pour l'init et le montage de pile
// reinit les odos a ce moment la
void Ascenseur::monte()
{
    start_asserv(ASCENSEUR_DIRECTIVE_HAUT);
}

// descend l'ascenseur en bas pour saisie
void Ascenseur::descend(){
    start_asserv(ASCENSEUR_DIRECTIVE_BAS);
}

void Ascenseur::estrade()
{
    start_asserv(ASC_TARGET_DEPOT_ESTRADE);
}

// definir les constantes
void Ascenseur::start_asserv(int target_)
{
    target = target_;
    in_asserv = true;
}





void Ascenseur::run()
{
    int tic_odo =0;
    if(cote_droit)
    {
        tic_odo = ticD_ASC;
    }
    else
    {
        tic_odo = ticG_ASC;
    }

    if (in_asserv)
    {
        // envoi vers le haut
        if (target == ASCENSEUR_DIRECTIVE_HAUT)
        {
            if (bumper_asc_haut.is_on())
            {
                stop();
                //Serial.println("ASS FINI");
                in_asserv = false;
                //send_zeros();
                resest_odo();
            }

            // pour asserv avec odos
            //else if (tic_odo < TIC_HAUT)
            //{
           //     send_monte();
            //}
           else
            {
                send_monte();
            }

        }

        // envoi vers le bas
        else if (target == ASCENSEUR_DIRECTIVE_BAS)
        {
          /*if (tic_odo > TIC_BAS)
            {
                send_desc();
            }*/
          if (bumper_asc_bas.is_on())
            {
                stop();
                Serial.println("ASS FINI");
                //send_zeros();
                in_asserv = false;
            }
          else
            {
                send_desc();
            }
        }
        else
        {
            if (tic_odo > target + 10)
            {
                send_monte();
            }
            else if (tic_odo < target - 10 )
            {
                send_desc();
            }
            else if (tic_odo < target)
            {
                send_maintien_p();
            }
            else if (tic_odo >= target)
            {
                send_zeros();
            }
        }
    }
}

// ordre monte
void Ascenseur::send_monte()
{
    if(cote_droit)
    {
        servos_moteur_asc.writeMicroseconds(ASCENSEUR_MONTE_DROITE);
    }
    else
    {
        servos_moteur_asc.writeMicroseconds(ASCENSEUR_MONTE_GAUCHE);
    }
}

// maintient en position, ici on arrete
void Ascenseur::send_maintien_p()
{
    if(cote_droit)
    {
        servos_moteur_asc.writeMicroseconds(ASCENSEUR_STOP_DROITE);
    }
    else
    {
        servos_moteur_asc.writeMicroseconds(ASCENSEUR_STOP_GAUCHE);
    }
}


// descend
void Ascenseur::send_desc()
{
    if(cote_droit)
    {
        servos_moteur_asc.writeMicroseconds(ASCENSEUR_DESCEND_DROITE);
    }
    else
    {
        servos_moteur_asc.writeMicroseconds(ASCENSEUR_DESCEND_GAUCHE);
    }
}

// reinit les odos
void Ascenseur::send_zeros()
{
    if(cote_droit)
    {
        ticD_ASC = 0;
    }
    else
    {
        ticG_ASC = 0;
    }
}

void Ascenseur::write_debug() // renvoyer les coordonnees des odos pour debug
{
    if(cote_droit)
    {
        Serial.print("ASCENSEUR_TIC DROIT : ");
        Serial.println(ticD_ASC);
    }
    else
    {
        Serial.print("ASCENSEUR_TIC GAUCHE : ");
        Serial.println(ticG_ASC);
    }
    Serial.print(" bumper haut: ");
    Serial.println(bumper_asc_haut.is_on());

     Serial.print(" bumper  bas: ");
    Serial.println(bumper_asc_bas.is_on());

}
void Ascenseur::resest_odo() // reinit les odos
{
    if(cote_droit)
    {
        ticD_ASC = 0;
    }
    else
    {
        ticG_ASC = 0;
    }
}
void Ascenseur::stop()
{
    if(cote_droit)
    {
        servos_moteur_asc.writeMicroseconds(ASCENSEUR_STOP_DROITE);
    }
    else
    {
        servos_moteur_asc.writeMicroseconds(ASCENSEUR_STOP_GAUCHE);
    }
}

/****************************************************
   Constructeur de pile
*****************************************************/


//constructeur
Constructeur_pile::Constructeur_pile(bool cote_droit_s,int pin_bas,int pin_haut):
    pinceur(cote_droit_s),
    ascenseur(cote_droit_s,pin_bas,pin_haut),
    colorSensor(cote_droit_s),
    taclette_EXT(cote_droit_s),
    taclette_INT(cote_droit_s),
    actif_detection(false),
    actif_couleur(false),
    depot_estrade(false),
    period_run(PERIODE_CONSTRUCTEUR_PILE),
    time_out_on(false),
    state(ETAT_PILE_INITIAL),
    nombre_element(0)
{
    cote_droit = cote_droit_s;
    couleur = 0;
    //Serial.println(" Constructeur de pile init");

}

// defini la pose de la pile estrade en hauteur et basse par terre
void Constructeur_pile::set_depot_estrade(bool etat)
{
    depot_estrade = etat;
}

// active la detection avec le capteur couleur ou non
void Constructeur_pile::set_actif_couleur(bool etat)
{
    actif_couleur = etat;
}

// active ou pas la detection d a barriere IR ou pas
void Constructeur_pile::set_actif_detection(bool etat)
{
    actif_detection = etat;
}

// constructeur
void Constructeur_pile::run()
{
    colorSensor.run();
    ascenseur.run();
    colorSensor.run();
    if (period_run.is_over())
    {
        period_run.reset();
        if (is_time_out())
        {
            trigger(TRANS_PILE_TIME_OUT);
        }
        /*
        if(ascenseur.is_assFini())
        {
            trigger(TRANS_PILE_ASSERV_FINI);
        }
        */
        // transistion si detection barriere IR et capteur couleurs
    }
}


// definition de la couleur de detection de la partie en cours
void Constructeur_pile::definition_couleur(int couleur_s)
{
    couleur = couleur_s;
}

//renvoi le nombre d'element dans la pile en cours
int Constructeur_pile::get_nombre_element()
{
    return nombre_element;
}

// gestion des evenements externe a la MAE
void Constructeur_pile::trigger(int transition)
{
    Serial.println("");
    Serial.print("appel trigger Constructeur_pile : ");
    Serial.println(transition);
    // add things here for MAE
    if (transition == TRANS_PILE_PREP_SAISIE  || transition == TRANS_PILE_SAISIE_MANUELLE || transition == TRANS_PILE_PREP_DEPOT  ||transition == TRANS_PILE_POSE  ||transition == TRANS_PILE_REPLIS  )
    {
         Serial.println(" ");
         Serial.print("TRANSISTION FORCEE -> Constructeur_pile: ");
         Serial.println(transition);
    }

    if (transition == TRANS_PILE_TIME_OUT  )
    {
         Serial.println(" ");
         Serial.print("TRANSITION AUTO (time out) -> Constructeur_pile: ");
         Serial.println(transition);
    }

    if (transition == TRANS_PILE_ASSERV_FINI  )
    {
         Serial.println(" ");
         Serial.print("TRANSITION AUTO (ass fini) -> Constructeur_pile: ");
         Serial.println(transition);
    }
   Serial.print("ACTUAL STATE -> Constructeur_pile : ");
   Serial.println(state);
   Serial.print("nombre elements : ");
   Serial.println(nombre_element);
   int old_state;
   old_state = state;

   //evolution des etats
   switch(state)
    {
        case ETAT_PILE_INITIAL  :
            if (transition == TRANS_PILE_PREP_SAISIE){
                state = ETAT_PILE_PREP_SAISIE;
            }
            if (transition == TRANS_PILE_PREP_DEPOT){
                state = ETAT_PILE_DEPOT_DECISION;
            }
            break;

//saisie de piles
         case ETAT_PILE_PREP_SAISIE   :
            if (transition == TRANS_PILE_FERMETURE){
                state = ETAT_PILE_INITIAL;
            }
            if(transition == TRANS_PILE_SAISIE_MANUELLE){ // ou transistion a barriere IR
                state = ETAT_PILE_PRISE;
            }
            break;

        case ETAT_PILE_PRISE   :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                state = ETAT_PILE_ANALYSE;
            }
            break;

        case ETAT_PILE_ANALYSE   :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie

                //if(/*TEST DE PRESENCE ET DE COULEUR*/){
                    // SI COULEUR ok, sinon on re ouvre
                //    state = ETAT_PILE_DECISION_MOVE;
                //}
                //else{
                //    state = ETAT_PILE_INITIAL;
                //}
                state = ETAT_PILE_DECISION_MOVE;
            }
            break;

        case ETAT_PILE_DECISION_MOVE   :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                //INCREMENTATION
                nombre_element++;
                state = ETAT_PILE_RELAXATION;
                // ya un pb ici avec le nombre de elelement
                if(nombre_element >= 4){
                    state = ETAT_PILE_RELACHEMENT;
                }
            }
            break;

         case ETAT_PILE_RELACHEMENT   :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                state = ETAT_PILE_INITIAL;
            }
            break;

        case ETAT_PILE_RELAXATION   :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DESCENTE;
            }
            break;

        case ETAT_PILE_DESCENTE   :
            if (transition == TRANS_PILE_ASSERV_FINI){ //mettre les autre IR et compagnie
                state = ETAT_PILE_SAISIE_PINCE;
            }
            break;

         case ETAT_PILE_SAISIE_PINCE   :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                state = ETAT_PILE_SAISIE_MONTE;
            }
            break;

         case ETAT_PILE_SAISIE_MONTE   :
            if (transition == TRANS_PILE_ASSERV_FINI){ //mettre les autre IR et compagnie
                state = ETAT_PILE_SAISIE_FIN;
            }
            break;

        case ETAT_PILE_SAISIE_FIN   :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                state = ETAT_PILE_INITIAL;
            }
            break;


        // depot de tours
        case ETAT_PILE_DEPOT_DECISION   :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                if (nombre_element >= 4){ //mettre les autre IR et compagnie
                    if (depot_estrade){ //mettre les autre IR et compagnie
                        state = ETAT_PILE_DEPOT_FULL_H_PREP_1;
                    }
                    else{
                        state = ETAT_PILE_DEPOT_FULL_INIT;
                    }
                }
                else{
                    state = ETAT_PILE_DEPOT_INF_PREP_1;
                }
            }
            break;

          case ETAT_PILE_DEPOT_FULL_INIT    :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DEPOT_FULL_H_PRET;
            }
            break;

         case ETAT_PILE_DEPOT_FULL_H_PREP_1    :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DEPOT_FULL_H_PREP_2;
            }
            break;

        case ETAT_PILE_DEPOT_FULL_H_PREP_2    :
            if (transition == TRANS_PILE_ASSERV_FINI){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DEPOT_FULL_H_PREP_3;
            }
            break;

        case ETAT_PILE_DEPOT_FULL_H_PREP_3    :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DEPOT_FULL_H_PREP_4;
            }
            break;

          case ETAT_PILE_DEPOT_FULL_H_PREP_4    :
            if (transition == TRANS_PILE_ASSERV_FINI){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DEPOT_FULL_H_PRET;
            }
            break;

         case ETAT_PILE_DEPOT_FULL_H_PRET    :
            if (transition == TRANS_PILE_POSE){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DEPOT_FULL_H_POSE;
            }
            break;

        case ETAT_PILE_DEPOT_FULL_H_POSE    :
            if (transition == TRANS_PILE_REPLIS){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DEPOT_FULL_REPLIS_1;
                nombre_element = 0;
            }
            break;

        case ETAT_PILE_DEPOT_FULL_REPLIS_1    :
            if (transition == TRANS_PILE_ASSERV_FINI){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DEPOT_FULL_REPLIS_2;
            }
            break;

          case ETAT_PILE_DEPOT_FULL_REPLIS_2    :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                state = ETAT_PILE_INITIAL;
            }
            break;

         case ETAT_PILE_DEPOT_INF_PREP_1    :
            if (transition == TRANS_PILE_TIME_OUT){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DEPOT_INF_PREP_2;
            }
            break;

        case ETAT_PILE_DEPOT_INF_PREP_2    :
            if (transition == TRANS_PILE_ASSERV_FINI){ //mettre les autre IR et compagnie
                state = ETAT_PILE_DEPOT_FULL_H_PRET;
            }
            break;
    }
   if (old_state != state)
    {
        Serial.print("NEW STATE -> Constructeur de pile: ");
        Serial.println(state);

        reset_time_out();
        in_state_func();
    }
}

// renvoi le numero d'etat en cours
int Constructeur_pile::actualState()
{
    return state;
}

// define la periode d'attente
void Constructeur_pile::set_time_out(int dt_)
{
    t_over = millis() + dt_;
    time_out_on = true;
    //Serial.println("time_out set ");
}

//reset le timer
void Constructeur_pile::reset_time_out()
{
    time_out_on = false;
}

// temps de periode fini?
bool Constructeur_pile::is_time_out()
{
   if (time_out_on && t_over < millis())
   {
     time_out_on = false;
     return true;
   }
   return false;
}

#define TEMPO_TEST_PILE 200

// fonction d'execution des taches de la MAE
void Constructeur_pile::in_state_func()
{
    switch (state)
    {
        case ETAT_PILE_INITIAL  :
            pinceur.saisie();
            ascenseur.monte();
            taclette_EXT.position_fermeture();
            taclette_INT.position_fermeture();
            Serial.println("ETAT_PILE_INITIAL ");
            break;

         case ETAT_PILE_PREP_SAISIE   :
            set_time_out(TEMPO_TEST_PILE);
            taclette_EXT.position_moiss_bat();
            taclette_INT.position_prise_central();
            Serial.println("ETAT_PILE_PREP_SAISIE  ");
            break;

        case ETAT_PILE_PRISE   :
            set_time_out(TEMPO_TEST_PILE);
            taclette_EXT.position_fermeture();
            taclette_INT.position_fermeture();
            Serial.println("ETAT_PILE_PRISE  ");
            break;

        case ETAT_PILE_ANALYSE   :
            set_time_out(TEMPO_TEST_PILE);
            Serial.println("ETAT_PILE_ANALYSE  ");
            break;

        case ETAT_PILE_DECISION_MOVE   :
            set_time_out(TEMPO_TEST_PILE);
            Serial.println("ETAT_PILE_DECISION_MOVE  ");
            break;

         case ETAT_PILE_RELACHEMENT   :
            set_time_out(TEMPO_TEST_PILE);
            pinceur.relachement();
            Serial.println("ETAT_PILE_RELACHEMENT  ");
            break;

        case ETAT_PILE_RELAXATION   :
            set_time_out(TEMPO_TEST_PILE);
            pinceur.relachement();
            taclette_EXT.position_degagement();
            taclette_INT.position_degagement();
            Serial.println("ETAT_PILE_RELAXATION  ");
            break;

        case ETAT_PILE_DESCENTE   :
            ascenseur.descend();
            Serial.println("ETAT_PILE_DESCENTE  ");
            break;

         case ETAT_PILE_SAISIE_PINCE   :
            set_time_out(TEMPO_TEST_PILE);
            pinceur.saisie();

            Serial.println("ETAT_PILE_SAISIE_PINCE  ");
            break;

         case ETAT_PILE_SAISIE_MONTE   :
            ascenseur.monte();
            Serial.println("ETAT_PILE_SAISIE_MONTE  ");
            break;

        case ETAT_PILE_SAISIE_FIN   :
            set_time_out(TEMPO_TEST_PILE);
            taclette_EXT.position_fermeture();
            taclette_INT.position_fermeture();
            Serial.println("ETAT_PILE_SAISIE_FIN  ");
            break;

        case ETAT_PILE_DEPOT_DECISION   :
            set_time_out(TEMPO_TEST_PILE);
            Serial.println("ETAT_PILE_DEPOT_DECISION  ");
            break;

          case ETAT_PILE_DEPOT_FULL_INIT    :
            set_time_out(TEMPO_TEST_PILE);
            taclette_EXT.position_moiss_bat();
            taclette_INT.position_prise_central();
            Serial.println("ETAT_PILE_DEPOT_FULL_INIT   ");
            break;

         case ETAT_PILE_DEPOT_FULL_H_PREP_1    :
            set_time_out(TEMPO_TEST_PILE);
            taclette_EXT.position_moiss_bat();
            taclette_INT.position_prise_central();
            pinceur.relachement();
            Serial.println("ETAT_PILE_DEPOT_FULL_H_PREP_1   ");
            break;

        case ETAT_PILE_DEPOT_FULL_H_PREP_2    :
            ascenseur.descend();
            Serial.println("ETAT_PILE_DEPOT_FULL_H_PREP_2   ");
            break;

        case ETAT_PILE_DEPOT_FULL_H_PREP_3    :
            set_time_out(TEMPO_TEST_PILE);
            pinceur.saisie();
            Serial.println("ETAT_PILE_DEPOT_FULL_H_PREP_3   ");
            break;

          case ETAT_PILE_DEPOT_FULL_H_PREP_4    :
            ascenseur.estrade();
            Serial.println("ETAT_PILE_DEPOT_FULL_H_PREP_4   ");
            break;

         case ETAT_PILE_DEPOT_FULL_H_PRET    :
            set_time_out(TEMPO_TEST_PILE);
            Serial.println("ETAT_PILE_DEPOT_FULL_H_PRET   ");
            break;

        case ETAT_PILE_DEPOT_FULL_H_POSE    :
            set_time_out(TEMPO_TEST_PILE);
            pinceur.deployement_total();
            Serial.println("ETAT_PILE_DEPOT_FULL_H_POSE   ");
            break;

        case ETAT_PILE_DEPOT_FULL_REPLIS_1    :
            pinceur.saisie();
            ascenseur.monte();
            Serial.println("ETAT_PILE_DEPOT_FULL_REPLIS_1   ");
            break;

          case ETAT_PILE_DEPOT_FULL_REPLIS_2    :
            set_time_out(TEMPO_TEST_PILE);
            taclette_EXT.position_fermeture();
            taclette_INT.position_fermeture();
            Serial.println("ETAT_PILE_DEPOT_FULL_REPLIS_2   ");
            break;

         case ETAT_PILE_DEPOT_INF_PREP_1    :
            set_time_out(TEMPO_TEST_PILE);
            pinceur.saisie();
            taclette_EXT.position_moiss_bat();
            taclette_INT.position_prise_central();
            Serial.println("ETAT_PILE_DEPOT_INF_PREP_1   ");
            break;

        case ETAT_PILE_DEPOT_INF_PREP_2    :
            if(depot_estrade){
                ascenseur.estrade();
            }
            else{
                ascenseur.descend();
            }
            Serial.println("ETAT_PILE_DEPOT_INF_PREP_2   ");
            break;
    }
}


/****************************************************
   IO
*****************************************************/
IO::IO():
        clap_gauche(false),
        clap_droite(true),
        constructeur_pile_gauche(false,PIN_BUMPER_ASC_BAS_GAUCHE,PIN_BUMPER_ASC_HAUT_GAUCHE),
        constructeur_pile_droite(true,PIN_BUMPER_ASC_BAS_DROITE,PIN_BUMPER_ASC_HAUT_DROITE),
        camera(),
        capot(),
        aspiration(),
        balle_droite(),
        balle_gauche(),
        to_be_ejected_droite(true),
        to_be_ejected_gauche(true)
{
    //Serial.println(" IO declaration");
}

void IO::balle_droite_trigger(int transition)
{
    balle_droite.trigger(transition);
}

void IO::run()
{
    constructeur_pile_gauche.run();
    constructeur_pile_droite.run();
    balle_droite.run();

    // injection des balles automatique, sinon on gere ca au master lors du depot... mais demande de checker a la main
    // comme ca si c bon niveau meca ... ce sera judicieux
    if(constructeur_pile_droite.get_nombre_element()>=NOMBRE_MIN_STAND_AVANT_INJECTION && to_be_ejected_droite)
    {
        to_be_ejected_droite = false;
        balle_droite.trigger(TRANSISTION_BALLE_DROITE_EJECTION);
        Serial.print("nombre d'element dans la pile droite : ");
        Serial.println(constructeur_pile_droite.get_nombre_element());
        Serial.println(" -> ejection automatique balle droite");
    }
    if(constructeur_pile_gauche.get_nombre_element()>=NOMBRE_MIN_STAND_AVANT_INJECTION && to_be_ejected_gauche)
    {
        to_be_ejected_gauche = false;
        balle_gauche.ejection();
        Serial.print("nombre d'element dans la pile gauche : ");
        Serial.println(constructeur_pile_gauche.get_nombre_element());
        Serial.println(" -> ejection automatique balle gauche");
    }
}


Claps* IO::get_Claps_droite(){
    return &clap_droite;
}

Claps* IO::get_Claps_gauche(){
    return &clap_gauche;
}

Constructeur_pile* IO::get_Constructeur_pile_gauche()
{
    return &constructeur_pile_gauche;
}

Constructeur_pile* IO::get_Constructeur_pile_droite()
{
    return &constructeur_pile_droite;
}

Camera* IO::get_Camera()
{
    return &camera;
}

Capot* IO::get_Capot()
{
    return &capot;
}

Aspiration* IO::get_Aspiration()
{
    return &aspiration;
}

Balle_droite* IO::get_Balle_droite()
{
    return &balle_droite;
}

Balle_gauche* IO::get_Balle_gauche()
{
    return &balle_gauche;
}
