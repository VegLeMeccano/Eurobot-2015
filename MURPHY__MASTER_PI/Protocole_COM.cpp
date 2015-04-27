#include "Protocole_COM.h"

//int portSerie;

/** Constructeur COM
*/
Protocole_COM::Protocole_COM(Master* master_ ):
    period(PERIODE_COM),
    master(master_),
    serial_count(0)
{
    treated = true;
    cout << "[COM] initialisation" << endl;
    //master->set_couleur(COULEUR_VERT);

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
            //cout << "[COM] message traitée" << endl;
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
    while(serialDataAvail(master->getPortSerie())>0 && serial_count < 228)
    {
        serial_char= serialGetchar(master->getPortSerie());

        if (serial_char =='\n')
        {
            //cout<<"Fin de ligne"<<endl;
            //on ne traite que les instructions de minimum 2 char
            if (serial_count<1)
            {
                treated = true;
            }
            else
            {
                treated = false;
            }
             //cout<<"Enregistre : "<<s.c_str()<<endl;
             //cout<<"serial_count :"<<serial_count<<endl;
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
    char ordre = s[0];
    cout<<"[arduino] "<<s<<endl;

    if(ordre == '#' || ordre == '*')
    {
        cout<<"appel arduino found : ";
        if(ordre == '#')
        {
            cout<<"ordre asserv/action"<<endl;
        }
        if (ordre == '*')
        {
            cout<<"ordre strat"<<endl;
        }
    }
    else
    {
        // on sort, et on affiche la ligne
        return;
    }

    //cout << "[COM] ordre ind = " << endl;
    //int ind = ((int)temp[1]) - 48;      // pour avoir le numero de l'ordre
    //cout <<ordre<< "@" <<ind<< endl;

    switch (ordre)
    {

    /** ordre de type adversaire et truc fini
    */
	case '#' :

        // start mis
        if(s.find("START IN") != string::npos)
        {
            cout<<"[Master] start mis"<<endl;
        }

        //start retiré
        if(s.find("START OUT") != string::npos)
        {
            cout<<"[Master] start enleve"<<endl;
            master->get_MAE_COOP_R()->stratEnleve();
        }

        //fin des 90s
        if(s.find("ENDDAME") != string::npos)
        {
            cout<<"[Master] end of game"<<endl;
            //master->get_MAE_COOP_R()->stratEnleve();
        }





        /************************************************
                CHECK FIN ASSERV BASE ROULANTE
        *************************************************/
        if(s.find("NEAR") != string::npos)
        {
            cout<<"[Master] etat asserv, proche"<<endl;
            //master->get_MAE_COOP_R()->adversaire();
        }

        // check si l'asserv est fini
        if(s.find("AFINI") != string::npos)
        {
            cout<<"[Master] etat asserv, fini"<<endl;
            //master->get_MAE_COOP_R()->assFini();
        }

        // check si l'asserv est fini
        if(s.find("BLOC") != string::npos)
        {
            cout<<"[Master] etat asserv, blocage"<<endl;
            //master->get_MAE_COOP_R()->assFini();
        }

        // check si l'asserv est fini
        if(s.find("ENNEMI_GAUCHE") != string::npos)
        {
            cout<<"[Master] etat asserv, ennemi gauche"<<endl;
            //master->get_MAE_COOP_R()->assFini();
        }

        // check si l'asserv est fini
        if(s.find("ENNEMI_DROITE") != string::npos)
        {
            cout<<"[Master] etat asserv, ennemi droite"<<endl;
            //master->get_MAE_COOP_R()->assFini();
        }


         /************************************************
                CHECK ASCENSEUR DROITE
        *************************************************/
        // check si la pince à été ouverte
        if(s.find("ASC_DROITE PINCE OUVERTE") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, pince ouverte"<<endl;
            //transistion sur mae... pince ouverte
        }

        // check si le stand a fini par etre stocke pour bouger ensuite
        if(s.find("ASC_DROITE STAKED") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, un stand de plus !"<<endl;
            master->get_gestionnaire_mission()->get_element_robot()->pile_droite_incr();
            // transistion sur mae... ASC_UP_TO_DATE
        }

        // check si le stand a pas été pris pour bouger ensuite
        if(s.find("ASC_DROITE BREDOUILLE") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, bredouille !"<<endl;
            // transistion sur mae... ASC_UP_TO_DATE
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_DROITE PRET DEPOT") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, pret à poser !"<<endl;
            //
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_DROITE LACHEE") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, pile lachée !"<<endl;
            //
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_DROITE REPLIEE") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, replie !"<<endl;
            //
        }


         /************************************************
                CHECK ASCENSEUR GAUCHE
        *************************************************/
        // check si la pince à été ouverte
        if(s.find("ASC_GAUCHE PINCE OUVERTE") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, pince ouverte"<<endl;
            //transistion sur mae... pince ouverte
        }

        // check si le stand a fini par etre stocke pour bouger ensuite
        if(s.find("ASC_GAUCHE STAKED") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, un stand de plus !"<<endl;
            master->get_gestionnaire_mission()->get_element_robot()->pile_droite_incr();
            // transistion sur mae... ASC_UP_TO_DATE
        }

        // check si le stand a pas été pris pour bouger ensuite
        if(s.find("ASC_GAUCHE BREDOUILLE") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, bredouille !"<<endl;
            // transistion sur mae... ASC_UP_TO_DATE
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_GAUCHE PRET DEPOT") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, pret à poser !"<<endl;
            //
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_GAUCHE LACHEE") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, pile lachée !"<<endl;
            //
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_GAUCHE REPLIEE") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, replie !"<<endl;
            //
        }


         /************************************************
                CHECK BRAS DROIT
        *************************************************/
        // check si le bras est rangé pour partir
        if(s.find("BRAS DROIT FIN MONTEE") != string::npos)
        {
            cout<<"[Master] etat bras droite, fin de montee"<<endl;
            //transistion sur mae... pince ouverte
        }

         /************************************************
                CHECK BRAS DROIT
        *************************************************/
        // check si le bras est rangé pour partir
        if(s.find("ASPIRATION FINIE") != string::npos)
        {
            cout<<"[Master] etat aspiration, finie"<<endl;
            //transistion sur mae... pince ouverte
        }


        break;


    /** ordre de strat
    */
	case '*' :

        // si jaune
        if(s.find("COULEUR : 0") != string::npos)
        {
            cout<<"[Master] couleur 0 (JAUNE)"<<endl;
            master->set_couleur(COULEUR_JAUNE);
        }

        //si vert
        if(s.find("COULEUR : 1") != string::npos)
        {
            cout<<"[Master] couleur 1 (VERT)"<<endl;
            master->set_couleur(COULEUR_VERT);
        }

         //si reception de coordonnées
        if(s.find("COORD") != string::npos)
        {
            // aller chercher les coordonnées dans la chaine
            // to do
            // et les mettre dans le master pour decision sur mission a venir
            cout<<"[Master] REAL COORD : "<<endl;
            //master->set_couleur(COULEUR_VERT);
        }


        break;


    }

}




