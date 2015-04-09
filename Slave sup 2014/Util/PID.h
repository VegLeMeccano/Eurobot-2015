#ifndef _PID_H
#define _PID_H


// Impl�mente un correcteur PID avec gain direct de la forme :
// Cmd = KP.( 1 + KI / s + KD.s )*Erreur + KF*Consigne
//                  __
//      ___________|KF|__________________
//     |           |__|                  |                 _______
//     |          _________________      +                |       |
//_____|__+   ___|    KP(1+KD*s)   |___+   ___commande____| robot |__
//consigne  -  | |_________________|     +                |_______|  |
//          |  |     ___   _________     |                           |
//          |  |____|sat|_|KP.KI.1/s|____|                           |
//          | erreur|_I_| |_________|                                |
//          |________________________________________________________|
//              reel
//
//
//

class PID
{
private:
    // Gain proportionnel
    double KP;
    // Gain int�gral
    double KI;
    // Gain d�riv�
    double KD;
    // Gain de commande directe
    double KF;
    // Saturation de l'int�grateur
    double SatI;

    // Intervalle de temps entre deux appels � calculCmd(...) (en ms)
    // N�cessaire pour le calcul des int�grales et des d�riv�es.
    double deltaT;

    // Erreur au temps t-1
    double erreurT1;
    // Erreur au temps t-2
    double erreurT2;

    // Commande r�sultant de l'action PID uniquement (pas de la commande directe)
    // Permet de m�moriser la commande pr�cedante pour tout nouveau calcul de commande.
    // Voir calculCmd(...)
    double cmd;

public:
    PID();

    // Renvoie la nouvelle commande.
    // Prend en param�tre la position de consigne et la valeur r�elle renvoy�e par les capteurs.
    // ATTENTION : cette fonction doit �tre appel�e tous les "deltaT" millisecondes.
    double calculCmd(double consigne, double reel);
    // cette surcharge sert pour les angles. En effet, le PID ne sait pas s'il faut appliquer un modulo, donc on
    // le fait � la main avant. Mais on ne peut calculer un modulo que sur une erreur.
    double calculCmd(double erreur);

    // Remet � z�ro la valeur de l'int�grateur du PID.
    // Permet de repartir d'un asservissement propre lorsqu'un nouvel ordre d'asservissement arrive.
    // Evite les effets de bord (et donc les mauvaises surprises !)
    void RAZ_integrateur();

    void set(double KP_, double KI_, double KD_, double KF_, double SatI_);
    void set(double KP_, double KI_, double KD_, double KF_, double SatI_, int deltaT_);

};
#endif
