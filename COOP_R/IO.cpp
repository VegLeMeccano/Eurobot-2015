#include "IO.h"
#include <string.h>



/*********************************************************************
    CHAINE SECONDAIRE
*********************************************************************/
ChenilleSecondaire::ChenilleSecondaire()
{
    chenille_secondaire.attach(PIN_PWM_MOTEUR_CHENILLE_SECONDAIRE);
    bascule.attach(PIN_PWM_SERVO_BASCULE);
    OFF();
    position_rangee();
}

void ChenilleSecondaire::OFF(){
    chenille_secondaire.writeMicroseconds(CHAINE_SECONDAIRE_STOP);
    Serial.println("ChenilleSecondaire::OFF()");
}

void ChenilleSecondaire::ON(){
    chenille_secondaire.writeMicroseconds(CHAINE_SECONDAIRE_MARCHE);
    Serial.println("ChenilleSecondaire::ON()");
}

void ChenilleSecondaire::position_rangee(){
    bascule.writeMicroseconds(CHAINE_SECONDAIRE_POSITION_RANGEE);
}

void ChenilleSecondaire::position_miHauteur(){
    bascule.writeMicroseconds(CHAINE_SECONDAIRE_POSITION_MI);
}

void ChenilleSecondaire::position_auSol(){
    bascule.writeMicroseconds(CHAINE_SECONDAIRE_POSITION_SOL);
}


/*********************************************************************
    CHAINE PRINCIPALE
*********************************************************************/
/*
CONSTRUCTEUR
*/
ChenillePrincipale::ChenillePrincipale():
    val_ir_bas(PIN_IR_BAS,SEUIL_IR_BAS),
    val_ir_haut(PIN_IR_HAUT,SEUIL_IR_HAUT),
    bumper_av_g(PIN_BUMPER_RECALAGE_AV_G,SEUIL_BUMPER),
    bumper_av_d(PIN_BUMPER_RECALAGE_AV_D,SEUIL_BUMPER),
    bumper_g_av(PIN_BUMPER_RECALAGE_G_AV,SEUIL_BUMPER),
    bumper_g_ar(PIN_BUMPER_RECALAGE_G_AR,SEUIL_BUMPER),
    bumper_d_av(PIN_BUMPER_RECALAGE_D_AV,SEUIL_BUMPER),
    bumper_d_ar(PIN_BUMPER_RECALAGE_D_AR,SEUIL_BUMPER)
{
    chenille_laterale.attach(PIN_PWM_MOTEUR_CHENILLE_LATERALE);
    chenille_gauche.attach(PIN_PWM_MOTEUR_CHENILLE_G);
    chenille_droite.attach(PIN_PWM_MOTEUR_CHENILLE_D);
    arret();
}

void ChenillePrincipale::arret(){
    chenille_laterale.writeMicroseconds(1500);
    chenille_gauche.writeMicroseconds(1500);
    chenille_droite.writeMicroseconds(1500);
}

void ChenillePrincipale::run(){

}


void ChenillePrincipale::recalage_gauche(){
    // enclenchement d'une asserv
    // vers le run()

    // tant qu'on a pas bumper a gauche on continu
    if(bumper_g_ar.is_on() && bumper_g_av.is_on()){
        chenille_laterale.writeMicroseconds(CHENILLE_LATERALE_ARRET);
    }
    else{
        chenille_laterale.writeMicroseconds(CHENILLE_LATERALE_DEPLACEMENT_GAUCHE);
    }

}

void ChenillePrincipale::recalage_face(){

}

void ChenillePrincipale::recalage_droite(){

}

void ChenillePrincipale::decalage_droite(double tempsTotAction){

}

void ChenillePrincipale::decalage_gauche(double tempsTotAction){

}

void ChenillePrincipale::decalage_avant(double tempsTotAction){

}

void ChenillePrincipale::decalage_arriere(double tempsTotAction){

}


/*********************************************************************
    TURBINE
*********************************************************************/
Turbine::Turbine()
{
    turbine.attach(PIN_PWM_SERVO_TURBINE);
    OFF();
}

void Turbine::OFF(){
    turbine.writeMicroseconds(TURBINE_OFF);
}

void Turbine::ON(){
    turbine.writeMicroseconds(TURBINE_ON);
}



/*********************************************************************
    NOZZLE
*********************************************************************/
Nozzle::Nozzle()
{
    nozzle.attach(PIN_PWM_SERVO_NOZZLE);
    middle();
}

void Nozzle::haut(){
    nozzle.writeMicroseconds(NOZZLE_HAUT);
}
void Nozzle::middle(){
    nozzle.writeMicroseconds(NOZZLE_MIDDLE);
}
void Nozzle::bas(){
    nozzle.writeMicroseconds(NOZZLE_BAS);
}



/*********************************************************************
    PINCE
*********************************************************************/
Pince::Pince(bool cote_droit_v)
{
    cote_droit = cote_droit_v;
    if(cote_droit){
        garde.attach(PIN_PWM_SERVO_GARDE_D);
        bras.attach(PIN_PWM_SERVO_BRAS_D);
    }
    else{
        garde.attach(PIN_PWM_SERVO_GARDE_G);
        bras.attach(PIN_PWM_SERVO_BRAS_G);
    }
}

void Pince::haut(){
    if(cote_droit){
        bras.writeMicroseconds(BRAS_DROITE_RANGE);
    }
    else{
        bras.writeMicroseconds(BRAS_GAUCHE_RANGE);
    }
}
void Pince::middle(){
    if(cote_droit){
        bras.writeMicroseconds(BRAS_DROITE_MIDDLE);
    }
    else{
        bras.writeMicroseconds(BRAS_DROITE_MIDDLE);
    }
}

void Pince::bas(){
    if(cote_droit){
        bras.writeMicroseconds(BRAS_DROITE_BAS);
    }
    else{
        bras.writeMicroseconds(BRAS_GAUCHE_BAS);
    }
}

void Pince::pince_ON(){
    if(cote_droit){
        garde.writeMicroseconds(GARDE_DROITE_ON);
    }
    else{
        garde.writeMicroseconds(GARDE_GAUCHE_ON);
    }
}

void Pince::pince_OFF(){
    if(cote_droit){
        garde.writeMicroseconds(GARDE_DROITE_OFF);
    }
    else{
        garde.writeMicroseconds(GARDE_GAUCHE_OFF);
    }
}


/*********************************************************************
    DeposeurTapis
*********************************************************************/
DeposeurTapis::DeposeurTapis():
    turbine(),
    nozzle(),
    pince_droite(true),
    pince_gauche(false),
    time_out_on(false),
    state(0),
    period_run(50)
    {
    }


void DeposeurTapis::trigger(int transition)
{
    Serial.println("");
    Serial.print("appel trigger depose tapis : ");
    Serial.println(transition);
    // add things here for MAE
    if (transition == TRANSISTION_BALLE_DROITE_PRISE || transition == TRANSISTION_BALLE_DROITE_EJECTION )
    {
         Serial.println(" ");
         Serial.print("TRANSISTION FORCEE -> depose tapis: ");
         Serial.println(transition);
         //trigger_to_be = transition;
    }

    if (transition == TRANSISTION_BALLE_DROITE_TIME_OUT )
    {
         Serial.println(" ");
         Serial.print("TRANSITION AUTO -> depose tapis: ");
         Serial.println(transition);
         //trigger_to_be = transition;
    }
   Serial.print("ACTUAL STATE -> depose tapis : ");
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
    }
   if (old_state != state)
    {
        Serial.print("NEW STATE -> Depose Tapis: ");
        Serial.println(state);

        reset_time_out();
        in_state_func();
    }
}

//le run....
void DeposeurTapis::run(){
    if (period_run.is_over())
    {
        period_run.reset();
        if (is_time_out())
        {
            trigger(TRANSISTION_BALLE_DROITE_TIME_OUT);
        }
    }

}

// tempo
void DeposeurTapis::set_time_out(int dt_)
{
    t_over = millis() + dt_;
    time_out_on = true;
    //trigger_to_be = trigger;
    Serial.print("time_out set ");
    //Serial.println(trigger);
}

// reset time out
void DeposeurTapis::reset_time_out()
{
    time_out_on = false;
}

// es ce que c'est fini
bool DeposeurTapis::is_time_out()
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
    }
}





/*********************************************************************
    IO
*********************************************************************/

/** CONSTRUCTEUR IO **/
IO::IO():
    deposeurTapis(),
    chenilleSecondaire(),
    chenillePrincipale()
{


}


void IO::run()
{
    //Serial.println("IO run");
    deposeurTapis.run();
    chenillePrincipale.run();
}

