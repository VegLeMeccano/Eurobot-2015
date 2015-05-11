#ifndef CONSTANTESPMI_H
#define CONSTANTESPMI_H

#include "Util/Util.h"

namespace Constantes
{
//================================== GEOMETRIE ======================================

// distance entre les roues (mm) -> ça n'a pas besoin d'être très précis
const double EMPATTEMENT = 160;
// distance entre les odos de propu (mm)
const double DISTANCE_ODOS = 119.1576747733;

// gain des odos de propu (en mm/tic). Le signe permet de corriger les erreurs de branchement élec.
const double GAIN_ODO_GAUCHE = 0.0712974306;
const double GAIN_ODO_DROITE = -0.0708638007;
// distance entre le barycentre des odos et les faces avant/arrière du robot (en mm).
// permet de savoir à quelle distance du bord se trouve le robot lorsqu'il est collé contre un bord.
const double DIST_RECAL_ARRIERE = 82;
const double DIST_RECAL_AVANT = 81;

//================================= CINEMATIQUE =====================================

// vitesse max absolue du robot en valeur sabertooth -> de 0 à 127
const double VITESSE_TRANS_MAX = 100;
const double VITESSE_ROT_MAX = 90;
// accélération max (dépend du revêtement des roues, du centre de gravité, etc) (m/s/s ou °/s/s)
const double ACCELERATION_TRANS_MAX = 300;
const double ACCELERATION_ROT_MAX = (double)1500/EMPATTEMENT*Util::RAD2DEG; // le 2000 est pour convertir
                                                                            // en m le demi empattement

//================================ ASSERVISSEMENT ===================================

// gains en translation et rotation (cf PID.h pour la description du correcteur PID)
const double tKP = 0.4;
const double tKI = 0;
const double tKD = 2.5;
const double tKF = 0;
const double tSatI = 10;
// rotation
const double rKP = 1.5;
const double rKI = 0;
const double rKD = 8;
const double rKF = 0;
const double rSatI = 10;

//================================= ELECTRONIQUE ====================================

// Dans cette partie on définit les branchements des IO sur l'arduino

// Odos base roulante
const int PIN_ODO_GAUCHE1 = 2;
const int PIN_ODO_GAUCHE2 = 28;
const int PIN_ODO_DROITE1 = 3;
const int PIN_ODO_DROITE2 = 30;

const int ADRESSE_SABER_PROPU = 128;

}

#endif // CONSTANTESPMI_H
