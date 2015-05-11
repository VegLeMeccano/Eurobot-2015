#ifndef CONSTANTESPRINCIPAL_H
#define CONSTANTESPRINCIPAL_H

#include "Util/Util.h"

namespace Constantes
{
//================================= BASE ROULANTE ===================================

// distance entre les roues (mm) -> ça n'a pas besoin d'être très précis
const double EMPATTEMENT = 160;
// distance entre les odos de propu (mm)
const double DISTANCE_ODOS = 267.3108726445;
// gain des odos de propu (en mm/tic). Le signe permet de corriger les erreurs de branchement élec.
const double GAIN_ODO_GAUCHE = 0.0713368661;
const double GAIN_ODO_DROITE = -0.0709550309;

// distance entre le barycentre des odos et les faces avant/arrière du robot (en mm).
// permet de savoir à quelle distance du bord se trouve le robot lorsqu'il est collé contre un bord.
const double DIST_RECAL_ARRIERE = 135;
const double DIST_RECAL_AVANT = 135;

//============================== BRAS ET RESERVOIRS =================================

// gain des odos
const double GAIN_ODO_BRAS_AV = 0.025031289;
const double GAIN_ODO_BRAS_AR = 0.025031289;
const double GAIN_ODO_RES_AV = 0.025522605;
const double GAIN_ODO_RES_AR = 0.025522605;

// gain des pid bras
const double brasKP = 3;
const double brasKI = 0;
const double brasKD = 15;
const double brasSatI = 100000;

// gain des pid reservoirs
const double resKP = 2;
const double resKI = 0;
const double resKD = 8;
const double resSatI = 10000;

//================================== CINEMATIQUE ====================================

// vitesse max absolue du robot (m/s ou °/s)
const double VITESSE_TRANS_MAX = 127;
const double VITESSE_ROT_MAX = 100;
// accélération max (dépend du revêtement des roues, du centre de gravité, etc) (m/s/s ou °/s/s)
const double ACCELERATION_TRANS_MAX = 600;
const double ACCELERATION_ROT_MAX = (double)3000/EMPATTEMENT*Util::RAD2DEG;

//==================================== GAINS ========================================

// gains en translation et rotation (cf PID.h pour la description du correcteur PID)
const double tKP = 0.4;
const double tKI = 0;
const double tKD = 2;
const double tKF = 0;
const double tSatI = 10;
// rotation
const double rKP = 1.5;
const double rKI = 0;
const double rKD = 30;
const double rKF = 0;
const double rSatI = 10;

//================================= ELECTRONIQUE ====================================

// Dans cette partie on définit les branchements des IO sur l'arduino (seulement ceux de l'asserv)

// base roulante
const int PIN_ODO_GAUCHE1 = 2;
const int PIN_ODO_GAUCHE2 = 37;
const int PIN_ODO_DROITE1 = 3;
const int PIN_ODO_DROITE2 = 35;
const int ADRESSE_SABER_PROPU = 128;

// bras
const int PIN_ODO_BRAS_AV1 = 20;
const int PIN_ODO_BRAS_AV2 = 27;
const int PIN_ODO_BRAS_AR1 = 19;
const int PIN_ODO_BRAS_AR2 = 31;
const int ADRESSE_SABER_BRAS = 130;

// reservoirs
const int PIN_ODO_RES_AV1 = 18;
const int PIN_ODO_RES_AV2 = 33;
const int PIN_ODO_RES_AR1 = 21;
const int PIN_ODO_RES_AR2 = 29;
const int ADRESSE_SABER_RES = 129;
}

#endif // CONSTANTESPRINCIPAL_H
