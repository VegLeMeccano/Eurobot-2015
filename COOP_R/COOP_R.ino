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
#include "./Utils/SwitchAnalog.h"
//#include "./Utils/Switch.h"
#include <Utils/Period.h>

#include "I2Cdev.h"
#include "MPU6050.h"


#if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
    #include "Wire.h"
#endif



/** DECLARATIONS **/
#define ALLUMAGE 0
#define STARTMIS 1
#define GAME 2
#define END 3


// IN/OUT et COM
IO* io;
OrdersRaspberry* com;

// pour test uniquement
//MPU6050 accelgyro;




// bumper de strat
SwitchAnalog bumper_start(PIN_BUMPER_STRAT_START,SEUIL_BUMPER);
SwitchAnalog bumper_couleur(PIN_BUMPER_STRAT_COULEUR,SEUIL_BUMPER);
SwitchAnalog bumper_strategie(PIN_BUMPER_STRAT_STRAT,SEUIL_BUMPER);


int state;
int led_on;
long timer;
long TEMPS_PARTIE = 10000; //en ms mettre 90





/** INITIALISATION **/
void setup()
{
    bumper_couleur.reverse(); //bumper du haut
    bumper_strategie.reverse(); // bumper du bas

	// initialisation port I2C (wire)
	// join I2C bus (I2Cdev library doesn't do this automatically)
    #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
        Wire.begin();
    #elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
        Fastwire::setup(400, true);
    #endif


    // initialisation du port serie
    Serial.begin(9600) ;
    Serial.println("#SERIAL READY");
    Serial.println("#BAS NIVEAU COOP'R");



    state = ALLUMAGE;
    //state = GAME;
    timer = 0;

    Serial.println("");
    Serial.println("________________________");


    // initialisation du timer et de l'etat de depart
    timer = 0;
    Serial.println("etat init");

    Serial.print("* START : ");
    Serial.println((int)bumper_start.is_on());

    Serial.print("* COULEUR : ");
    extern int couleur;
    couleur = (int)bumper_couleur.is_on();
    Serial.println(couleur);

    Serial.print("* STRAT 1 : ");
    Serial.println((int)bumper_strategie.is_on());

    Serial.println("");
    Serial.println("________________________");

    // initialisation des PINS IN et OUT
    io = new IO();
    Serial.println("INIT IO");

    // initialisation du protocol de communication via le port serie
    com = new OrdersRaspberry(io);
    Serial.println("INIT OrdersRaspberry");

    Serial.println("");
    Serial.println("________________________");
}


/**
BOUCLE DE CONTROL
*/
void loop(){

/******** BOUCLE de jeux
    // enclenchement du start
   if (state == ALLUMAGE && bumper_start.is_on())
    {
        state = STARTMIS;
        Serial.println("# STARTIN");
    }

    // debut de jeu quand le start est releve
    if (state == STARTMIS && bumper_start.is_off())
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
*/

/**
    // telemesure gyrometre/accelero
    // read raw accel/gyro measurements from device
    //accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
    accelgyro.getRotation(&Rx, &Ry, &Rz);
    // display tab-separated accel/gyro x/y/z values
        Serial.print("g:\t");
        //Serial.print(ax); Serial.print("\t");
        //Serial.print(ay); Serial.print("\t");
        //Serial.print(az); Serial.print("\t");
        Serial.print(Rx); Serial.print("\t");
        Serial.print(Ry); Serial.print("\t");
        Serial.println(Rz);
        delay(50);
*/

/**
    //test des bumpers
        // test US
    Serial.print("IR BAS : ");
    Serial.println(analogRead(PIN_IR_BAS));

    Serial.print("IR HAUT : ");
    Serial.println(analogRead(PIN_IR_HAUT));

   // test des IR des ASCENSEUR
    Serial.print("BUMPER AVANT GAUCHE : ");
    Serial.println(analogRead(PIN_BUMPER_RECALAGE_AV_G));

    Serial.print("BUMPER AVANT DROIT : ");
    Serial.println(analogRead(PIN_BUMPER_RECALAGE_AV_D));

    Serial.print("BUMPER RAMPE GAUCHE AR: ");
    Serial.println(analogRead(PIN_BUMPER_RECALAGE_G_AR));

    Serial.print("BUMPER RAMPE GAUCHE AV : ");
    Serial.println(analogRead(PIN_BUMPER_RECALAGE_G_AV));

    Serial.print("BUMPER RAMPE DROITE AR : ");
    Serial.println(analogRead(PIN_BUMPER_RECALAGE_D_AR));

    Serial.print("BUMPER RAMPE DROITE AV : ");
    Serial.println(analogRead(PIN_BUMPER_RECALAGE_D_AV));

    Serial.println();

    delay(500);
*/

    com->run();
    io->run();
    delay(1);
}

