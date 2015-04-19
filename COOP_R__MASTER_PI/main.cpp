#include <iostream>
//wiring PI ???   -> pour la comm
#include <wiringPi.h>
#include <wiringSerial.h>


#include <unistd.h>

#include "extern_declaration.h"
#include "Master.h"
#include "Protocole_COM.h"

#define SERIAL_DEV "/dev/ttyACM0"
#define SPEED 9600

//extern Master * master;

#include "Period.h"
#include "util.h"

using namespace std;

Master* master;
Protocole_COM* protocole_com;



/** EXECUTION DU PROGRAMME PRINCIPALE (IA)
*/
int main()
{
    cout << "[MASTER_COOP'R] lancement du programme" << endl;

    extern int portSerie;
    portSerie = serialOpen(SERIAL_DEV, SPEED) ;
    cout << "portSerie -> "<<portSerie << endl;
    cout << "carac dispo :"<<serialDataAvail(portSerie) << endl;
    //serialPrintf (portSerie, "D0 ") ;
    serialPutchar(portSerie,'t');

    delay(1000);
    //cout << "carac dispo :"<<serialDataAvail(portSerie) << endl;
    int cpt(0);
    /*
    while(serialDataAvail(portSerie)>0)
    {
        cpt++;
            cout << "dispo  "<< cpt<< "  "<<serialGetchar(portSerie) << endl;

    }
    // int serialDataAvail (int fd) ; //-> serial available
    // int serialGetchar (int fd) ;

*/


    //master->set_couleur(1);
    //master->set_time_out(100);
    char c;
    //serialPutchar(portSerie,'t');
    //serialPutchar(portSerie,'t');
    // boucle de jeu
    cout << "[MASTER_COOP'R] boucle de jeu" << endl;
    //serialPrintf (portSerie, "D0 \n") ;


    // initialisation du Master
    master = new Master();

    // initialisation du protocole de COM
    protocole_com = new Protocole_COM(master);

    while(1)
    {
        //serialPutchar(portSerie,'t');
        //master->run();
        //protocole_com->run();
        delay(1);
        //if(serialDataAvail(portSerie)>0)
        //{
            cpt++;
            //cout << "dispo  "<< serialDataAvail(portSerie)<< endl; // "  "<<serialGetchar(portSerie) << endl;
            //serialPutchar(portSerie,'t');
        if(serialDataAvail(portSerie)>0)
        {
            c = serialGetchar(portSerie);
            if(c == '\n')
            {
                cout << endl;
            }
            else{
                cout << ""<< c ;//<< endl;
            }

        }

    }



    //master.stratEnleve();
    //Master * master ;



/*
    Period periode_run(1000);
    periode_run.reset();
    while(1)
    {
        // mettre les fonctions de run
        if(periode_run.is_over())
        {
            cout << "[MASTER_COOP'R] fin boucle" << endl;
            return 0;
        }
        delay(1);
    }

*/
    return 0;
}


/*
    clock_t start = clock();
    delay(152);
    clock_t stop = clock();
    double elapsed = double(stop-start);        // deja en millis

    cout << "time : " << elapsed<< endl;
*/

