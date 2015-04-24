
#include "MAE_MURPHY.h"

#include "Master.h"
#include <winringPi.h>
#include <winringSerial.h>

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

// the current state doesn't manage the event adversaire, give it to the upper state
void MAE_MURPHY::AnyState::adversaire(MAE_MURPHY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->adversaire(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition adversaire not expected");
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
  cout<<"etat attente"<<endl;
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

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_State::~Recule_State() {
}

// to manage the event blocage
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_State::blocage(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._set_x_cap_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.set X CAP");
#endif
      stm._mae_murphy_state._recalage_initial_state._set_x_cap_state.create(stm);
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
  // recule (recalage au cul)
  serialPrint(master->getPortSerie(),"S2 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Re_set_x_cap_State::~Re_set_x_cap_State() {
}

// to manage the event time_out
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Re_set_x_cap_State::time_out(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial");
#endif
      stm._mae_murphy_state._recalage_initial_state._exit3(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Re_set_x_cap_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Re_set_x_cap_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.Re set x cap");
#endif
  if(master->is_Jaune()){
  // terrain, bordure, robot (axe de rotation)
  serialPrint(master->getPortSerie(),"S0 -1334 996 -90 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S0 1334 996 90 \n");
  }
  master->set_time_out(300);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Re_set_x_cap_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_Y_State::~set_Y_State() {
}

// to manage the event time_out
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_Y_State::time_out(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.avance");
#endif
      stm._mae_murphy_state._recalage_initial_state._avance_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_Y_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_Y_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.set Y");
#endif
  // Y = 800 + 96 = 896
  // terrain, bordure, robot (axe de rotation)
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"S0 -1214 896 0 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S0 1214 896 0 \n");
  }
  master->set_time_out(300);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_Y_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_un_peu_pour_tourner_State::~avance_un_peu_pour_tourner_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_un_peu_pour_tourner_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._bf_90_deg_vers_les_marches_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.BF 90 deg vers les marches");
#endif
      stm._mae_murphy_state._recalage_initial_state._bf_90_deg_vers_les_marches_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_un_peu_pour_tourner_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_un_peu_pour_tourner_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.avance un peu pour tourner");
#endif
  // avance de 120mm
  serialPrint(master->getPortSerie(),"S4 120 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_un_peu_pour_tourner_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_depart_State::~Recule_depart_State() {
}

// to manage the event blocage
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_depart_State::blocage(MAE_MURPHY & stm) {
    _do(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._re_set_x_cap_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.Re set x cap");
#endif
      stm._mae_murphy_state._recalage_initial_state._re_set_x_cap_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_depart_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_depart_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.Recule depart");
#endif
  serialPrint(master->getPortSerie(),"S2 \n");
}

// perform the 'do activity'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_depart_State::_do(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute do behavior of .MAE_MURPHY.Recalage Initial.Recule depart");
#endif
  serialPrint(master->getPortSerie(),"S1 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_depart_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_State::~avance_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._bf_90_deg_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.BF -90 deg");
#endif
      stm._mae_murphy_state._recalage_initial_state._bf_90_deg_state.create(stm);
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
  // avance de 120mm
  serialPrint(master->getPortSerie(),"S4 120 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::avance_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_State::~BF_90_deg_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._recule_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.Recule depart");
#endif
      stm._mae_murphy_state._recalage_initial_state._recule_depart_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.BF -90 deg");
#endif
  if(master->is_Jaune()){
  serialPrint(master->getPortSerie(),"S3 -90 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S3 90 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_bordure_claps_State::~Recule_bordure_claps_State() {
}

// to manage the event blocage
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_bordure_claps_State::blocage(MAE_MURPHY & stm) {
    _do(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._set_y_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.set Y");
#endif
      stm._mae_murphy_state._recalage_initial_state._set_y_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_bordure_claps_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_bordure_claps_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.Recule bordure claps");
#endif
  serialPrint(master->getPortSerie(),"S2 \n");
}

// perform the 'do activity'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_bordure_claps_State::_do(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute do behavior of .MAE_MURPHY.Recalage Initial.Recule bordure claps");
#endif
  serialPrint(master->getPortSerie(),"S1 \n");
  // pour recup le vrai Y et le mettre dans le S0
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::Recule_bordure_claps_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_vers_les_marches_State::~BF_90_deg_vers_les_marches_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_vers_les_marches_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._recule_bordure_claps_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.Recule bordure claps");
#endif
      stm._mae_murphy_state._recalage_initial_state._recule_bordure_claps_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_vers_les_marches_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_vers_les_marches_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.BF 90 deg vers les marches");
#endif
  if(master->is_Jaune()){
  // tourne vers les marches
  serialPrint(master->getPortSerie(),"S3 0 \n");
  }
  if(master->is_Vert()){
  // tourne vers les marches
  serialPrint(master->getPortSerie(),"S3 0 \n");
  }
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_vers_les_marches_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._recalage_initial_state;
}

MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_X_CAP_State::~set_X_CAP_State() {
}

// to manage the event time_out
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_X_CAP_State::time_out(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._avance_un_peu_pour_tourner_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.avance un peu pour tourner");
#endif
      stm._mae_murphy_state._recalage_initial_state._avance_un_peu_pour_tourner_state.create(stm);
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_X_CAP_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_X_CAP_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.set X CAP");
#endif
  if(master->is_Jaune()){
  // X = -1500 + 70 +96 = -1334
  // terrain, bordure, robot (axe de rotation)
  serialPrint(master->getPortSerie(),"S0 -1334 0 -90 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S0 1334 0 90 \n");
  }
  master->set_time_out(300);
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::set_X_CAP_State::_upper(MAE_MURPHY & stm) {
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

// to manage the exit point 'sortie recalage', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::_exit3(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._startin_block_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.startin' block");
#endif
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial");
#endif
  cout<<"etat recalage"<<endl;
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Recalage_Initial_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state;
}

MAE_MURPHY::MAE_MURPHY_State::Evitement_State::~Evitement_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Evitement_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu");
#endif
      stm._mae_murphy_state._jeu_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Evitement_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Evitement_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Evitement");
#endif
  cout<<"etat évitement"<<endl;
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Evitement_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state;
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

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::~vidage_distributeur_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::~capture_stand_bordure_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::~capture_stands_cote_escalier_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
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

// to manage the event adversaire
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::deplacement_cible_State::adversaire(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._exit1(stm);
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
  serialPrint(master->getPortSerie(),"S5 -590 1198 -35 \n");
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
  serialPrint(master->getPortSerie(),"S3 48 \n");
  }
  if(master->is_Vert()){
  serialPrint(master->getPortSerie(),"S3 -48 \n");
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
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._bf_cap_vers_la_zone_de_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.BF cap vers la zone de distrib");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._bf_cap_vers_la_zone_de_distrib_state.create(stm);
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
  serialPrint(master->getPortSerie(),"??? \n");
  master->set_time_out(300);
  //mettre une varible sur le master pour dire qu'on a capturé un gobelet
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::capture_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::~capture_de_gobelet_escalier_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::create(MAE_MURPHY & stm) {
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
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::~mission_pillage_distrib_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::create(MAE_MURPHY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_de_la_zone_de_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.sortie de la zone de depart");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_de_la_zone_de_depart_state.create(stm);
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

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::waypoint_initial_State::~waypoint_initial_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::waypoint_initial_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
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

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::~mission_zone_ennemie_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::create(MAE_MURPHY & stm) {
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

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::sortie_de_zone_de_depart_State::~sortie_de_zone_de_depart_State() {
}

// to manage the event assFini
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::sortie_de_zone_de_depart_State::assFini(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._etat_de_decision_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.etat de decision");
#endif
      stm._mae_murphy_state._jeu_state._etat_de_decision_state.create(stm);
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
  // avance de 400mm
  // attention si on laisse coop'r derrière ou devant
  serialPrint(master->getPortSerie(),"S4 400 \n");
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::sortie_de_zone_de_depart_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_State::~mission_depot_de_tour_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::etat_de_decision_State::~etat_de_decision_State() {
}

bool MAE_MURPHY::MAE_MURPHY_State::Jeu_State::etat_de_decision_State::_completion(MAE_MURPHY & stm) {
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::etat_de_decision_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::etat_de_decision_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.etat de decision");
#endif
  // consultation du gestionnaire de mission
  // ou sequentiel
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::etat_de_decision_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
}

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_rush_zone_centrale_State::~mission_rush_zone_centrale_State() {
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_rush_zone_centrale_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
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
      stm._mae_murphy_state._jeu_state._mission_claps_state._exit2(stm);
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

// to manage the exit point 'fin claps', defined because probably shared
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_claps_State::_exit2(MAE_MURPHY & stm) {
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

MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::~mission_attrap_balle_et_chiage_State() {
}

// to manage the event create
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::create(MAE_MURPHY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage");
#endif
  // zone de depart
}

// returns the state containing the current
MAE_MURPHY::AnyState * MAE_MURPHY::MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::_upper(MAE_MURPHY & stm) {
    return &stm._mae_murphy_state._jeu_state;
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
      stm._set_currentState(stm._mae_murphy_state._jeu_state._sortie_de_zone_de_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.sortie de zone de depart");
#endif
      stm._mae_murphy_state._jeu_state._sortie_de_zone_de_depart_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_MURPHY::MAE_MURPHY_State::Jeu_State::_doentry(MAE_MURPHY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu");
#endif
  cout<<"etat game"<<endl;
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

// the operation you call to signal the event adversaire
bool MAE_MURPHY::adversaire() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger adversaire");
#endif
      _current_state->adversaire(*this);
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

