#ifndef _ASSERPOSITION_H
#define _ASSERPOSITION_H


class AsservPosition
{
protected:
    // consignes de vitesse calcul�es par les algos.
    double VCons;
    double VRotCons;

    // Un asserv est finie quand on reste suffisamment longtemps � l'objectif.
    // Cette variable mesure le "suffisamment logntemps".
    int compteurFinAsserv;

    // Sens de la marche. +1 en marche avant, -1 en marche arri�re. Plus pratique qu'un bool�en pour les calculs
    int signeMarche;

    // true si le robot doit s'arr�ter � la fin de l'asserv, ou false s'il doit enchainer vers une autre asserv
    bool arretFinal;

public:
    AsservPosition();
    virtual void calculCmd(double XReel, double YReel, double capReel, int deltaT) = 0;
    virtual bool assFini(double XReel, double YReel, double capReel) = 0;
    // Applique un modulo sur l'erreur en cap.
    // Par exemple, si le robot est au cap 350, et la consigne est 0, il faut tourner de 10 degr�s et pas 350.
    double moduloCap(double err);

    double getVCons() const;
    double getVRotCons() const;

    bool getMarcheAvant() const;
    bool getMarcheArriere() const;

    bool getArretFinal() const;
};
#endif
