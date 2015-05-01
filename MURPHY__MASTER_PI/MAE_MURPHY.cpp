
#include "MAE_MURPHY.h"

#include "Master.h"
#include <wiringPi.h>
#include <wiringSerial.h>

MAE_MURPHY::AnyState::~AnyState() {
}

// perform the 'do activity'
void MAE_MURPHY::AnyState::_do(MAE_MURPHY &) {
}

void MAE_MURPHY::AnyState::create(MAE_MURPHY &) {
}

// the current state doesn't manage the event strat_mis, give it to the upper state
void MAE_MURPHY::AnyState::strat_mis(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->strat_mis(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition strat_mis not expected");
#endif
}

// the current state doesn't manage the event evitement, give it to the upper state
void MAE_MURPHY::AnyState::evitement(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->evitement(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition evitement not expected");
#endif
}

// the current state doesn't manage the event assFini, give it to the upper state
void MAE_MURPHY::AnyState::assFini(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->assFini(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition assFini not expected");
#endif
}

// the current state doesn't manage the event time_out, give it to the upper state
void MAE_MURPHY::AnyState::time_out(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->time_out(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition time_out not expected");
#endif
}

// the current state doesn't manage the event blocage, give it to the upper state
void MAE_MURPHY::AnyState::blocage(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->blocage(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition blocage not expected");
#endif
}

// the current state doesn't manage the event start_enleve, give it to the upper state
void MAE_MURPHY::AnyState::start_enleve(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->start_enleve(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition start_enleve not expected");
#endif
}

// the current state doesn't manage the event mission_distrib, give it to the upper state
void MAE_MURPHY::AnyState::mission_distrib(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_distrib(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_distrib not expected");
#endif
}

// the current state doesn't manage the event mission_depot_tour, give it to the upper state
void MAE_MURPHY::AnyState::mission_depot_tour(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_depot_tour(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_depot_tour not expected");
#endif
}

// the current state doesn't manage the event mission_zone_ennemie, give it to the upper state
void MAE_MURPHY::AnyState::mission_zone_ennemie(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_zone_ennemie(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_zone_ennemie not expected");
#endif
}

// the current state doesn't manage the event mission_chiage, give it to the upper state
void MAE_MURPHY::AnyState::mission_chiage(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_chiage(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_chiage not expected");
#endif
}

// the current state doesn't manage the event mission_zone_centrale, give it to the upper state
void MAE_MURPHY::AnyState::mission_zone_centrale(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_zone_centrale(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_zone_centrale not expected");
#endif
}

// the current state doesn't manage the event mission_depot_estrade, give it to the upper state
void MAE_MURPHY::AnyState::mission_depot_estrade(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_depot_estrade(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_depot_estrade not expected");
#endif
}

// the current state doesn't manage the event mission_claps, give it to the upper state
void MAE_MURPHY::AnyState::mission_claps(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_claps(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_claps not expected");
#endif
}

// the current state doesn't manage the event pince_ouverte, give it to the upper state
void MAE_MURPHY::AnyState::pince_ouverte(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->pince_ouverte(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition pince_ouverte not expected");
#endif
}

// the current state doesn't manage the event pince_stand_by, give it to the upper state
void MAE_MURPHY::AnyState::pince_stand_by(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->pince_stand_by(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition pince_stand_by not expected");
#endif
}

// the current state doesn't manage the event distrib_deboite, give it to the upper state
void MAE_MURPHY::AnyState::distrib_deboite(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->distrib_deboite(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition distrib_deboite not expected");
#endif
}

MAE_MURPHY::MAE_MURPHY_State::Initialisation_State::~Initialisation_State() {
}

// to manage the event strat_mis
void MAE_MURPHY::MAE_MURPHY_State::Initialisation_State::strat_mis(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial");
#endif
      stm._mae_murphy_state._recalage_initial_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Initialisation_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Initialisation_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Initialisation");
#endif
  cout<<"ETAT INITIALISATION"<<endl;
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Initialisation_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state;
}

MAE_MURPHY::MAE_MURPHY_State::startin_block_State::~startin_block_State() {
}

// to manage the event start_enleve
void MAE_MURPHY::MAE_MURPHY_State::startin_block_State::start_enleve(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu");
#endif
      stm._mae_murphy_state._jeu_state.create(stm);
    }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::startin_block_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state;
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::startin_block_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::startin_block_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.startin' block");
#endif
  cout<<"MURPHY IS READY, PULL THE TRIGGER !"<<endl;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_State::~Recule_State() {
}

// to manage the event blocage
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_State::blocage(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._set_x_y_cap_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.set X Y CAP");
#endif
      stm._mae_murphy_state._recalage_initial_state._set_x_y_cap_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.Recule");
#endif
  cout<<"RECULE"<<endl;
  // recule (recalage au cul)
  serialPrint(master->getPortSerie(),"S2 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_State::~avance_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial");
#endif
      stm._mae_murphy_state._recalage_initial_state._exit12(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.avance");
#endif
  // pour laisser de la place à coop'r
  cout<<"avance de 200 mm "<<endl;
  serialPrint(master->getPortSerie(),"S4 200 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::coup_de_patte_cote_escalier_pour_confirmer_le_sens_State::~coup_de_patte_cote_escalier_pour_confirmer_le_sens_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::coup_de_patte_cote_escalier_pour_confirmer_le_sens_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::coup_de_patte_cote_escalier_pour_confirmer_le_sens_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.coup de patte cote escalier pour confirmer le sens");
#endif
  if(master->is_Jaune()){
  // coup de patte cote gauche
  serialPrint(master->getPortSerie(),"C2 \n");
  }
  if(master->is_Vert()){
  // coup de patte cote droit
  serialPrint(master->getPortSerie(),"C0 \n");
  }
  //master->set_time_out(2000);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::coup_de_patte_cote_escalier_pour_confirmer_le_sens_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

bool MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::coup_de_patte_cote_escalier_pour_confirmer_le_sens_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.avance");
#endif
      stm._mae_murphy_state._recalage_initial_state._avance_state.create(stm);
      return (bool) 1;
    }
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_X_Y_CAP_State::~set_X_Y_CAP_State() {
}

// to manage the event time_out
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_X_Y_CAP_State::time_out(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._coup_de_patte_cote_escalier_pour_confirmer_le_sens_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.coup de patte cote escalier pour confirmer le sens");
#endif
      stm._mae_murphy_state._recalage_initial_state._coup_de_patte_cote_escalier_pour_confirmer_le_sens_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_X_Y_CAP_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_X_Y_CAP_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.set X Y CAP");
#endif
  if(master->is_Jaune()){
  cout<<"SET X Y CAP ORIGIN, COULEUR JAUNE"<<endl;
  // X = -1500 + 70 +96 = -1334
  // terrain, bordure, robot (axe de rotation)
  serialPrint(master->getPortSerie(),"S0 -1334 996 0 \n");
  }
  if(master->is_Vert()){
  cout<<"SET X Y CAP ORIGIN, COULEUR VERT"<<endl;
  serialPrint(master->getPortSerie(),"S0 1334 996 180 \n");
  }
  master->set_time_out(300);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_X_Y_CAP_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::~Recalage_Initial_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.Recule");
#endif
      stm._mae_murphy_state._recalage_initial_state._recule_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial");
#endif
  cout<<"ETAT RECALAGE INITIAL"<<endl;
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state;
}

// to manage the exit point 'sortie recalage', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::_exit12(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._startin_block_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.startin' block");
#endif
      stm._mae_murphy_state._startin_block_state.create(stm);
    }
}

MAE_MURPHY::MAE_MURPHY_State::Evitement_State::faire_des_maneuvre_State::~faire_des_maneuvre_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Evitement_State::faire_des_maneuvre_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Evitement");
#endif
      stm._mae_murphy_state._evitement_state._exit11(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Evitement_State::faire_des_maneuvre_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Evitement_State::faire_des_maneuvre_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Evitement.faire des maneuvre");
#endif
  // BF cap 90 ou -90 ou 180
  // etat pipo d'evitement, le tout ce passe dans la decision dans le super etat Game
  // sinon un petit timer...
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Evitement_State::faire_des_maneuvre_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._evitement_state;
}

MAE_MURPHY::MAE_MURPHY_State::Evitement_State::~Evitement_State() {
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Evitement_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Evitement");
#endif
  cout<<"ETAT EVITEMENT"<<endl;
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Evitement_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state;
}

// implement a junction, through an operation because shared, internal
void MAE_MURPHY::MAE_MURPHY_State::Evitement_State::_junction1(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._evitement_state._faire_des_maneuvre_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Evitement.faire des maneuvre");
#endif
      stm._mae_murphy_state._evitement_state._faire_des_maneuvre_state.create(stm);
    }
}

// to manage the exit point 'sortie evitement', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Evitement_State::_exit11(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu");
#endif
      stm._mae_murphy_state._jeu_state.create(stm);
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_de_la_zone_de_depart_State::~sortie_de_la_zone_de_depart_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_de_la_zone_de_depart_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_de_la_zone_de_depart_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_de_la_zone_de_depart_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.sortie de la zone de depart");
#endif
  // avance de 400mm
  serialPrint(master->getPortSerie(),"S4 400 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_de_la_zone_de_depart_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_zone_State::~sortie_zone_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_zone_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._exit6(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_zone_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_zone_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.sortie zone");
#endif
  // on se remet devant la zone de depart
  // BF droite vers la zone enemie
  
  if(is_netoyage_zone_done() && is_capture_gobelet_done())
  {
  	master->get_gestionnaire_mission()->mission_distrib()->mission_remplie();
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_zone_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_vers_objectif_State::~orientation_vers_objectif_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_vers_objectif_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._bf_droite_vers_lobjectif_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.BF droite vers l'objectif");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._bf_droite_vers_lobjectif_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_vers_objectif_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_vers_objectif_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.orientation vers objectif");
#endif
  // BCAP
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission() + " \n";
  serialPrint(master->getPortSerie(),ordre);
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_vers_objectif_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_cap_mission_State::~orientation_cap_mission_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_cap_mission_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._exit5(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_cap_mission_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_cap_mission_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.orientation cap mission");
#endif
  // BF Droite vers objectif
  string ordre;
  ordre = "S3 " 
  	+ master->get_gestionnaire()->get_cap_mission() 
  	+ " \n";
  serialPrint(master->getPortSerie(),ordre); 
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_cap_mission_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::BF_droite_vers_lobjectif_State::~BF_droite_vers_lobjectif_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::BF_droite_vers_lobjectif_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._orientation_cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.orientation cap mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._orientation_cap_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::BF_droite_vers_lobjectif_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::BF_droite_vers_lobjectif_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.BF droite vers l'objectif");
#endif
  // BF Droite vers objectif
  string ordre;
  ordre = "S5 "
  	+ master->get_gestionnaire()->get_x_mission() 
  	+ " "
  	+ master->get_gestionnaire()->get_y_mission() 
  	+ " "
  	+ master->get_gestionnaire()->get_cap_to_mission() 
  	+ " \n";
  serialPrint(master->getPortSerie(),ordre); 
  cout<<"BF droite vers MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::BF_droite_vers_lobjectif_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::~rejoindre_le_point_de_depart_mission_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._orientation_vers_objectif_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.orientation vers objectif");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._orientation_vers_objectif_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission");
#endif
  // devant la zone de depart
   on check ou on est puis BF cap vers le point, puis BF droite
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
}

// to manage the exit point 'sortie', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::_exit5(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib");
#endif
      if (master->get_gestionnaire_mission()->mission_distrib()->is_capture_gobelet_done()) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier");
#endif
        stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state.create(stm);
      }
      else if (!master->get_gestionnaire_mission()->get_mission_distrib()->is_capture_gobelet_done() ) {
        if (!master->get_gestionnaire_mission()->get_element_robot()->gobelet_present()) {
          stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier");
#endif
          stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state.create(stm);
        }
        else if (master->get_gestionnaire_mission()->get_element_robot()->gobelet_present()) {
          if (!master->get_gestionnaire_mission()->mission_distrib()->is_netoyage_zone_done() ) {
            stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier");
#endif
            stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state.create(stm);
          }
          else if (mission_distrib.is_netoyage_zone_done() ) {
            stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.sortie zone");
#endif
            stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state.create(stm);
          }
        }
      }
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_Cap_objectif_State::~BF_Cap_objectif_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_Cap_objectif_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._bf_droite_sur_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF droite sur distrib");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._bf_droite_sur_distrib_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_Cap_objectif_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_Cap_objectif_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF Cap objectif");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"S3 80 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S3 100 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_Cap_objectif_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::avance_State::~avance_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::avance_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._exit4(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::avance_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::avance_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.avance");
#endif
  if(master->is_Jaune()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S5 -?? ?? 0 \n");
  }
  if(master->is_Vert()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S5 ?? ?? 180 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::avance_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::orientation_vers_sortie_de_zone_State::~orientation_vers_sortie_de_zone_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::orientation_vers_sortie_de_zone_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.avance");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._avance_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::orientation_vers_sortie_de_zone_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::orientation_vers_sortie_de_zone_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.orientation vers sortie de zone");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"S3 -60 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S3 240 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::orientation_vers_sortie_de_zone_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::recule_State::~recule_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::recule_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._orientation_vers_sortie_de_zone_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.orientation vers sortie de zone");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._orientation_vers_sortie_de_zone_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::recule_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::recule_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.recule");
#endif
  serialPrint(master->getPortSerie(),"S4 -400 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::recule_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::pompage_State::~pompage_State() {
}

// to manage the event distrib_deboite
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::pompage_State::distrib_deboite(MAE_MURPHY & stm) {
    {
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._pompage_state._doexit(stm);
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.recule");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._recule_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::pompage_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::pompage_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.pompage");
#endif
  serialPrint(master->getPortSerie(),"P0 \n");
}

// perform the 'exit behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::pompage_State::_doexit(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.pompage");
#endif
  master->get_gestionnaire_mission()->mission_distrib()->netoyage_zone_done();
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::pompage_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::SET_Y_CAP_State::~SET_Y_CAP_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::SET_Y_CAP_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._pompage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.pompage");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._pompage_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::SET_Y_CAP_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::SET_Y_CAP_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.SET Y CAP");
#endif
  if(master->is_Jaune()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S1 -?? ?? 90 \n");
  }
  if(master->is_Vert()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S1 ?? ?? 90 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::SET_Y_CAP_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_avance_jusquau_blocage_State::~BF_avance_jusquau_blocage_State() {
}

// to manage the event blocage
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_avance_jusquau_blocage_State::blocage(MAE_MURPHY & stm) {
    _do(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._set_y_cap_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.SET Y CAP");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._set_y_cap_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_avance_jusquau_blocage_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_avance_jusquau_blocage_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF avance jusquau blocage");
#endif
  serialPrint(master->getPortSerie(),"S4 200 \n");
}

// perform the 'do activity'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_avance_jusquau_blocage_State::_do(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute do behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF avance jusquau blocage");
#endif
  serialPrint(master->getPortSerie(),"S1 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_avance_jusquau_blocage_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_droite_sur_distrib_State::~BF_droite_sur_distrib_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_droite_sur_distrib_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._bf_avance_jusquau_blocage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF avance jusquau blocage");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._bf_avance_jusquau_blocage_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_droite_sur_distrib_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_droite_sur_distrib_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF droite sur distrib");
#endif
  if(master->is_Jaune()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S5 -?? ?? 90 \n");
  }
  if(master->is_Vert()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S5 ?? ?? 90 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_droite_sur_distrib_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::~vidage_distributeur_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.sortie zone");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._bf_cap_objectif_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF Cap objectif");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._bf_cap_objectif_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur");
#endif
  // element_robot.aspire();
  mission_distrib.netoyage_zone_done(); 
}

// to manage the exit point 'sortie pompage', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::_exit4(MAE_MURPHY & stm) {
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_cap_vers_objectif_State::~BF_cap_vers_objectif_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_cap_vers_objectif_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._bf_droite_vers_objectif_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF droite vers objectif");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._bf_droite_vers_objectif_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_cap_vers_objectif_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_cap_vers_objectif_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF cap vers objectif");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"S3 132 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S3 48 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_cap_vers_objectif_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::recule_State::~recule_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::recule_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._exit3(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::recule_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::recule_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.recule");
#endif
  serialPrint(master->getPortSerie(),"S4 -400 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::recule_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::chope_State::~chope_State() {
}

// to manage the event pince_stand_by
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::chope_State::pince_stand_by(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.recule");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._recule_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::chope_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::chope_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.chope");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"G1 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"D1 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::chope_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_avance_State::~BF_avance_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_avance_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._chope_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.chope");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._chope_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_avance_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_avance_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF avance");
#endif
  serialPrint(master->getPortSerie(),"S4 120 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_avance_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::ouverture_pince_cote_bordure_State::~ouverture_pince_cote_bordure_State() {
}

// to manage the event pince_ouverte
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::ouverture_pince_cote_bordure_State::pince_ouverte(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._bf_avance_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF avance");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._bf_avance_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::ouverture_pince_cote_bordure_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::ouverture_pince_cote_bordure_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.ouverture pince cote bordure");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"G0 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"D0 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::ouverture_pince_cote_bordure_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_droite_vers_objectif_State::~BF_droite_vers_objectif_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_droite_vers_objectif_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._ouverture_pince_cote_bordure_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.ouverture pince cote bordure");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._ouverture_pince_cote_bordure_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_droite_vers_objectif_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_droite_vers_objectif_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF droite vers objectif");
#endif
  if(master->is_Jaune()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S5 -?? ?? 90 \n");
  }
  if(master->is_Vert()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S5 ?? ?? 90 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_droite_vers_objectif_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::~capture_stand_bordure_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._bf_cap_vers_objectif_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF cap vers objectif");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._bf_cap_vers_objectif_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure");
#endif
  // Jaune : pile gauche +1
  // element_robot.pile_gauche_incr();
  
  
  // Vert : pile droite +1
  // element_robot.pile_droite_incr();
}

// to manage the exit point 'sortie stand bordure', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::_exit3(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state.create(stm);
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_cap_initial_35deg_State::~BF_cap_initial_35deg_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_cap_initial_35deg_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_droite_vers_gobelet_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF droite vers gobelet");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_droite_vers_gobelet_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_cap_initial_35deg_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_cap_initial_35deg_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF cap initial 35deg");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"S3 132 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S3 48 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_cap_initial_35deg_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::recule_State::~recule_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::recule_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._exit2(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::recule_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::recule_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.recule");
#endif
  serialPrint(master->getPortSerie(),"S4 -450 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::recule_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_2_State::~chope_2_State() {
}

// to manage the event pince_stand_by
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_2_State::pince_stand_by(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.recule");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._recule_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_2_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_2_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.chope 2");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"D1 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"G1 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_2_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_seconde_State::~BF_avance_seconde_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_seconde_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._chope_2_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.chope 2");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._chope_2_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_seconde_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_seconde_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF avance seconde");
#endif
  serialPrint(master->getPortSerie(),"S4 120 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_seconde_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_seconde_State::~ouverture_pince_cote_escalier_seconde_State() {
}

// to manage the event pince_ouverte
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_seconde_State::pince_ouverte(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_avance_seconde_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF avance seconde");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_avance_seconde_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_seconde_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_seconde_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.ouverture pince cote escalier seconde");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"D0 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"G0 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_seconde_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_1_State::~chope_1_State() {
}

// to manage the event pince_stand_by
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_1_State::pince_stand_by(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._ouverture_pince_cote_escalier_seconde_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.ouverture pince cote escalier seconde");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._ouverture_pince_cote_escalier_seconde_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_1_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_1_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.chope 1");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"D1 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"G1 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_1_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_State::~BF_avance_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._chope_1_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.chope 1");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._chope_1_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF avance");
#endif
  serialPrint(master->getPortSerie(),"S4 120 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_State::~ouverture_pince_cote_escalier_State() {
}

// to manage the event pince_ouverte
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_State::pince_ouverte(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_avance_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF avance");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_avance_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.ouverture pince cote escalier");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"D0 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"G0 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_droite_vers_gobelet_State::~BF_droite_vers_gobelet_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_droite_vers_gobelet_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._ouverture_pince_cote_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.ouverture pince cote escalier");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._ouverture_pince_cote_escalier_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_droite_vers_gobelet_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_droite_vers_gobelet_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF droite vers gobelet");
#endif
  if(master->is_Jaune()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S5 -?? ?? 90 \n");
  }
  if(master->is_Vert()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S5 ?? ?? 90 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_droite_vers_gobelet_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::~capture_stands_cote_escalier_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_cap_initial_35deg_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF cap initial 35deg");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_cap_initial_35deg_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier");
#endif
  /// Jaune : pile droite +2
  // element_robot.pile_droite_incr();
  // element_robot.pile_droite_incr();
  
  /// Vert : pile gauche +2
  // element_robot.pile_gauche_incr();
  // element_robot.pile_gauche_incr();
}

// to manage the exit point 'sortie chope stands escalier', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::_exit2(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state.create(stm);
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::deplacement_cible_State::~deplacement_cible_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::deplacement_cible_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._capture_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.capture");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._capture_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::deplacement_cible_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::deplacement_cible_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.deplacement cible");
#endif
  if(master->is_Jaune()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S5 -590 1198 135 \n");
  }
  if(master->is_Vert()){
  // BF droite sur le gobelet 
  serialPrint(master->getPortSerie(),"S5 590 1198 35 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::deplacement_cible_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::recule_State::~recule_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::recule_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._bf_cap_vers_la_zone_de_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.BF cap vers la zone de distrib");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._bf_cap_vers_la_zone_de_distrib_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::recule_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::recule_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.recule");
#endif
  serialPrint(master->getPortSerie(),"S4 -120 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::recule_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::BF_cap_vers_la_zone_de_distrib_State::~BF_cap_vers_la_zone_de_distrib_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::BF_cap_vers_la_zone_de_distrib_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._exit1(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::BF_cap_vers_la_zone_de_distrib_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::BF_cap_vers_la_zone_de_distrib_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.BF cap vers la zone de distrib");
#endif
  if(master->is_Jaune()){
  // BF cap
  serialPrint(master->getPortSerie(),"S3 132 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S3 48 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::BF_cap_vers_la_zone_de_distrib_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::capture_State::~capture_State() {
}

// to manage the event time_out
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::capture_State::time_out(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.recule");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._recule_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::capture_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::capture_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.capture");
#endif
  // ferme le pince interne souleve
  serialPrint(master->getPortSerie(),"P5 \n");
  master->set_time_out(300);
  
  master->get_gestionnaire_mission()->get_mission_distrib()->capture_gobelet_done();
  master->get_gestionnaire_mission()->get_element_robot()->gobelet_saisie();
  cout<<"gobelet attrape!"<<endl;
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::capture_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::~capture_de_gobelet_escalier_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._deplacement_cible_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.deplacement cible");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._deplacement_cible_state.create(stm);
    }
}

// to manage the exit point 'sortie capture gobelet', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::_exit1(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib");
#endif
      if (!master->get_gestionnaire_mission()->mission_distrib()->is_netoyage_zone_done() ) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier");
#endif
        stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state.create(stm);
      }
      else if (mission_distrib.is_netoyage_zone_done() ) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.sortie zone");
#endif
        stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier");
#endif
  // capture d gobelet pres de l'escalier
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::~mission_pillage_distrib_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib");
#endif
  // pille le distrib et les pillier autour
  // mission quart haut, capture du gobelet pres de l'escalier
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

// to manage the exit point 'sortie pillage distrib', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::_exit6(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
      stm._mae_murphy_state._jeu_state._decision_state.create(stm);
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::waypoint_init_State::~waypoint_init_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::waypoint_init_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._preparation_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.preparation");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._preparation_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::waypoint_init_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::waypoint_init_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::waypoint_init_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init");
#endif
  // rejoindre un point initial
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::preparation_State::~preparation_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::preparation_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade");
#endif
      {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._depot_solo_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.depot solo");
#endif
        stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._depot_solo_state.create(stm);
      }
      else {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._depot_double_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.depot double");
#endif
        stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._depot_double_state.create(stm);
      }
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::preparation_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::preparation_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::sortie_douce_State::~sortie_douce_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::sortie_douce_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::depot_double_State::~depot_double_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::depot_double_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._sortie_douce_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.sortie douce");
#endif
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::depot_double_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::depot_double_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::depot_solo_State::~depot_solo_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::depot_solo_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._sortie_douce_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.sortie douce");
#endif
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::depot_solo_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::depot_solo_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::~mission_depot_tour_estrade_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::create(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state.create(stm);
    }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

// to manage the exit point 'sortie', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::_exit10(MAE_MURPHY & stm) {
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::~decision_State() {
}

// to manage the event mission_distrib
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::mission_distrib(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state.create(stm);
    }
}

// to manage the event mission_depot_tour
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::mission_depot_tour(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state.create(stm);
    }
}

// to manage the event mission_zone_ennemie
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::mission_zone_ennemie(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state.create(stm);
    }
}

// to manage the event mission_chiage
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::mission_chiage(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage");
#endif
      stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state.create(stm);
    }
}

// to manage the event mission_zone_centrale
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::mission_zone_centrale(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale");
#endif
      stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state.create(stm);
    }
}

// to manage the event mission_depot_estrade
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::mission_depot_estrade(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.decision");
#endif
  cout<<"DECISION DE MISSION"<<endl;
  master->get_gestionnaire_mission()->decision_mission();
  
  // decision du gestionnaire de mission
  // consulte les mission restante à faire et dans quel ordre
  // etat de depart apres sortie d'evitement 
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

// to manage the event mission_claps
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::decision_State::mission_claps(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps");
#endif
      stm._mae_murphy_state._jeu_state._mission_claps_state.create(stm);
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::waypoint_initial_State::~waypoint_initial_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::waypoint_initial_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::waypoint_initial_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial");
#endif
  // en BF droite
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::waypoint_initial_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state;
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::waypoint_initial_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
      {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.claps central");
#endif
        stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state.create(stm);
      }
      else {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet");
#endif
        stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state.create(stm);
      }
      else {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant");
#endif
        stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state.create(stm);
      }
      return (bool) 1;
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::faire_chier_en_zizagant_State::~faire_chier_en_zizagant_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::faire_chier_en_zizagant_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::faire_chier_en_zizagant_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant");
#endif
  // mission qui n'a pas de prix
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::faire_chier_en_zizagant_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::depot_gobelet_State::~depot_gobelet_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::depot_gobelet_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::depot_gobelet_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet");
#endif
  // mission à 4 pts
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::depot_gobelet_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::claps_central_State::~claps_central_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::claps_central_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::claps_central_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.claps central");
#endif
  // mission à 5pts
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::claps_central_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state;
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::claps_central_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state.create(stm);
      return (bool) 1;
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::~mission_zone_ennemie_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state.create(stm);
    }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
  // claps ennemi
  // depot de goblets cinéma adverse
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::sortie_de_zone_de_depart_State::~sortie_de_zone_de_depart_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::sortie_de_zone_de_depart_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
      stm._mae_murphy_state._jeu_state._decision_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::sortie_de_zone_de_depart_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::sortie_de_zone_de_depart_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.sortie de zone de depart");
#endif
  // avance de 200mm (400mm avec le recalage)
  // attention si on laisse coop'r derrière ou devant
  serialPrint(master->getPortSerie(),"S4 200 \n");
  master->get_gestionnaire_mission()->commencement_fin();
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::sortie_de_zone_de_depart_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::way_point_initial_State::~way_point_initial_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::way_point_initial_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.avance");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._avance_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::way_point_initial_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::way_point_initial_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::sortie_State::~sortie_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::sortie_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._exit9(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::sortie_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::sortie_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::recule_State::~recule_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::recule_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._sortie_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.sortie");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._sortie_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::recule_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::recule_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::avance_State::~avance_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::avance_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart");
#endif
      {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._depot_des_deux_tour_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.depot des deux tour");
#endif
        stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._depot_des_deux_tour_state.create(stm);
      }
      else {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._depot_une_tour_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.depot une tour");
#endif
        stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._depot_une_tour_state.create(stm);
      }
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::avance_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::avance_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::depot_une_tour_State::~depot_une_tour_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::depot_une_tour_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.recule");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._recule_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::depot_une_tour_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::depot_une_tour_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::depot_des_deux_tour_State::~depot_des_deux_tour_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::depot_des_deux_tour_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.recule");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._recule_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::depot_des_deux_tour_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::depot_des_deux_tour_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::~mission_depot_de_tour_zone_depart_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::create(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state.create(stm);
    }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

// to manage the exit point 'sortie ', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::_exit9(MAE_MURPHY & stm) {
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_rush_zone_centrale_State::~mission_rush_zone_centrale_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_rush_zone_centrale_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_rush_zone_centrale_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_rush_zone_centrale_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale");
#endif
  // on va rusher les trois stands centraux
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_du_stand_sur_la_route_State::~chope_du_stand_sur_la_route_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_du_stand_sur_la_route_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_gobelet_et_des_stands_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du gobelet et des stands");
#endif
      stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_gobelet_et_des_stands_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_du_stand_sur_la_route_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_du_stand_sur_la_route_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_claps_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::pose_seconde_pile_zone_de_depart_State::~pose_seconde_pile_zone_de_depart_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::pose_seconde_pile_zone_de_depart_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_claps_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_stand_milieu_State::~chope_stand_milieu_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_stand_milieu_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps");
#endif
      stm._mae_murphy_state._jeu_state._mission_claps_state._exit8(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_stand_milieu_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_stand_milieu_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_claps_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::pose_pile_State::~pose_pile_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::pose_pile_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_stand_milieu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope stand milieu");
#endif
      stm._mae_murphy_state._jeu_state._mission_claps_state._chope_stand_milieu_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::pose_pile_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::pose_pile_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_claps_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::decision_State::~decision_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::decision_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_claps_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_stand_pres_estrade_State::~chope_stand_pres_estrade_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_stand_pres_estrade_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._pose_pile_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.pose pile");
#endif
      stm._mae_murphy_state._jeu_state._mission_claps_state._pose_pile_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_stand_pres_estrade_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_stand_pres_estrade_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_claps_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::claps_2_State::~claps_2_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::claps_2_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_stand_pres_estrade_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope stand pres estrade");
#endif
      stm._mae_murphy_state._jeu_state._mission_claps_state._chope_stand_pres_estrade_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::claps_2_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::claps_2_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_claps_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::claps_1_State::~claps_1_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::claps_1_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._claps_2_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.claps 2");
#endif
      stm._mae_murphy_state._jeu_state._mission_claps_state._claps_2_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::claps_1_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::claps_1_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_claps_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_du_gobelet_et_des_stands_State::~chope_du_gobelet_et_des_stands_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_du_gobelet_et_des_stands_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._claps_1_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.claps 1");
#endif
      stm._mae_murphy_state._jeu_state._mission_claps_state._claps_1_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_du_gobelet_et_des_stands_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_du_gobelet_et_des_stands_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_claps_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::~mission_claps_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_stand_sur_la_route_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du stand sur la route");
#endif
      stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_stand_sur_la_route_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps");
#endif
  // part vers le bas en direction des claps
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

// to manage the exit point 'fin claps', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::_exit8(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
      stm._mae_murphy_state._jeu_state._decision_state.create(stm);
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::point_de_depart_State::~point_de_depart_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::point_de_depart_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::point_de_depart_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart");
#endif
  // rejoindre devant la zone de depart
  // en BF droite sans cap final
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::point_de_depart_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::point_de_depart_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._orientation_avant_reculage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.orientation avant reculage");
#endif
      stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._orientation_avant_reculage_state.create(stm);
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::sortie_State::~sortie_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::sortie_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage");
#endif
      stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._exit7(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::sortie_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::sortie_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.sortie");
#endif
  // aller devant la zone de depart
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::sortie_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_gobelet_State::~drop_gobelet_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_gobelet_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._sortie_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.sortie");
#endif
      stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._sortie_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_gobelet_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_gobelet_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop gobelet");
#endif
  // drop si present
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_gobelet_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_pop_corn_State::~drop_pop_corn_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_pop_corn_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._drop_gobelet_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop gobelet");
#endif
      stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._drop_gobelet_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_pop_corn_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_pop_corn_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop pop corn");
#endif
  // drop si present
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_pop_corn_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::capture_de_balle_State::~capture_de_balle_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::capture_de_balle_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._drop_pop_corn_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop pop corn");
#endif
      stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._drop_pop_corn_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::capture_de_balle_State::create(MAE_MURPHY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::capture_de_balle_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::Recalage_State::~Recalage_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::Recalage_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::Recalage_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
}

// to manage the event blocage
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::Recalage_State::blocage(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._capture_de_balle_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.capture de balle");
#endif
      stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._capture_de_balle_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::Recalage_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.Recalage");
#endif
  // vers le centre de la table
  serialPrint(master->getPortSerie(),"S2 \n");
  
  // set X, Y CAP??
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::orientation_avant_reculage_State::~orientation_avant_reculage_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::orientation_avant_reculage_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::orientation_avant_reculage_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::orientation_avant_reculage_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._recalage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.Recalage");
#endif
      stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._recalage_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::orientation_avant_reculage_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.orientation avant reculage");
#endif
  if(master->is_Jaune()){
  // vers le centre de la table
  serialPrint(master->getPortSerie(),"S3 0 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S3 180 \n");
  }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::~mission_attrap_balle_et_chiage_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart");
#endif
      stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage");
#endif
  // de but : pres de zone de depart
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

// to manage the exit point 'sortie mission drop', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::_exit7(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
      stm._mae_murphy_state._jeu_state._decision_state.create(stm);
    }
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::~Jeu_State() {
}

// to manage the event evitement
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::evitement(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Evitement");
#endif
      stm._mae_murphy_state._evitement_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      if (master->get_gestionnaire_mission()->commencement() == true) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._sortie_de_zone_de_depart_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.sortie de zone de depart");
#endif
        stm._mae_murphy_state._jeu_state._sortie_de_zone_de_depart_state.create(stm);
      }
      else if (master->get_gestionnaire_mission()->commencement() == false) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
        stm._mae_murphy_state._jeu_state._decision_state.create(stm);
      }
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu");
#endif
  cout<<"ETAT JEU"<<endl;
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state;
}

MAE_MURPHY::MAE_MURPHY_State::~MAE_MURPHY_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::create(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._initialisation_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Initialisation");
#endif
      stm._mae_murphy_state._initialisation_state.create(stm);
    }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::_upper(MAE_MURPHY &) {
    return 0;
}

MAE_MURPHY::MAE_MURPHY() {
    _current_state = 0;
}

MAE_MURPHY::~MAE_MURPHY() {
}

// the operation you call to signal the event create
bool MAE_MURPHY::create() {
  if (_current_state == 0)
  (_current_state = &(*this)._mae_murphy_state)->create(*this);
  return (_current_state != 0);
}

// the operation you call to signal the event strat_mis
bool MAE_MURPHY::strat_mis() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger strat_mis");
#endif
      _current_state->strat_mis(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event evitement
bool MAE_MURPHY::evitement() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger evitement");
#endif
      _current_state->evitement(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event assFini
bool MAE_MURPHY::assFini() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger assFini");
#endif
      _current_state->assFini(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event time_out
bool MAE_MURPHY::time_out() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger time_out");
#endif
      _current_state->time_out(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event blocage
bool MAE_MURPHY::blocage() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger blocage");
#endif
      _current_state->blocage(*this);
    }
    return (_current_state != 0);
}

// to execute the current state 'do activity'
void MAE_MURPHY::doActivity() {
    _current_state->_do(*this);
}

// execution done, internal
void MAE_MURPHY::_final() {
    _current_state = 0;
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : final state reached");
#endif
}

// the operation you call to signal the event start_enleve
bool MAE_MURPHY::start_enleve() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger start_enleve");
#endif
      _current_state->start_enleve(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_distrib
bool MAE_MURPHY::mission_distrib() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_distrib");
#endif
      _current_state->mission_distrib(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_depot_tour
bool MAE_MURPHY::mission_depot_tour() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_depot_tour");
#endif
      _current_state->mission_depot_tour(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_zone_ennemie
bool MAE_MURPHY::mission_zone_ennemie() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_zone_ennemie");
#endif
      _current_state->mission_zone_ennemie(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_chiage
bool MAE_MURPHY::mission_chiage() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_chiage");
#endif
      _current_state->mission_chiage(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_zone_centrale
bool MAE_MURPHY::mission_zone_centrale() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_zone_centrale");
#endif
      _current_state->mission_zone_centrale(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_depot_estrade
bool MAE_MURPHY::mission_depot_estrade() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_depot_estrade");
#endif
      _current_state->mission_depot_estrade(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_claps
bool MAE_MURPHY::mission_claps() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_claps");
#endif
      _current_state->mission_claps(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event pince_ouverte
bool MAE_MURPHY::pince_ouverte() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger pince_ouverte");
#endif
      _current_state->pince_ouverte(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event pince_stand_by
bool MAE_MURPHY::pince_stand_by() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger pince_stand_by");
#endif
      _current_state->pince_stand_by(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event distrib_deboite
bool MAE_MURPHY::distrib_deboite() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger distrib_deboite");
#endif
      _current_state->distrib_deboite(*this);
    }
    return (_current_state != 0);
}

