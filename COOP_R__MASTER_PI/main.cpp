#include <iostream>
//wiring PI ???   -> pour la comm
#include "./wiringPi/wiringSerial.h"
#include "./wiringPi/wiringPi.h"


#include <unistd.h>

//#include "extern_declaration.h"
#include "Master.h"
#include "Protocole_COM.h"

#define SERIAL_DEV "/dev/ttyATA0"
#define SPEED 9600

//extern Master * master;

#include "Period.h"
#include "util.h"

using namespace std;

Master* master;
Protocole_COM* protocole_com;
int portSerie;





/** EXECUTION DU PROGRAMME PRINCIPALE (IA)
*/
int main()
{
    cout << "[MASTER_COOP'R] lancement du programme" << endl;
    int fd;
    //fd = serialOpen(SERIAL_DEV, SPEED) ;
    // serialPrintf (portSerie, char *message, …) ;
    // int   serialDataAvail (int fd) ; //-> serial available
    // int serialGetchar (int fd) ;


    // initialisation du Master
    master = new Master();

    // initialisation du protocole de COM
    protocole_com = new Protocole_COM(master);

    //master->set_couleur(1);
    //master->set_time_out(100);

    // boucle de jeu
    cout << "[MASTER_COOP'R] boucle de jeu" << endl;
    while(1)
    {
        master->run();
        protocole_com->run();
        delay(1);
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

