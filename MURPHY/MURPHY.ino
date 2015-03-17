/*
 PROGRAMME PRINCIPAL BAS NIVEAU
 Carte : Arduino Mega 2560
 Robot : PRINCIPAL
 Nom   : MURPHY
 Annee : 2015
 Auteur: Veg (Loic MAXEL)
*/


/** INCLUDES **/
#include <Arduino.h>
#include <Servo.h>
#include "IO.h"
#include "Const.h"
#include "OrdersRaspberry.h"
#include <pnew.cpp>



/** DECLARATIONS **/
#define ALLUMAGE 0
#define STARTMIS 1
#define GAME 2
#define END 3

IO* io;
OrdersRaspberry* com;
Autom* slave;

int state;
int led_on;
long timer;
long TEMPS_PARTIE = 100000; //en ms mettre 90


/** INITIALISATION **/
void setup()
{

    // attachement des odos de propu
    attachInterrupt(PIN_ODO_PROPU_GAUCHE_A_INC, inc_ticG, RISING);
    attachInterrupt(PIN_ODO_PROPU_DROITE_A_INC, inc_ticD, RISING);

    // attachement des odos Ascenseur
    attachInterrupt(PIN_ODO_ASC_GAUCHE_A_INC, inc_ticG_ASC, RISING);
    attachInterrupt(PIN_ODO_ASC_DROITE_A_INC, inc_ticD_ASC, RISING);

    // attachement des capteurs couleur
    attachInterrupt(PIN_COULEUR_DROITE, inc_pulse_color_D, RISING);
    attachInterrupt(PIN_COULEUR_GAUCHE, inc_pulse_color_G, RISING);

    // initialisation du port serie
    Serial.begin(9600) ;
    Serial.println("#SERIAL READY");
    Serial.println("#BAS NIVEAU COOP'R");

    // initialisation des PINS IN et OUT
    io = new IO();
    Serial.println("INIT IO");

    // initialisation du slave
    slave = new Autom();
    Serial.println("INIT SLAVE");

    // initialisation du protocol de communication via le port serie
    com = new OrdersRaspberry(slave,io);
    Serial.println("INIT OrdersRaspberry");

    write_serial_strat();
    Serial.println("");
    Serial.println("________________________");

    // initialisation du timer et de l'etat de depart
    state = ALLUMAGE;
    state = GAME;
    timer = 0;
    Serial.println("etat init");
    //int vv = ETAT_BALLE_DROITE_RANGE_DEPART;
    //Serial.println(vv);
}


/**
BOUCLE DE CONTROL
*/
void loop(){


/*
    // enclenchement du start
   if (state == ALLUMAGE && digitalRead(PIN_BUMPER_STRAT_START) == 0)
    {
        state = STARTMIS;
        Serial.println("# STARTIN");
    }

    // debut de jeu quand le start est releve
    if (state == STARTMIS && digitalRead(PIN_BUMPER_STRAT_START) == 1)
    {
        state = GAME ;
        Serial.println("# START");
        //slave->turn_on_evit();
        timer = millis();
        //Serial.println(timer);

    }

    // fin de partie si t>90s
    if ( (state == END) || (state == GAME && ((millis()-timer) > TEMPS_PARTIE ) ) )
    {

        Serial.println("# ENDG");
        state = END;
        slave->stop();
        //io->stop();

        }
    else
        {
            //Serial.println(millis()-timer);
            com->run();
            //slave->run();
            io->run();
        }
*/
            com->run();
            //slave->run();
            io->run();



   delay(1);


}

