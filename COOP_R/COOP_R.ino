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

IO* io;
OrdersRaspberry* com;
MPU6050 accelgyro;


int state;
int led_on;
long timer;
long TEMPS_PARTIE = 10000; //en ms mettre 90

int16_t ax, ay, az;
int16_t gx, gy, gz;


/** INITIALISATION **/
void setup()
{
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

    // initialisation des PINS IN et OUT
    io = new IO();
    Serial.println("INIT IO");
	
	// initialisation gyro
	accelgyro.initialize();
	s// verify connection
    Serial.println("Testing device connections...");
    Serial.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");
	    Serial.println("Updating internal sensor offsets...");
    // -76	-2359	1688	0	0	0
    Serial.print(accelgyro.getXAccelOffset()); Serial.print("\t"); // -76
    Serial.print(accelgyro.getYAccelOffset()); Serial.print("\t"); // -2359
    Serial.print(accelgyro.getZAccelOffset()); Serial.print("\t"); // 1688
    Serial.print(accelgyro.getXGyroOffset()); Serial.print("\t"); // 0
    Serial.print(accelgyro.getYGyroOffset()); Serial.print("\t"); // 0
    Serial.print(accelgyro.getZGyroOffset()); Serial.print("\t"); // 0
    Serial.print("\n");
    accelgyro.setXGyroOffset(220);
    accelgyro.setYGyroOffset(76);
    accelgyro.setZGyroOffset(-85);
    Serial.print(accelgyro.getXAccelOffset()); Serial.print("\t"); // -76
    Serial.print(accelgyro.getYAccelOffset()); Serial.print("\t"); // -2359
    Serial.print(accelgyro.getZAccelOffset()); Serial.print("\t"); // 1688
    Serial.print(accelgyro.getXGyroOffset()); Serial.print("\t"); // 0
    Serial.print(accelgyro.getYGyroOffset()); Serial.print("\t"); // 0
    Serial.print(accelgyro.getZGyroOffset()); Serial.print("\t"); // 0
    Serial.print("\n");
	

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
   
   /* telemesure
       // read raw accel/gyro measurements from device
    accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

    // these methods (and a few others) are also available
    //accelgyro.getAcceleration(&ax, &ay, &az);
    //accelgyro.getRotation(&gx, &gy, &gz);
	
	        // display tab-separated accel/gyro x/y/z values
        Serial.print("a/g:\t");
        Serial.print(ax); Serial.print("\t");
        Serial.print(ay); Serial.print("\t");
        Serial.print(az); Serial.print("\t");
        Serial.print(gx); Serial.print("\t");
        Serial.print(gy); Serial.print("\t");
        Serial.println(gz);
	

*/
}

