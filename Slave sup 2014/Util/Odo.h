#ifndef _ODO_H
#define _ODO_H

#include "Encoder.h"
// Classe ayant pour mission de gérer les deux odomètres.
// Elle fournit deux méthodes pour récuperer la vitesse des deux roues folles

// NB : si toutes les méthodes et attribus sont statiques, c'est parce que les
// routines d'interruptions ne peuvent acceder qu'à des objets statiques !
// C'est un choix de conception un peu moins générique que ce que l'on aurait pu faire
// mais il permet une compréhension plus rapide du code.
class Odo
{
private:
    static Encoder OdoGauche;
    static Encoder OdoDroite;

    static int tickG;
    static int tickD;

public:
    // Distance entre les deux roues odo, en mm.
    static const double R;

    // Inverse de la distance entre les deux roues odo, en mm-1.
    // Permet d'éviter des divisions.
    static const double R_INV;

    // Distance parcourue en 1 tic odo droit, en mm.
    static const double D;

    // Distance parcourue en 1 tic odo gauche, en mm.
    static const double G;

    //@@@@@@@@@@@@@@@@@@ Reglage

    //Distance entre le centre du robot et la face arrière du robot (en mm).
    //Permet de savoir à quelle distance du bord se trouve le centre du robot lorsque le robot est collé contre un bord.
    static const double D_RECAL_Ar;
    static const double D_RECAL_Av;

    // Lecture de la vitesse.
    static double getVitesseGauche();
    static double getVitesseDroite();

    // Lecture du nombre de tics depuis la dernière lecture.
    static double getDeltaGauche();
    static double getDeltaDroite();

    // Lecture du nombre de tics sans remise a zéro. Utile pour le réglage des gains odo.
    static int getTicsGauche();
    static int getTicsDroite();

    //Remet à zéro tous les compteurs de tics odo (en vitesse et position)
    static void resetDeltas();

};
#endif
