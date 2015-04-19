#include <iostream>
//wiring PI ???   -> pour la comm

#include <unistd.h>

//#include "extern_declaration.h"
#include "Master.h"
extern Master * master;

#include "Period.h"
#include "util.h"

using namespace std;

//    extern Master *master;


/** EXECUTION DU PROGRAMME PRINCIPALE (IA)
*/
int main()
{
    cout << "[MASTER_COOP'R] lancement du programme" << endl;

    Period periode_run(1000);
    periode_run.reset();

    //master.stratEnleve();
    //Master * master ;

    master->set_couleur(1);
    master->set_time_out(100);


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

    return 0;
}


/*
    clock_t start = clock();
    delay(152);
    clock_t stop = clock();
    double elapsed = double(stop-start);        // deja en millis

    cout << "time : " << elapsed<< endl;
*/

