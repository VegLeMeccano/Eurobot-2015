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



#define PERIODE_SLAVE 50
#define SLAVE_TIME_SUP_APRES_STOP 1000 // 1s a checke en vrai
#define SLAVE_TIME_OUT_RECALAGE 15000 //15s
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
    sonar(),
    state(SLAVE_STATE_REPOS),
    time_asserv_started(0),
    time_asserv_to_do(0),         // temps d'asserv pour l'asser en cours
    time_asserv_remaining(0),     // temps restant si interruption par l'evitement, rajouter un dela temps
    time_delta_time_after_interrupt(SLAVE_TIME_SUP_APRES_STOP),
    time_out_on(false),
    t_over(false),
    evitement_actif(false),       // pour savoir si on consulte les sonar ou pas
    interruption_par_evitement(false)
{
    chenille_laterale.attach(PIN_PWM_MOTEUR_CHENILLE_LATERALE);
    chenille_gauche.attach(PIN_PWM_MOTEUR_CHENILLE_G);
    chenille_droite.attach(PIN_PWM_MOTEUR_CHENILLE_D);
    Serial.println("[INIT] CHENILLE PRINCIPAL");

    arret();
    set_evitement_OFF();
    in_state_func();
}

Sonar* ChenillePrincipale::get_Sonar()
{
    return &sonar;
}

void ChenillePrincipale::set_evitement_OFF()
{
    evitement_actif = false;
}

void ChenillePrincipale::set_evitement_ON()
{
    evitement_actif = true;
}


/** deplacement longitudinale, chenille gauche arret moteur
*/
void ChenillePrincipale::longi_gauche_stop()
{
    chenille_gauche.writeMicroseconds(LONGI_GAUCHE_STOP);
}

/** deplacement longitudinale, chenille gauche avance
*/
void ChenillePrincipale::longi_gauche_avance()
{
    chenille_gauche.writeMicroseconds(LONGI_GAUCHE_AVANCE);
}

/** deplacement longitudinale, chenille gauche recule
*/
void ChenillePrincipale::longi_gauche_recule()
{
    chenille_gauche.writeMicroseconds(LONGI_GAUCHE_RECULE);
}


/** deplacement longitudinale, chenille droite arret moteur
*/
void ChenillePrincipale::longi_droite_stop()
{
    chenille_droite.writeMicroseconds(LONGI_DROITE_STOP);
}

/** deplacement longitudinale, chenille droite avance
*/
void ChenillePrincipale::longi_droite_avance()
{
    chenille_droite.writeMicroseconds(LONGI_DROITE_AVANCE);
}

/** deplacement longitudinale, chenille droite recule
*/
void ChenillePrincipale::longi_droite_recule()
{
    chenille_droite.writeMicroseconds(LONGI_DROITE_RECULE);
}


/** deplacement laterale gauche
*/
void ChenillePrincipale::lateral_gauche()
{
    chenille_laterale.writeMicroseconds(CHENILLE_LATERALE_DEPLACEMENT_GAUCHE);
}

/** deplacement laterale droite
*/
void ChenillePrincipale::lateral_droite()
{
    chenille_laterale.writeMicroseconds(CHENILLE_LATERALE_DEPLACEMENT_DROITE);
}

/** deplacement laterale arrret moteur
*/
void ChenillePrincipale::lateral_stop()
{
    chenille_laterale.writeMicroseconds(CHENILLE_LATERALE_ARRET);
}

// arrete toutes les chaines sans scrupules
void ChenillePrincipale::arret(){
    lateral_stop();
    longi_droite_stop();
    longi_gauche_stop();
}



// tempo
void ChenillePrincipale::set_time_out(int dt_)
{
    t_over = millis() + dt_;
    time_out_on = true;
    //trigger_to_be = trigger;
    Serial.print("time_out set ");
    //Serial.println(trigger);
}

// reset time out
void ChenillePrincipale::reset_time_out()
{
    time_out_on = false;
}

// es ce que c'est fini
bool ChenillePrincipale::is_time_out()
{
   if (time_out_on && t_over < millis())
   {
     time_out_on = false;
     return true;
   }
   return false;
}

/** boucle de control
*/
void ChenillePrincipale::run(){

    // actualisation des sonars pour deplacement
    sonar.run();

    if (period_run.is_over())
    {
        period_run.reset();

        // si le temps est fini
        if (is_time_out())
        {
            trigger(SLAVE_TRIGGER_TIME_OUT);
        }

        // si on bump devant
        if (bumper_av_d.is_on() && bumper_av_g.is_on() && state == SLAVE_STATE_DEPLACEMENT_AVANT_ACTION)
        {
            trigger(SLAVE_TRIGGER_BUMP_FACE);
        }

        // si on bump a gauche
        if (bumper_g_ar.is_on() && bumper_g_av.is_on() && state == SLAVE_STATE_DEPLACEMENT_GAUCHE_ACTION)
        {
            trigger(SLAVE_TRIGGER_BUMP_GAUCHE);
        }

        // si on bump a droite
        if (bumper_d_ar.is_on() && bumper_d_av.is_on() && state == SLAVE_STATE_DEPLACEMENT_DROITE_ACTION)
        {
            trigger(SLAVE_TRIGGER_BUMP_DROITE);
        }

        // si on detecte ennemi
        if(evitement_actif)
        {
            // en face
            if(state == SLAVE_STATE_DEPLACEMENT_AVANT_ACTION)
            {
                if(sonar.adv_face())
                {
                    trigger(SLAVE_TRIGGER_PAUSE);
                    Serial.println("# ADV DETECTED FACE");
                    // mettre le restant
                }
            }

            // a gauche
            if(state == SLAVE_STATE_DEPLACEMENT_GAUCHE_ACTION)
            {
                if(sonar.adv_gauche())
                {
                    trigger(SLAVE_TRIGGER_PAUSE);
                    Serial.println("# ADV DETECTED GAUCHE");
                    // mettre le restant
                }
            }

            // a droite
             if(state == SLAVE_STATE_DEPLACEMENT_DROITE_ACTION)
            {
                if(sonar.adv_droite())
                {
                    trigger(SLAVE_TRIGGER_PAUSE);
                    Serial.println("# ADV DETECTED DROITE");
                    // mettre le restant
                }
            }
        }


    }

}


// va bumper a droite et s'arrete
void ChenillePrincipale::recalage_gauche(){

    time_asserv_to_do = SLAVE_TIME_OUT_RECALAGE; //par default 15s si ca fini pas on passe ailleurs
    //set_evitement_OFF();
    trigger(SLAVE_TRIGGER_LATERAL_GAUCHE);
}

//va bumper a gauche et s'arrete
void ChenillePrincipale::recalage_droite(){

    time_asserv_to_do = SLAVE_TIME_OUT_RECALAGE; //par default 15s si ca fini pas on passe ailleurs
    //set_evitement_OFF();
    trigger(SLAVE_TRIGGER_LATERAL_DROITE);
}

// va bumper en face et s'arrete
void ChenillePrincipale::recalage_face(){

    time_asserv_to_do = SLAVE_TIME_OUT_RECALAGE; //par default 15s si ca fini pas on passe ailleurs
    //set_evitement_OFF();
    trigger(SLAVE_TRIGGER_LONGITUDINAL_AVANT);
}


void ChenillePrincipale::decalage_droite(long tempsTotAction){

    time_asserv_to_do = tempsTotAction;
    //set_evitement_ON();
    // il faut activer l'evitement de l'exterieur
    trigger(SLAVE_TRIGGER_LATERAL_DROITE);
}

void ChenillePrincipale::decalage_gauche(long tempsTotAction){

    time_asserv_to_do = tempsTotAction;
    //set_evitement_ON();
    // il faut activer l'evitement de l'exterieur
    trigger(SLAVE_TRIGGER_LATERAL_GAUCHE);
}

void ChenillePrincipale::decalage_avant(long tempsTotAction){

    time_asserv_to_do = tempsTotAction;
    //set_evitement_ON();
    // il faut activer l'evitement de l'exterieur
    trigger(SLAVE_TRIGGER_LONGITUDINAL_AVANT);
}


void ChenillePrincipale::decalage_arriere(long tempsTotAction){

    time_asserv_to_do = tempsTotAction;
    //set_evitement_OFF();        // pas besoin ici et puis ya pas de sonar derrriere :P
    // il faut activer l'evitement de l'exterieur
    trigger(SLAVE_TRIGGER_LATERAL_DROITE);
}

// pause l'asserv manuellement pour test, sinon c'est automatique avec l'evitement
void ChenillePrincipale::pause_asserv()
{
    trigger(SLAVE_TRIGGER_PAUSE);
}

// reprise de l'asser en cours
void ChenillePrincipale::reprise()
{
    trigger(SLAVE_TRIGGER_REPRISE);
}


// appel de transistion MAE
void ChenillePrincipale::trigger(int transition)
{
    Serial.println("");
    Serial.print("appel trigger slave : ");
    Serial.println(transition);

    if (transition == SLAVE_TRIGGER_BUMP_DROITE || transition == SLAVE_TRIGGER_BUMP_GAUCHE || transition == SLAVE_TRIGGER_BUMP_FACE )
    {
         Serial.println(" ");
         Serial.print("[SLAVE] TRANSISTION AUTOMATIQUE: BUMPER ACTIF");
         Serial.println(transition);
    }

    if (transition == SLAVE_TRIGGER_LATERAL_DROITE || transition == SLAVE_TRIGGER_LATERAL_GAUCHE || transition == SLAVE_TRIGGER_LONGITUDINAL_ARRIERE || transition == SLAVE_TRIGGER_LONGITUDINAL_AVANT )
    {
         Serial.println(" ");
         Serial.print("[SLAVE] TRANSISTION FORCEE: DEPLACEMENT");
         Serial.println(transition);
    }

    if (transition == SLAVE_TRIGGER_PAUSE || transition == SLAVE_TRIGGER_REPRISE )
    {
         Serial.println(" ");
         Serial.print("[SLAVE] TRANSISTION FORCEE: PAUSE");
         Serial.println(transition);
    }

    if (transition == SLAVE_TRIGGER_REPRISE )
    {
         Serial.println(" ");
         Serial.print("[SLAVE] TRANSISTION FORCEE: REPRISE");
         Serial.println(transition);
    }

    if (transition == TRANS_TAPIS_TIME_OUT  )
    {
         Serial.println(" ");
         Serial.print("[SLAVE] TRANSITION AUTOMATIQUE: TIME OUT");
         Serial.println(transition);

    }
   Serial.print("[SLAVE] ACTUAL STATE ->  ");
   Serial.println(state);
   int old_state;
   old_state = state;
   switch(state)
    {
        case SLAVE_STATE_REPOS  :
           if (transition == SLAVE_TRIGGER_LATERAL_GAUCHE )
           {
                state = SLAVE_STATE_DEPLACEMENT_GAUCHE_ACTION;
                time_asserv_started = millis();
                Serial.println("[SLAVE] Deplacement gauche");
           }
           if (transition == SLAVE_TRIGGER_LATERAL_DROITE )
           {
                state = SLAVE_STATE_DEPLACEMENT_DROITE_ACTION;
                time_asserv_started = millis();
                Serial.println("[SLAVE] Deplacement droite");
           }
           if (transition == SLAVE_TRIGGER_LONGITUDINAL_AVANT )
           {
                state = SLAVE_STATE_DEPLACEMENT_AVANT_ACTION;
                time_asserv_started = millis();
                Serial.println("[SLAVE] Deplacement avant");
           }
           if (transition == SLAVE_TRIGGER_LONGITUDINAL_ARRIERE )
           {
                state = SLAVE_STATE_DEPLACEMENT_ARRIERE_ACTION;
                Serial.println("[SLAVE] Deplacement arriere");
           }
           break;


        case SLAVE_STATE_DEPLACEMENT_GAUCHE_ACTION  :
           if (transition == SLAVE_TRIGGER_TIME_OUT )
           {
                state = SLAVE_STATE_REPOS;
                Serial.println("[SLAVE] Deplacement gauche fin, time out");
                Serial.println("# ASSFINI");
           }
           if (transition == SLAVE_TRIGGER_BUMP_GAUCHE )
           {
                state = SLAVE_STATE_REPOS;
                Serial.println("[SLAVE] Deplacement gauche fin, bumpers actifs");
                Serial.println("# ASSFINI");
           }
           if (transition == SLAVE_TRIGGER_PAUSE )
           {
                state = SLAVE_STATE_DEPLACEMENT_GAUCHE_PAUSE;
                // temps restant a faire pour l'asserv
                time_asserv_remaining = time_asserv_to_do - (millis() - time_asserv_started);
                if(time_asserv_remaining <=0 ){time_asserv_remaining=0;}
                // to do after reprise
                time_asserv_to_do = time_asserv_remaining + time_delta_time_after_interrupt;
                Serial.println("[SLAVE] Deplacement gauche interruption");
                Serial.println("# PAUSE");
           }

           break;


        case SLAVE_STATE_DEPLACEMENT_GAUCHE_PAUSE  :
           if (transition == SLAVE_TRIGGER_REPRISE )
           {
                state = SLAVE_STATE_DEPLACEMENT_GAUCHE_ACTION;
                time_asserv_started = millis();
                Serial.println("[SLAVE] Deplacement gauche reprise");
           }
           break;


        case SLAVE_STATE_DEPLACEMENT_DROITE_ACTION  :
           if (transition == SLAVE_TRIGGER_TIME_OUT )
           {
                state = SLAVE_STATE_REPOS;
                Serial.println("[SLAVE] Deplacement droite fin, time out");
                Serial.println("# ASSFINI");
           }
           if (transition == SLAVE_TRIGGER_BUMP_DROITE)
           {
                state = SLAVE_STATE_REPOS;
                Serial.println("[SLAVE] Deplacement droite fin, bumpers actifs");
                Serial.println("# ASSFINI");
           }
           if (transition == SLAVE_TRIGGER_PAUSE )
           {
                state = SLAVE_STATE_DEPLACEMENT_DROITE_PAUSE;
                // temps restant a faire pour l'asserv
                time_asserv_remaining = time_asserv_to_do - (millis() - time_asserv_started);
                if(time_asserv_remaining <=0 ){time_asserv_remaining=0;}
                // to do after reprise
                time_asserv_to_do = time_asserv_remaining + time_delta_time_after_interrupt;
                Serial.println("[SLAVE] Deplacement droite interruption");
                Serial.println("# PAUSE");
           }
           break;


        case SLAVE_STATE_DEPLACEMENT_DROITE_PAUSE  :
           if (transition == SLAVE_TRIGGER_REPRISE )
           {
                state = SLAVE_STATE_DEPLACEMENT_DROITE_ACTION;
                time_asserv_started = millis();
                Serial.println("[SLAVE] Deplacement droite reprise");
           }
           break;

        case SLAVE_STATE_DEPLACEMENT_AVANT_ACTION  :
           if (transition == SLAVE_TRIGGER_TIME_OUT )
           {
                state = SLAVE_STATE_REPOS;
                Serial.println("[SLAVE] Deplacement avant fin, time out");
                Serial.println("# ASSFINI");
           }
           if (transition == SLAVE_TRIGGER_BUMP_FACE)
           {
                state = SLAVE_STATE_REPOS;
                Serial.println("[SLAVE] Deplacement avant fin, bumpers actifs");
                Serial.println("# ASSFINI");
           }
           if (transition == SLAVE_TRIGGER_PAUSE )
           {
                state = SLAVE_STATE_DEPLACEMENT_AVANT_PAUSE;
                // temps restant a faire pour l'asserv
                time_asserv_remaining = time_asserv_to_do - (millis() - time_asserv_started);
                if(time_asserv_remaining <=0 ){time_asserv_remaining=0;}
                // to do after reprise
                time_asserv_to_do = time_asserv_remaining + time_delta_time_after_interrupt;
                Serial.println("[SLAVE] Deplacement avant interruption");
                Serial.println("# PAUSE");
           }
           break;


        case SLAVE_STATE_DEPLACEMENT_AVANT_PAUSE  :
           if (transition == SLAVE_TRIGGER_REPRISE )
           {
                state = SLAVE_STATE_DEPLACEMENT_AVANT_ACTION;
                time_asserv_started = millis();
                Serial.println("[SLAVE] Deplacement avant reprise");
           }
           break;

        case SLAVE_STATE_DEPLACEMENT_ARRIERE_ACTION  :
           if (transition == SLAVE_TRIGGER_TIME_OUT )
           {
                state = SLAVE_STATE_REPOS;
                Serial.println("[SLAVE] Deplacement arriere fin, time out");
                Serial.println("# ASSFINI");
           }
           break;
    }
   if (old_state != state)
    {
        Serial.print("[SLAVE] NEW STATE ->  ");
        Serial.println(state);
        reset_time_out();
        in_state_func();
    }
}



void ChenillePrincipale::in_state_func()
{
    switch (state)
    {
        case SLAVE_STATE_REPOS  :
           Serial.println("[SLAVE][ETAT] REPOS]");
           arret();
           break;


        case SLAVE_STATE_DEPLACEMENT_GAUCHE_ACTION  :
           Serial.println("[SLAVE][ETAT] DEPLACEMENT LATERAL GAUCHE ACTION");
           Serial.print("time asserv to do : ");
           Serial.println(time_asserv_to_do);
           set_time_out(time_asserv_to_do);
           lateral_gauche();
           break;


        case SLAVE_STATE_DEPLACEMENT_GAUCHE_PAUSE  :
           Serial.println("[SLAVE][ETAT] DEPLACEMENT LATERAL GAUCHE PAUSE");
           lateral_stop();
           break;

        case SLAVE_STATE_DEPLACEMENT_DROITE_ACTION  :
           Serial.println("[SLAVE][ETAT] DEPLACEMENT LATERAL DROITE ACTION");
           Serial.print("time asserv to do : ");
           Serial.println(time_asserv_to_do);
           set_time_out(time_asserv_to_do);
           lateral_droite();
           break;


        case SLAVE_STATE_DEPLACEMENT_DROITE_PAUSE  :
           Serial.println("[SLAVE][ETAT] DEPLACEMENT LATERAL DROITE PAUSE");
           lateral_stop();
           break;

        case SLAVE_STATE_DEPLACEMENT_AVANT_ACTION  :
           Serial.println("[SLAVE][ETAT] DEPLACEMENT AVANT ACTION");
           Serial.print("time asserv to do : ");
           Serial.println(time_asserv_to_do);
           set_time_out(time_asserv_to_do);
           longi_droite_avance();
           longi_gauche_avance();
           break;


        case SLAVE_STATE_DEPLACEMENT_AVANT_PAUSE  :
           Serial.println("[SLAVE][ETAT] DEPLACEMENT AVANT PAUSE");
           longi_droite_stop();
           longi_gauche_stop();
           break;

        case SLAVE_STATE_DEPLACEMENT_ARRIERE_ACTION  :
           Serial.println("[SLAVE][ETAT] DEPLACEMENT ARRIERE ACTION");
           set_time_out(time_asserv_to_do);
           Serial.print("time asserv to do : ");
           Serial.println(time_asserv_to_do);
           longi_droite_recule();
           longi_gauche_recule();
           break;
    }
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
            set_time_out(1000);
            pince_gauche.middle();
            //nozzle.haut();
            nozzle.middle();
            Serial.println("ETAT_TAPIS_DF_1 ");
            break;

        case ETAT_TAPIS_DF_2  :
            set_time_out(2000);
            pince_gauche.middle();
            //nozzle.middle();
            nozzle.bas();
            Serial.println("ETAT_TAPIS_DF_2 ");
            break;

         case ETAT_TAPIS_DF_3 :
            set_time_out(1000);
            pince_gauche.bas();
            nozzle.bas();
            Serial.println("ETAT_TAPIS_DF_3");
            break;

        case ETAT_TAPIS_DFP_1  :
            set_time_out(100);
            turbine.OFF();
            Serial.println("ETAT_TAPIS_DFP_1 ");
            break;

         case ETAT_TAPIS_DFP_2  :
            pince_gauche.pince_OFF();
            Serial.println("ETAT_TAPIS_DFP_2 ");
            break;

        case ETAT_TAPIS_RF_1  :
            set_time_out(1000);
            pince_gauche.middle();
            Serial.println("ETAT_TAPIS_RF_1 ");
            break;

         case ETAT_TAPIS_RF_2  :
            //set_time_out(500);
            pince_gauche.pince_ON();
            Serial.println("ETAT_TAPIS_RF_2 ");
            break;

        case ETAT_TAPIS_DS_1  :
            set_time_out(1000);
            pince_gauche.bas();
            turbine.ON();
            nozzle.haut();
            Serial.println("ETAT_TAPIS_DS_1 ");
            break;

         case ETAT_TAPIS_DS_2  :
            set_time_out(1000);
            pince_droite.middle();
            nozzle.middle();
            Serial.println("ETAT_TAPIS_DS_2 ");
            break;

        case ETAT_TAPIS_DS_3  :
            set_time_out(1000);
            pince_droite.bas();
            nozzle.bas();
            Serial.println("ETAT_TAPIS_DS_3 ");
            break;

        case ETAT_TAPIS_DSP_1   :
            set_time_out(1000);
            turbine.OFF();
            Serial.println("ETAT_TAPIS_DSP_1  ");
            break;

        case ETAT_TAPIS_DSP_2   :
            pince_droite.pince_OFF();
            Serial.println("ETAT_TAPIS_DSP_2  ");
            break;

        case ETAT_TAPIS_RS_1   :
            set_time_out(1000);
            pince_droite.middle();
            Serial.println("ETAT_TAPIS_RS_1  ");
            break;

        case ETAT_TAPIS_RS_2   :
            set_time_out(1000);
            pince_droite.pince_ON();
            pince_droite.haut();
            pince_gauche.middle();
            Serial.println("ETAT_TAPIS_RS_2  ");
            break;

        case ETAT_TAPIS_RS_3   :
            set_time_out(1000);
            pince_gauche.haut();
            nozzle.middle();
            Serial.println("ETAT_TAPIS_RS_3  ");
            break;
    }
}


#define SONAR_DISTANCE_MAX 100 //en cm default=500
#define SONAR_PING_INTERVAL 33
#define SONAR_SEUIL_DETECTION_ADV_LAT 30 //cm
#define SONAR_SEUIL_DETECTION_ADV_FACE 40 //cm
/****************************************************
   SONAR
*****************************************************/
Sonar::Sonar():
    period_sonar(SONAR_PING_INTERVAL),
    sonar_gauche(PIN_PWM_SONAR_G_TRIGGER,PIN_PWM_SONAR_G_Echo,SONAR_DISTANCE_MAX),
    sonar_droite(PIN_PWM_SONAR_D_TRIGGER,PIN_PWM_SONAR_D_Echo,SONAR_DISTANCE_MAX),
    sonar_face(PIN_PWM_SONAR_C_TRIGGER,PIN_PWM_SONAR_C_Echo,SONAR_DISTANCE_MAX),
    sonar_distance_droite(SONAR_DISTANCE_MAX),
    sonar_distance_gauche(SONAR_DISTANCE_MAX),
    sonar_distance_face(SONAR_DISTANCE_MAX),
    bavardeur(false)
    {

    }

void Sonar::bavard()
{
    bavardeur = true;
}

void Sonar::muet()
{
    bavardeur = false;
}

void Sonar::run()
{
     if (period_sonar.is_over())
    {
        period_sonar.reset();
        // to do telemesure
        sonar_distance_droite = sonar_droite.ping_cm();
        sonar_distance_gauche = sonar_gauche.ping_cm();
        sonar_distance_face = sonar_face.ping_cm();
        if(bavardeur)
        {
            afficheADV();
        }

    }
}
void Sonar::affiche()
{
    Serial.print("Sonar gauche : ");
    Serial.print(sonar_distance_gauche);
    Serial.println(" cm");
    Serial.print("Sonar droite : ");
    Serial.print(sonar_distance_droite);
    Serial.println(" cm");
    Serial.print("Sonar face   : ");
    Serial.print(sonar_distance_face);
    Serial.println(" cm");
}

void Sonar::afficheADV()
{
    adv_droite();
    adv_gauche();
    adv_face();
}

bool Sonar::adv_gauche()
{
    if(sonar_distance_gauche>SONAR_SEUIL_DETECTION_ADV_LAT || sonar_distance_gauche==0)
    {
        return false;
    }
    else
    {
        Serial.println("# ADV GAUCHE");  // a mettre plutot dans la sorte de slave roue
        return true;
    }
}

bool Sonar::adv_droite()
{
    if(sonar_distance_droite>SONAR_SEUIL_DETECTION_ADV_LAT || sonar_distance_droite==0)
    {
        return false;
    }
    else
    {
        Serial.println("# ADV DROITE");
        return true;
    }
}
bool Sonar::adv_face()
{
    if(sonar_distance_face>SONAR_SEUIL_DETECTION_ADV_FACE || sonar_distance_face==0)
    {
        return false;
    }
    else
    {
        Serial.println("# ADV FACE");
        return true;
    }
}

/****************************************************
   Centrale inertielle
*****************************************************/
Centrale_Inertielle::Centrale_Inertielle():
    period_centrale(PERIODE_CENTRALE),
    angle_x_gyro(0), angle_y_gyro(0), angle_z_gyro(0),
    angle_x_accel(0), angle_y_accel(0), angle_z_accel(0),
    angle_x(0), angle_y(0), angle_z(0),
    ax(0), ay(0), az(0),
    gx(0), gy(0), gz(0),
    dt(PERIODE_CENTRALE)
{

    // initialisation gyro
    accelgyro.initialize();
    // verify connection
    Serial.println("Testing connection gyro...");
    Serial.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");

        accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
        Serial.print("g:\t");
        Serial.print(gx); Serial.print("\t");
        Serial.print(gy); Serial.print("\t");
        Serial.print(gz); Serial.print("\t");
        Serial.println();
        Serial.print("a:\t");
        Serial.print(ax); Serial.print("\t");
        Serial.print(ay); Serial.print("\t");
        Serial.print(az); Serial.print("\t");
        Serial.println();



        //Serial.println("Updating internal sensor offsets...");
    // -76	-2359	1688	0	0	0
    Serial.print(accelgyro.getXAccelOffset()); Serial.print("\t"); // -76
    Serial.print(accelgyro.getYAccelOffset()); Serial.print("\t"); // -2359
    Serial.print(accelgyro.getZAccelOffset()); Serial.print("\t"); // 1688
    Serial.print(accelgyro.getXGyroOffset()); Serial.print("\t"); // 0
    Serial.print(accelgyro.getYGyroOffset()); Serial.print("\t"); // 0
    Serial.print(accelgyro.getZGyroOffset()); Serial.print("\t"); // 0
    Serial.print("\n");
    // premiere mesure
    //accelgyro.reset();
    //accelgyro.setDLPFMode(0);
    //accelgyro.setFullScaleAccelRange(0);
    delay(100);

    // offset, et calibration
    accelgyro.getMotion6(&ax_OC, &ay_OC, &az_OC, &gx_OC, &gy_OC, &gz_OC);
   // accelgyro.setXGyroOffset(gx_OC);
    //accelgyro.setYGyroOffset(gy_OC);
    //accelgyro.setZGyroOffset(gz_OC);
    //accelgyro.setXAccelOffset(ax_OC);
    //accelgyro.setYAccelOffset(ay_OC);
    //accelgyro.setZAccelOffset(az_OC);
    delay(100);
    // mettre un 1g qq part

    accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
        Serial.print("g:\t");
        Serial.print(gx); Serial.print("\t");
        Serial.print(gy); Serial.print("\t");
        Serial.print(gz); Serial.print("\t");
        Serial.println();
        Serial.print("a:\t");
        Serial.print(ax); Serial.print("\t");
        Serial.print(ay); Serial.print("\t");
        Serial.print(az); Serial.print("\t");
        Serial.println();

        muet();
}


void Centrale_Inertielle::run()
{
     if (period_centrale.is_over())
    {
        period_centrale.reset();

        /** Lecture des mesures */
        accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

        /** Calcul des angles */
        // derive du gyro
        /*
        angle_x_gyro = gx*dt/1000 + angle_x_gyro;
        angle_y_gyro = gy*dt/1000 + angle_y_gyro;
        angle_z_gyro = gz*dt/1000 + angle_z_gyro;

        angle_z_accel = atan(az/sqrt(ay*ay + ax*ax))*(float)RAD_TO_DEG_CONV;
        angle_y_accel = -atan(ax/sqrt(ay*ay + az*az))*(float)RAD_TO_DEG_CONV;
        angle_x_accel = atan(ay/sqrt(ax*ax + az*az))*(float)RAD_TO_DEG_CONV;

        angle_x = FILTER_GAIN*angle_x_gyro + (1-FILTER_GAIN)*angle_x_accel;
        angle_y = FILTER_GAIN*angle_y_gyro + (1-FILTER_GAIN)*angle_y_accel;
        angle_z = FILTER_GAIN*angle_z_gyro + (1-FILTER_GAIN)*angle_z_accel;
        */
        // affiche
        if(bavardeur)
        {
            gx_OC = -250;
            gy_OC = 195;
            gz_OC = 170;
            float vx, vy,vz;
            vx = gx-gx_OC;
            vy = gy-gy_OC;
            vz = gz-gz_OC;

            if(abs(vx)<40){vx = 0;}
            if(abs(vy)<40){vy = 0;}
            if(abs(vz)<40){vz = 0;}

            angle_x_gyro = vx*dt/1000 + angle_x_gyro;
            angle_y_gyro = vy*dt/1000 + angle_y_gyro;
            angle_z_gyro = vz*dt/1000 + angle_z_gyro;


            Serial.print("g:\t");
            Serial.print(vx); Serial.print("\t");
            Serial.print(vy); Serial.print("\t");
            Serial.print(vz); Serial.print("\t");


            Serial.print("a:\t");
            Serial.print(angle_x_gyro/100); Serial.print("\t");
            Serial.print(angle_y_gyro/100); Serial.print("\t");
            Serial.print(angle_z_gyro/100); Serial.print("\t");
            Serial.println();
            Serial.println();
        }
        //affiche();
    }
}

float Centrale_Inertielle::angle_x_out()
{
    return angle_x;
}

float Centrale_Inertielle::angle_y_out()
{
    return angle_y;
}

float Centrale_Inertielle::angle_z_out()
{
    return angle_z;
}

void Centrale_Inertielle::affiche()
{
    Serial.print("angle X : ");
    Serial.print(angle_x);
    Serial.println(" deg");
    Serial.print("angle Y : ");
    Serial.print(angle_y);
    Serial.println(" deg");
    Serial.print("angle Z : ");
    Serial.print(angle_z);
    Serial.println(" deg");
    Serial.println("");

}

void Centrale_Inertielle::bavard()
{
    bavardeur = true;
}
void Centrale_Inertielle::muet()
{
    bavardeur = false;
}



/*********************************************************************
    IO
*********************************************************************/

/** CONSTRUCTEUR IO **/
IO::IO():
    deposeurTapis(),
    chenilleSecondaire(),
    chenillePrincipale(),
    centrale()
     // a mettre dans chenille pricipale car uniquement pour elle
{


}


void IO::run()
{
    //Serial.println("IO run");
    deposeurTapis.run();
    chenillePrincipale.run();
    centrale.run();
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

Centrale_Inertielle* IO::get_Centrale_Inertielle()
{
    return &centrale;
}
