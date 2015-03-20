/*
 PROGRAMME PRINCIPAL BAS NIVEAU
 Carte : Arduino Mega 2560
 Robot : PMI
 Nom   : COOP'R
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



int state;
int led_on;
long timer;
long TEMPS_PARTIE = 10000; //en ms mettre 90


/** INITIALISATION **/
void setup()
{
    // initialisation du port serie
    Serial.begin(9600) ;
    Serial.println("#SERIAL READY");
    Serial.println("#BAS NIVEAU COOP'R");

    // initialisation des PINS IN et OUT
    io = new IO();
    Serial.println("INIT IO");

    // initialisation du protocol de communication via le port serie
    com = new OrdersRaspberry(io);
    Serial.println("INIT OrdersRaspberry");

    //write_serial_strat();
    state = ALLUMAGE;
    //state = GAME;
    timer = 0;
}


/**
BOUCLE DE CONTROL
*/
void loop(){

    // enclenchement du start
   if (state == ALLUMAGE && analogRead(PIN_BUMPER_STRAT_START) > SEUIL_BUMPER)
    {
        state = STARTMIS;
        Serial.println("# STARTIN");
    }

    // debut de jeu quand le start est releve
    if (state == STARTMIS && analogRead(PIN_BUMPER_STRAT_START) < SEUIL_BUMPER)
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
        //slave->stop();
        //io->stop();

        }
    else
        {
        //Serial.println(millis()-timer);
        com->run();
        //slave->run();
        io->run();
        }



   delay(1);


}

