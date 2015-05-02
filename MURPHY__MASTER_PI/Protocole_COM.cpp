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
    std::string ordre;
    std::string name;
    std::string x;
    std::string y;
    std::string cap;
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

         /************************************************
                CHECK STRAT
        *************************************************/
        // start mis
        if(s.find("START_IN") != string::npos)
        {
            cout<<"[Master] start mis"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->start_mis();
        }

        //start retiré
        if(s.find("START_OUT") != string::npos)
        {
            cout<<"[Master] start enleve"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->start_enleve();
        }

        //fin des 90s
        if(s.find("END_GAME") != string::npos)
        {
            cout<<"[Master] end of game"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->end_game();
        }


         /************************************************
                CHECK POP corn
        *************************************************/
        // start mis
        if(s.find("CLAPS_DROITE_REPLIS") != string::npos)
        {
            cout<<"[Master] CLAPS_DROITE_REPLIS DD"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->claps_replie();
        }

        //start retiré
        if(s.find("CLAPS_GAUCHE_REPLIS") != string::npos)
        {
            cout<<"[Master]claps replie GG"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->claps_replie();
        }

        //fin des 90s
        if(s.find("DISTRIB_DEBOITE") != string::npos)
        {
            cout<<"[Master] end of game"<<endl;
            master->get_MAE_COOP_R()->distrib_deboite();
            master->get_gestionnaire_mission()->get_element_robot()->pop_corn_aspire();
        }



        /************************************************
                CHECK FIN ASSERV BASE ROULANTE
        *************************************************/
        if(s.find("SLAVE_NEAR") != string::npos)
        {
            cout<<"[Master] etat asserv, proche"<<endl;
            //master->get_gestionnaire_mission()->get_mae_murphy()->near();
        }

        // check si l'asserv est fini
        if(s.find("SLAVE_AFINI") != string::npos)
        {
            cout<<"[Master] etat asserv, fini"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->assFini();

        }

        // check si l'asserv est fini
        if(s.find("SLAVE_BLOCAGE") != string::npos)
        {
            cout<<"[Master] etat asserv, blocage"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->blocage();
        }

        // check si l'asserv est fini
        if(s.find("SLAVE_ENNEMI_GAUCHE") != string::npos)
        {
            cout<<"[Master] etat asserv, ennemi gauche"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->adversaire();
        }

        // check si l'asserv est fini
        if(s.find("SLAVE_ENNEMI_DROITE") != string::npos)
        {
            cout<<"[Master] etat asserv, ennemi droite"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->adversaire();//master->get_MAE_COOP_R()->assFini();
        }


         /************************************************
                CHECK ASCENSEUR DROITE
        *************************************************/
        // check si la pince à été ouverte
        if(s.find("ASC_DROITE_PINCE_OUVERTE") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, pince ouverte"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_ouverte();
        }

        // check si le stand a fini par etre stocke pour bouger ensuite
        if(s.find("ASC_DROITE_STAKED") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, un stand de plus !"<<endl;
            master->get_gestionnaire_mission()->get_element_robot()->pile_droite_incr();
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_stand_by();
        }

        // check si le stand a pas été pris pour bouger ensuite
        if(s.find("ASC_DROITE_BREDOUILLE") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, bredouille !"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_stand_by();
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_DROITE_PRET_DEPOT") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, pret à poser !"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_ready_to_drop();
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_DROITE_LACHEE") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, pile lachée !"<<endl;
            master->get_gestionnaire_mission()->get_element_robot()->pile_droite_reset();
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_lache();
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_DROITE_REPLIEE") != string::npos)
        {
            cout<<"[Master] etat ascenseur droite, replie !"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_range();
        }


         /************************************************
                CHECK ASCENSEUR GAUCHE
        *************************************************/
        // check si la pince à été ouverte
        if(s.find("ASC_GAUCHE_PINCE_OUVERTE") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, pince ouverte"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_ouverte();
            //transistion sur mae... pince ouverte
        }

        // check si le stand a fini par etre stocke pour bouger ensuite
        if(s.find("ASC_GAUCHE_STAKED") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, un stand de plus !"<<endl;
            master->get_gestionnaire_mission()->get_element_robot()->pile_gauche_incr();
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_stand_by();
            // transistion sur mae... ASC_UP_TO_DATE
        }

        // check si le stand a pas été pris pour bouger ensuite
        if(s.find("ASC_GAUCHE_BREDOUILLE") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, bredouille !"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_stand_by();
            // transistion sur mae... ASC_UP_TO_DATE
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_GAUCHE_PRET DEPOT") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, pret à poser !"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_ready_to_drop();
            //
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_GAUCHE_LACHEE") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, pile lachée !"<<endl;
            master->get_gestionnaire_mission()->get_element_robot()->pile_gauche_reset();
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_lache();
            //
        }

          // check si la pile est prete a etre deposé
        if(s.find("ASC_GAUCHE_REPLIEE") != string::npos)
        {
            cout<<"[Master] etat ascenseur gauche, replie !"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->pince_range();
        }


         /************************************************
                CHECK BRAS DROIT
        *************************************************/
        // check si le bras est rangé pour partir
        if(s.find("BRAS_DROIT_FIN _MONTEE") != string::npos)
        {
            cout<<"[Master] etat bras droite, fin de montee"<<endl;
            master->get_gestionnaire_mission()->get_mae_murphy()->fin_montee_bras();
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
            stream>> ordre >> name >> x >> y >> cap;
            master->get_gestionnaire_mission()->set_coord(atoi(x.c_str()),atoi(y.c_str()),atoi(cap.c_str()));
            // aller chercher les coordonnées dans la chaine
            // to do
            // et les mettre dans le master pour decision sur mission a venir
            cout<<"[Master] REAL COORD : "<<endl;
            //master->set_couleur(COULEUR_VERT);
        }


        break;


    }

}




