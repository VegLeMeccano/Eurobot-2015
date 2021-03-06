#ifndef PINS_H
#define PINS_H

/*
DEFINITION DES PINS SUR ARDUINO  (IO MURPHY)
MURPHY
*/

// bumpers strat
#define PIN_BUMPER_STRAT_START 10
#define PIN_BUMPER_STRAT_COULEUR 14
#define PIN_BUMPER_STRAT_STRAT_1 11
#define PIN_BUMPER_STRAT_STRAT_2 12


// Slave
#define PIN_PWM_MOTEUR_PROPU_GAUCHE 7
#define PIN_PWM_MOTEUR_PROPU_DROITE 6



#define PIN_SONAR_GAUCHE A6
#define PIN_SONAR_DROITE A7

#define PIN_BUMPER_RECALAGE_GAUCHE 8
#define PIN_BUMPER_RECALAGE_DROITE 9


// ODOS

/*
#define PIN_ODO_PROPU_GAUCHE_A_INC 0 // == pin 3 (interrupt 0)
#define PIN_ODO_PROPU_GAUCHE_B_DIR 4
#define PIN_ODO_PROPU_DROITE_A_INC 1 // == pin 2 (interrupt 1)
#define PIN_ODO_PROPU_DROITE_B_DIR 5

#define PIN_ODO_ASC_GAUCHE_A_INC 5 // == pin 18 (interrupt 5)
#define PIN_ODO_ASC_GAUCHE_B_DIR 22
#define PIN_ODO_ASC_DROITE_A_INC 4 // == pin 19 (interrupt 4)
#define PIN_ODO_ASC_DROITE_B_DIR 23

#define PIN_COULEUR_GAUCHE 3 // == pin 20 (interrupt 3)
#define PIN_COULEUR_DROITE 2 // == pin 21 (interrupt 2)
*/

//*
#define PIN_ODO_PROPU_GAUCHE_A_INC 5//0//5 // == pin 3 (interrupt 0)
#define PIN_ODO_PROPU_GAUCHE_B_DIR 22//4//22

#define PIN_ODO_PROPU_DROITE_A_INC 4 // == pin 2 (interrupt 1)
#define PIN_ODO_PROPU_DROITE_B_DIR 23

#define PIN_ODO_ASC_GAUCHE_A_INC 0//5//0 // == pin 18 (interrupt 5)
#define PIN_ODO_ASC_GAUCHE_B_DIR 4//22//4

#define PIN_ODO_ASC_DROITE_A_INC 1 // == pin 19 (interrupt 4)
#define PIN_ODO_ASC_DROITE_B_DIR 5
//*/



// DETECTION


#define PIN_IR_HAUT_GAUCHE A0
#define PIN_IR_HAUT_DROITE A1

#define PIN_IR_MID_GAUCHE A2
#define PIN_IR_MID_DROITE A3

#define PIN_IR_BAS_GAUCHE A4
#define PIN_IR_BAS_DROITE A5

#define PIN_IR_CENTRAL A8



//ASCENSEUR
#define PIN_PWM_SERVO_PINCE_GAUCHE 41
#define PIN_PWM_SERVO_PINCE_DROITE 42


#define PIN_PWM_MOTEUR_ASC_GAUCHE 24
#define PIN_PWM_MOTEUR_ASC_DROITE 25


#define PIN_BUMPER_ASC_HAUT_GAUCHE 26
#define PIN_BUMPER_ASC_BAS_GAUCHE 27

#define PIN_BUMPER_ASC_HAUT_DROITE 28
#define PIN_BUMPER_ASC_BAS_DROITE 29


//camera
#define PIN_PWM_SERVO_CAMERA 15

//CLAPS
#define PIN_PWM_SERVO_CLAPS_GAUCHE 16
#define PIN_PWM_SERVO_CLAPS_DROITE 17

//CENTREUR
#define PIN_PWM_SERVO_TACLETTE_INT_GAUCHE 30
#define PIN_PWM_SERVO_TACLETTE_INT_DROITE 31
#define PIN_PWM_SERVO_TACLETTE_EXT_GAUCHE 32
#define PIN_PWM_SERVO_TACLETTE_EXT_DROITE 33

// POP CORN
#define PIN_PWM_SERVO_TURBINE_GAUCHE 34
#define PIN_PWM_SERVO_TURBINE_DROITE 35
#define PIN_PWM_SERVO_CACHE 36

// BALLE GAUCHE
#define PIN_PWM_SERVO_DECLENCHEUR_BALLE_GAUCHE 37

#define PIN_PWM_SERVO_DECLENCHEUR_BALLE_DROITE 38
#define PIN_PWM_SERVO_BRAS_HORIZONTAL 39
#define PIN_PWM_SERVO_BRAS_VERTICAL 40

// ELEVATOR GOBELET
#define PIN_PWM_SERVOS_ELEVATOR_GAUCHE 50
#define PIN_PWM_SERVOS_ELEVATOR_DROITE 52


#endif
