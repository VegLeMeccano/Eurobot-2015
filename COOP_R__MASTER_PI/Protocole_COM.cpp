#include "Protocole_COM.h"

int portSerie;

/** Constructeur COM
*/
Protocole_COM::Protocole_COM(Master* master_ ):
    period(PERIODE_COM),
    master(master_),
    serial_count(0)
{
    treated = true;
    cout << "[COM] initialisation" << endl;
    master->set_couleur(COULEUR_VERT);

}


/**
 RUN COM
*/
void Protocole_COM::run()
{
    if(period.is_over())
    {
        period.reset();
        treatSerial();

        if ( !treated)
        {
            //Serial.println("message traite");
            cout << "[COM] message traitée" << endl;
            executeinstr();
            treated = true;
            stream.str("");
            serial_count = 0;
            s="";
        }
    }

}


/**
 Traitement du signal COM
*/
void Protocole_COM::treatSerial()
{
    char serial_char;

    // Ici on traite les différents messages reçus.
    while(serialDataAvail(portSerie)>0 && serial_count < 28)
    {
        serial_char= serialGetchar(portSerie);

        if (serial_char =='\n')
        {
            cout<<"Fin de ligne"<<endl;
            //on ne traite que les instructions de minimum 2 char
            if (serial_count<1)
            {
                treated = true;
            }
            else
            {
                treated = false;
            }
             cout<<"Enregistre : "<<s.c_str()<<endl;
             cout<<"serial_count :"<<serial_count<<endl;
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
void Protocole_COM::executeinstr()
{
    //char ordre = cmdBuffer[bufindr][strchr_pointer];
    stream.str(s);
    std::string temp;
    stream>>temp;
    char ordre = temp[0];


    //Serial.print("ordre ind = ");
    cout << "[COM] ordre ind = " << endl;
    int ind = ((int)temp[1]) - 48;
    cout <<ordre<< "@" <<ind<< endl;

    std::string temp2;
    std::string cap;
    std::string x;
    std::string y;
    std::string z;
    std::string temps;

    bool precis;
    switch (ordre)
    {


    /** ordre d'asservissement
    */
	case '#' :
        switch (ind)
        {
        case 0:
            cout << "[COM] ASSFINI" << endl;
            master->get_MAE_COOP_R()->ass_fini();
            break;

        case 1:
             break;
       }
        break;


    /** ordre de strat
    */
	case '*' :
        switch (ind)
        {
        case COULEUR_JAUNE:
            cout << "[COM] couleur jaune" << endl;
            master->set_couleur(COULEUR_JAUNE);
            break;

        case COULEUR_VERT:
            cout << "[COM] couleur vert" << endl;
            master->set_couleur(COULEUR_VERT);
            break;
       }
        break;


    }

}




