#ifndef _ODO_H
#define _ODO_H

#include "Encoder.h"
// Classe ayant pour mission de g�rer les deux odom�tres.
// Elle fournit deux m�thodes pour r�cuperer la vitesse des deux roues folles

// NB : si toutes les m�thodes et attribus sont statiques, c'est parce que les
// routines d'interruptions ne peuvent acceder qu'� des objets statiques !
// C'est un choix de conception un peu moins g�n�rique que ce que l'on aurait pu faire
// mais il permet une compr�hension plus rapide du code.
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
    // Permet d'�viter des divisions.
    static const double R_INV;

    // Distance parcourue en 1 tic odo droit, en mm.
    static const double D;

    // Distance parcourue en 1 tic odo gauche, en mm.
    static const double G;

    //@@@@@@@@@@@@@@@@@@ Reglage

    //Distance entre le centre du robot et la face arri�re du robot (en mm).
    //Permet de savoir � quelle distance du bord se trouve le centre du robot lorsque le robot est coll� contre un bord.
    static const double D_RECAL_Ar;
    static const double D_RECAL_Av;

    // Lecture de la vitesse.
    static double getVitesseGauche();
    static double getVitesseDroite();

    // Lecture du nombre de tics depuis la derni�re lecture.
    static double getDeltaGauche();
    static double getDeltaDroite();

    // Lecture du nombre de tics sans remise a z�ro. Utile pour le r�glage des gains odo.
    static int getTicsGauche();
    static int getTicsDroite();

    //Remet � z�ro tous les compteurs de tics odo (en vitesse et position)
    static void resetDeltas();

};
#endif
