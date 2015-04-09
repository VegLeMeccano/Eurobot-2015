#ifndef _ASSERPOSITION_H
#define _ASSERPOSITION_H


class AsservPosition
{
protected:
    // consignes de vitesse calculées par les algos.
    double VCons;
    double VRotCons;

    // Un asserv est finie quand on reste suffisamment longtemps à l'objectif.
    // Cette variable mesure le "suffisamment logntemps".
    int compteurFinAsserv;

    // Sens de la marche. +1 en marche avant, -1 en marche arrière. Plus pratique qu'un booléen pour les calculs
    int signeMarche;

    // true si le robot doit s'arrêter à la fin de l'asserv, ou false s'il doit enchainer vers une autre asserv
    bool arretFinal;

public:
    AsservPosition();
    virtual void calculCmd(double XReel, double YReel, double capReel, int deltaT) = 0;
    virtual bool assFini(double XReel, double YReel, double capReel) = 0;
    // Applique un modulo sur l'erreur en cap.
    // Par exemple, si le robot est au cap 350, et la consigne est 0, il faut tourner de 10 degrés et pas 350.
    double moduloCap(double err);

    double getVCons() const;
    double getVRotCons() const;

    bool getMarcheAvant() const;
    bool getMarcheArriere() const;

    bool getArretFinal() const;
};
#endif
