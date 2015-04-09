#ifndef _BOUCLEPOSITION_H
#define _BOUCLEPOSITION_H


#include "BoucleVitesse.h"
#include "Slave/Asservissement/AsservPosition.h"
#include "Util/periode.h"
#include "Slave/Util/Odo.h"
#include "Slave/constantesrobot.h"
#include <math.h>

class MAEPrincipal;

class BouclePosition
{
private:
    Periode periode;

    // Position du robot mesurée par les capteurs (odos, gyro, balise, etc.)
    double XReel;
    double YReel;
    double capReel;

    // Distances parcourues par les odos
    double distanceDroite;
    double distanceGauche;

    // sert pour les MAE
    bool assFini;

    // Pointeur vers l'algo à utiliser pour déterminer les consignes de vitesse
    AsservPosition* asservPosition;

    // Les odos de propu, pour mesurer la position
    Odo odometres;

    void calculPosition();
    void commanderBV();

public:
    // Boucle détermine les commandes en fonction des consignes
    BoucleVitesse BV;

    BouclePosition();
    void run();
    // affiche la distace parcourue par chaque odo. Pratique pour le debug
    void printDistance();

    int getPeriode();

    double getXReel() const;
    double getYReel() const;
    double getCapReel() const;
    void setXYCap(double X, double Y, double cap);

    AsservPosition* getAsservPosition() const;
    void setAsservPosition(AsservPosition *value);

    bool getAssFini();
    // quand une MAE lit plusieurs assFini à la suite, elle doit les reset pour être sûre de pas sauter une étape
    void resetAssFini();
};
#endif
