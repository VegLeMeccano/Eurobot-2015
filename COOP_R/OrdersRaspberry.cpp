#include "OrdersRaspberry.h"

//Fichier de définition des fonction pour les ordre reçu depuis la Gumstix
//Order for the big robot


/*
 CONSTRUCTEUR OrdersRaspberry
*/
OrdersRaspberry::OrdersRaspberry(IO* io_) : period(100), io(io_), serial_count(0)
{
    treated=true;
    //s.resize(28);
}


/*
 RUN OrdersRaspberry
*/
void OrdersRaspberry::run()
{
    if(period.is_over())
    {
        period.reset();
        treatSerial();

        if ( !treated)
        {
            Serial.println("message traite");
            executeinstr();
            treated = true;
            stream.str("");
            serial_count = 0;
            s="";
            //s.resize(28);
        }
    }

}


/*
 Traitement du signal OrdersRaspberry
*/
void OrdersRaspberry::treatSerial()
{
    char serial_char;

    // Ici on traite les différents messages reçus.
    while(Serial.available()>0 && serial_count < 28)
    {
        serial_char= Serial.read();

        if (serial_char =='\n')
        {
            Serial.println("Fin de ligne");
            //on ne traite que les instructions de minimum 2 char
            if (serial_count<1)
            {
                treated = true;
            }
            else
            {
                treated = false;
            }
            Serial.print("Enregistre : ");
            Serial.print(s.c_str());
            Serial.print("  serial_count  ");
            Serial.println(serial_count);
            return;
        }
        //Serial.println(serial_count);
        s = s + serial_char;
        serial_count = serial_count + 1;
    }
}




/*
 Execution des instructions OrdersRaspberry
*/
void OrdersRaspberry::executeinstr()
{
    //char ordre = cmdBuffer[bufindr][strchr_pointer];
    stream.str(s);
    std::string temp;
    stream>>temp;
    char ordre = temp[0];
    Serial.print("ordre ind = ");
    int ind = ((int)temp[1]) - 48;
    Serial.print(ordre);
    Serial.print("@");
    Serial.println(ind);

    std::string temp2;

    std::string cap;
    std::string x;
    std::string y;
    std::string z;
    std::string temps;

    bool precis;
    switch (ordre)
    {


    // chenille secondaire
	case 'S' :
        // ordre de type Tacle Laterale
        switch (ind)
        {
        case 0:
            Serial.print("chenille secondaire : OFF");
            io->get_ChenilleSecondaire()->OFF();
            break;
        case 1:
            Serial.print("chenille secondaire : ON");
            io->get_ChenilleSecondaire()->ON();
            break;
        case 2:
            Serial.print("chenille secondaire : rangee");
            io->get_ChenilleSecondaire()->position_rangee();
            break;
        case 3:
            Serial.print("chenille secondaire : mi hauteur");
            io->get_ChenilleSecondaire()->position_miHauteur();
            break;
        case 4:
            Serial.print("chenille secondaire : sol");
            io->get_ChenilleSecondaire()->position_auSol();
            break;
       }
break;


    // Depose tapis
	case 'T' :
        // ordre de type depose tapis
        switch (ind)
        {
        case 0:
            Serial.print("depose le premier tapis");
            io->get_DeposeurTapis()->depose_first();
            break;
        case 1:
            Serial.print("replis le premier tapis");
            io->get_DeposeurTapis()->replis_first();
            break;
        case 2:
            Serial.print("depose le second tapis");
            io->get_DeposeurTapis()->depose_second();
            break;
        case 3:
            Serial.print("replis le second tapis");
            io->get_DeposeurTapis()->replis_second();
            break;
       }
       break;


    // Base roulante (chenille)

    // recalage
	case 'R' :
        // ordre de type recalage
        switch (ind)
        {
        case 0:
            Serial.print("recalage face");
            io->get_ChenillePrincipale()->recalage_face();
            break;
        case 1:
            Serial.print("recalage gauche");
            // renvoyer (# AssFINI) par le port serie
            io->get_ChenillePrincipale()->recalage_gauche();
            break;
        case 2:
            Serial.print("recalage droite");
            // renvoyer (# AssFINI) par le port serie
            io->get_ChenillePrincipale()->recalage_droite();
            break;
       }
       break;



    // avance
	case 'A' :
        // ordre de type Tacle Laterale
        switch (ind)
        {
        case 0:
            Serial.print("SET temps :");
            // faire en sorte que l'on s'arrrete en rotation lateral sur des demi tour de roue
            stream >> temps;
            Serial.println(atoi(temps.c_str()));
            io->get_ChenillePrincipale()->decalage_avant(atoi(temps.c_str()));
            // renvoye ennemi detectee
            break;
        case 1:
            Serial.print("SET temps :");
            stream >> temps;
            Serial.println(atoi(temps.c_str()));
            io->get_ChenillePrincipale()->decalage_avant(atoi(temps.c_str()));
            break;
        case 2:
            Serial.print("SET temps :");
            stream >> temps;
            Serial.println(atoi(temps.c_str()));
            io->get_ChenillePrincipale()->decalage_avant(atoi(temps.c_str()));
            break;
       }
       break;



    // DEBUG
	case 'D' :
        // ordre de type Tacle Laterale
        switch (ind)
        {
        case 0:
            Serial.print("Debug IMU");
            // renvoye les angles
            // + accelerations?
            break;
        case 1:
            Serial.print("Debug Bumper");
           break;
        case 2:
            Serial.print("Debug IR");
            break;
       }
    break;


        // EVITEMENT
	case 'E' :
        switch (ind)
        {
        case 0:
            Serial.print("Desactivation de l'evitement");
            break;
        case 1:
            Serial.print("Activation de l'evitement");

           break;
        case 2:

            break;
       }
    break;
return;
    }

}

