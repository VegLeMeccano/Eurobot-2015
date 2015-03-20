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
    //Serial.println("ChenilleSecondaire::OFF()");
}

void ChenilleSecondaire::ON(){
    chenille_secondaire.writeMicroseconds(CHAINE_SECONDAIRE_MARCHE);
    //Serial.println("ChenilleSecondaire::ON()");
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
    bumper_d_ar(PIN_BUMPER_RECALAGE_D_AR,SEUIL_BUMPER),
    period_run(50),
    period_asserv(100)
{
    chenille_laterale.attach(PIN_PWM_MOTEUR_CHENILLE_LATERALE);
    chenille_gauche.attach(PIN_PWM_MOTEUR_CHENILLE_G);
    chenille_droite.attach(PIN_PWM_MOTEUR_CHENILLE_D);
    arret();
}


void ChenillePrincipale::longi_gauche_stop()
{
    chenille_gauche.writeMicroseconds(LONGI_GAUCHE_STOP);
}

void ChenillePrincipale::longi_gauche_avance()
{
    chenille_gauche.writeMicroseconds(LONGI_GAUCHE_AVANCE);
}

void ChenillePrincipale::longi_gauche_recule()
{
    chenille_gauche.writeMicroseconds(LONGI_GAUCHE_RECULE);
}

void ChenillePrincipale::longi_droite_stop()
{
    chenille_droite.writeMicroseconds(LONGI_DROITE_STOP);
}
void ChenillePrincipale::longi_droite_avance()
{
    chenille_droite.writeMicroseconds(LONGI_DROITE_AVANCE);
}

void ChenillePrincipale::longi_droite_recule()
{
    chenille_droite.writeMicroseconds(LONGI_DROITE_RECULE);
}

void ChenillePrincipale::lateral_gauche()
{
    chenille_laterale.writeMicroseconds(LATERAL_GAUCHE);
}

void ChenillePrincipale::lateral_droite()
{
    chenille_laterale.writeMicroseconds(LATERAL_DROITE);
}

void ChenillePrincipale::lateral_stop()
{
    chenille_laterale.writeMicroseconds(LATERAL_STOP);
}

// arrete toutes les chaines sans scrupules
void ChenillePrincipale::arret(){
    lateral_stop();
    longi_droite_stop();
    longi_gauche_stop();
}


void ChenillePrincipale::run(){
    if (period_run.is_over())
    {
        period_run.reset();

        // mettre action specifique asserv
    }
}

// va bumper a droite et s'arrete
void ChenillePrincipale::recalage_gauche(){
    // tant qu'on a pas bumper a gauche on continu
    // a mettre dans une boucle d'asserv ?

    if(bumper_g_ar.is_on() && bumper_g_av.is_on()){
        lateral_stop();
    }
    else{
        lateral_gauche();
    }
}

//va bumper a gauche et s'arrete
void ChenillePrincipale::recalage_droite(){
    // tant qu'on a pas bumper a gauche on continu
    // a mettre dans une boucle d'asserv ?

    if(bumper_d_ar.is_on() && bumper_d_av.is_on()){
        lateral_stop();
    }
    else{
        lateral_droite();
    }
}

// va bumper en face et s'arrete
void ChenillePrincipale::recalage_face(){
    if(bumper_av_g.is_on() && bumper_av_d.is_on()){
        longi_droite_stop();
        longi_gauche_stop();
        // send asserv fini
    }
    else{
        if(bumper_av_g.is_on()){
            longi_gauche_stop();
        }
        else{
            longi_gauche_avance();
        }

        if(bumper_av_d.is_on()){
            longi_droite_stop();
        }
        else{
            longi_droite_avance();
        }
    }
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
    haut();
    pince_ON();
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

// attention l'appel des transistions est sequentiel 1, puis 2,3 et 4

// depose le premier tapis
void DeposeurTapis::depose_first()
{
    trigger(TRANS_TAPIS_POSE_FIRST);
}

//remballe le premier tapis
void DeposeurTapis::replis_first()
{
    trigger(TRANS_TAPIS_REPLI_FIRST);
}

// depose le second tapis
void DeposeurTapis::depose_second()
{
    trigger(TRANS_TAPIS_POSE_SECOND);
}

// replis le second
void DeposeurTapis::replis_second()
{
    trigger(TRANS_TAPIS_REPLI_SECOND);
}

// appel de transistion
void DeposeurTapis::trigger(int transition)
{
    Serial.println("");
    Serial.print("appel trigger depose tapis : ");
    Serial.println(transition);

    if (transition == TRANS_TAPIS_POSE_FIRST  || transition == TRANS_TAPIS_REPLI_FIRST  || transition == TRANS_TAPIS_POSE_SECOND  || transition == TRANS_TAPIS_REPLI_SECOND  )
    {
         Serial.println(" ");
         Serial.print("TRANSISTION FORCEE -> depose tapis: ");
         Serial.println(transition);
    }

    if (transition == TRANS_TAPIS_TIME_OUT  )
    {
         Serial.println(" ");
         Serial.print("TRANSITION AUTO -> depose tapis: ");
         Serial.println(transition);

    }
   Serial.print("ACTUAL STATE -> depose tapis : ");
   Serial.println(state);
   int old_state;
   old_state = state;
   switch(state)
    {
        case ETAT_TAPIS_INIT  :
           if (transition == TRANS_TAPIS_POSE_FIRST )
           {
                state = ETAT_TAPIS_AT ;
           }
           break;

         case ETAT_TAPIS_AT  :
           if (transition == TRANS_TAPIS_TIME_OUT  )
           {
                state = ETAT_TAPIS_DF_1 ;
           }
           break;

        case ETAT_TAPIS_DF_1  :
           if (transition == TRANS_TAPIS_TIME_OUT  )
           {
                state = ETAT_TAPIS_DF_2   ;
           }
           break;

        case ETAT_TAPIS_DF_2   :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_DF_3  ;
           }
           break;

        case ETAT_TAPIS_DF_3   :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_DFP_1  ;
           }
           break;

         case ETAT_TAPIS_DFP_1   :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_DFP_2  ;
           }
           break;

        case ETAT_TAPIS_DFP_2   :
           if (transition == TRANS_TAPIS_REPLI_FIRST  )
           {
                state = ETAT_TAPIS_RF_1  ;
           }
           break;

        case ETAT_TAPIS_RF_1   :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_RF_2  ;
           }
           break;

        case ETAT_TAPIS_RF_2    :
           if (transition == TRANS_TAPIS_POSE_SECOND  )
           {
                state = ETAT_TAPIS_DS_1   ;
           }
           break;

        case ETAT_TAPIS_DS_1    :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_DS_2   ;
           }
           break;

          case ETAT_TAPIS_DS_2     :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_DS_3    ;
           }
           break;

        case ETAT_TAPIS_DS_3     :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_DSP_1    ;
           }
           break;

          case ETAT_TAPIS_DSP_1      :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_DSP_2     ;
           }
           break;

        case ETAT_TAPIS_DSP_2      :
           if (transition == TRANS_TAPIS_REPLI_SECOND  )
           {
                state = ETAT_TAPIS_RS_1     ;
           }
           break;

          case ETAT_TAPIS_RS_1       :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_RS_2      ;
           }
           break;

          case ETAT_TAPIS_RS_2        :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_RS_3       ;
           }
           break;

           case ETAT_TAPIS_RS_3        :
           if (transition == TRANS_TAPIS_TIME_OUT )
           {
                state = ETAT_TAPIS_INIT        ;
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
            trigger(TRANS_TAPIS_TIME_OUT);
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


void DeposeurTapis::in_state_func()
{
    switch (state)
    {
        case ETAT_TAPIS_INIT :
            pince_droite.haut();
            pince_droite.pince_ON();
            pince_gauche.haut();
            pince_gauche.pince_ON();
            turbine.OFF();
            nozzle.middle();
            Serial.println("ETAT_TAPIS_INIT");
            break;

        case ETAT_TAPIS_AT :
            set_time_out(500);
            turbine.ON();
            nozzle.haut();
            Serial.println("ETAT_TAPIS_AT");
            break;

        case ETAT_TAPIS_DF_1  :
            set_time_out(500);
            pince_gauche.middle();
            nozzle.haut();
            Serial.println("ETAT_TAPIS_DF_1 ");
            break;

        case ETAT_TAPIS_DF_2  :
            set_time_out(500);
            pince_gauche.middle();
            nozzle.middle();
            Serial.println("ETAT_TAPIS_DF_2 ");
            break;

         case ETAT_TAPIS_DF_3 :
            set_time_out(500);
            pince_gauche.bas();
            nozzle.bas();
            Serial.println("ETAT_TAPIS_DF_3");
            break;

        case ETAT_TAPIS_DFP_1  :
            set_time_out(500);
            turbine.OFF();
            Serial.println("ETAT_TAPIS_DFP_1 ");
            break;

         case ETAT_TAPIS_DFP_2  :
            pince_gauche.pince_OFF();
            Serial.println("ETAT_TAPIS_DFP_2 ");
            break;

        case ETAT_TAPIS_RF_1  :
            set_time_out(500);
            pince_gauche.middle();
            Serial.println("ETAT_TAPIS_RF_1 ");
            break;

         case ETAT_TAPIS_RF_2  :
            //set_time_out(500);
            pince_gauche.pince_ON();
            Serial.println("ETAT_TAPIS_RF_2 ");
            break;

        case ETAT_TAPIS_DS_1  :
            set_time_out(500);
            pince_gauche.bas();
            turbine.ON();
            nozzle.haut();
            Serial.println("ETAT_TAPIS_DS_1 ");
            break;

         case ETAT_TAPIS_DS_2  :
            set_time_out(500);
            pince_droite.middle();
            nozzle.middle();
            Serial.println("ETAT_TAPIS_DS_2 ");
            break;

        case ETAT_TAPIS_DS_3  :
            set_time_out(500);
            pince_droite.bas();
            nozzle.bas();
            Serial.println("ETAT_TAPIS_DS_3 ");
            break;

        case ETAT_TAPIS_DSP_1   :
            set_time_out(500);
            turbine.OFF();
            Serial.println("ETAT_TAPIS_DSP_1  ");
            break;

        case ETAT_TAPIS_DSP_2   :
            pince_droite.pince_OFF();
            Serial.println("ETAT_TAPIS_DSP_2  ");
            break;

        case ETAT_TAPIS_RS_1   :
            set_time_out(500);
            pince_droite.middle();
            Serial.println("ETAT_TAPIS_RS_1  ");
            break;

        case ETAT_TAPIS_RS_2   :
            set_time_out(500);
            pince_droite.pince_ON();
            pince_droite.haut();
            pince_gauche.middle();
            Serial.println("ETAT_TAPIS_RS_2  ");
            break;

        case ETAT_TAPIS_RS_3   :
            set_time_out(500);
            pince_gauche.haut();
            nozzle.middle();
            Serial.println("ETAT_TAPIS_RS_3  ");
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

DeposeurTapis* IO::get_DeposeurTapis()
{
    return &deposeurTapis;
}

ChenilleSecondaire* IO::get_ChenilleSecondaire()
{
    return &chenilleSecondaire;
}

ChenillePrincipale* IO::get_ChenillePrincipale()
{
    return &chenillePrincipale;
}
