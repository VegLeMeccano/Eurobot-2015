
#include "MAE_COOP_R.h"
//#include "extern_declaration.h"
#include <wiringSerial.h>
int portSerie;

MAE_COOP_R::AnyState::~AnyState() {
}

// perform the 'do activity'
void MAE_COOP_R::AnyState::_do(MAE_COOP_R &) {
}

void MAE_COOP_R::AnyState::create(MAE_COOP_R &) {
}

// the current state doesn't manage the event stratEnleve, give it to the upper state
void MAE_COOP_R::AnyState::stratEnleve(MAE_COOP_R & stm) {
    AnyState * st = _upper(stm);

    if (st != 0)
      st->stratEnleve(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition stratEnleve not expected");
#endif
}

// the current state doesn't manage the event evitement, give it to the upper state
void MAE_COOP_R::AnyState::evitement(MAE_COOP_R & stm) {
    AnyState * st = _upper(stm);

    if (st != 0)
      st->evitement(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition evitement not expected");
#endif
}

// the current state doesn't manage the event time_out, give it to the upper state
void MAE_COOP_R::AnyState::time_out(MAE_COOP_R & stm) {
    AnyState * st = _upper(stm);

    if (st != 0)
      st->time_out(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition time_out not expected");
#endif
}

// the current state doesn't manage the event ass_fini, give it to the upper state
void MAE_COOP_R::AnyState::ass_fini(MAE_COOP_R & stm) {
    AnyState * st = _upper(stm);

    if (st != 0)
      st->ass_fini(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition ass_fini not expected");
#endif
}

MAE_COOP_R::MAE_COOP_R_State::Attente_State::~Attente_State() {
}

// to manage the event stratEnleve
void MAE_COOP_R::MAE_COOP_R_State::Attente_State::stratEnleve(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu");
#endif
      stm._mae_coop_r_state._jeu_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Attente_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Attente_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Attente");
#endif
  cout<<"etat attente"<<endl;
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Attente_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state;
}

MAE_COOP_R::MAE_COOP_R_State::Evitement_State::~Evitement_State() {
}

bool MAE_COOP_R::MAE_COOP_R_State::Evitement_State::_completion(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu");
#endif
      stm._mae_coop_r_state._jeu_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Evitement_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Evitement_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Evitement");
#endif
  cout<<"etat évitement"<<endl;
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Evitement_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_State::~attente_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event time_out
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_State::time_out(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.deplacement lateral");
#endif
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.attente");
#endif
  //master->set_time_out(100);
  //master->set_time_out(10);
  cout << "portSerie -> "<<portSerie << endl;
  //serialPrintf(portSerie,"D0 ");
  serialPrintf (portSerie, "D0 \n") ;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_de_jeu_State::~fin_de_jeu_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_de_jeu_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_2_State::~remonte_2_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_2_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_second_tapis_State::~preparation_pose_second_tapis_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_second_tapis_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_droite_State::~decalage_droite_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_droite_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_State::~remonte_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_premier_tapis_State::~preparation_pose_premier_tapis_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_premier_tapis_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_gauche_State::~decalage_gauche_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_gauche_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::ascension_State::~ascension_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::ascension_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_recalibration_State::~attente_recalibration_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_recalibration_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event time_out
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_recalibration_State::time_out(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._ascension_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.ascension");
#endif
    }
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deplacement_lateral_State::~deplacement_lateral_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deplacement_lateral_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event ass_fini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deplacement_lateral_State::ass_fini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._attente_recalibration_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.attente recalibration");
#endif
    }
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::~Jeu_State() {
}

// to manage the event evitement
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::evitement(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Evitement");
#endif
      stm._mae_coop_r_state._evitement_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::create(MAE_COOP_R & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._attente_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.attente");
#endif
      stm._mae_coop_r_state._jeu_state._attente_state.create(stm);
    }
}

bool MAE_COOP_R::MAE_COOP_R_State::Jeu_State::_completion(MAE_COOP_R & stm) {
    {
      return (bool) 1;
    }
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu");
#endif
  cout<<"etat game"<<endl;
  serialPrintf (portSerie, "D0 \n") ;
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state;
}

MAE_COOP_R::MAE_COOP_R_State::~MAE_COOP_R_State() {
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::create(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._attente_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Attente");
#endif
      stm._mae_coop_r_state._attente_state.create(stm);
    }
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::_upper(MAE_COOP_R &) {
    return 0;
}

MAE_COOP_R::MAE_COOP_R() {
    _current_state = 0;
}

MAE_COOP_R::~MAE_COOP_R() {
}

// the operation you call to signal the event create
bool MAE_COOP_R::create() {
  if (_current_state == 0)
  (_current_state = &(*this)._mae_coop_r_state)->create(*this);
  return (_current_state != 0);
}

// the operation you call to signal the event stratEnleve
bool MAE_COOP_R::stratEnleve() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger stratEnleve");
#endif
      _current_state->stratEnleve(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event evitement
bool MAE_COOP_R::evitement() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger evitement");
#endif
      _current_state->evitement(*this);
    }
    return (_current_state != 0);
}

// to execute the current state 'do activity'
void MAE_COOP_R::doActivity() {
    _current_state->_do(*this);
}

// execution done, internal
void MAE_COOP_R::_final() {
    _current_state = 0;
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : final state reached");
#endif
}

// the operation you call to signal the event time_out
bool MAE_COOP_R::time_out() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger time_out");
#endif
      _current_state->time_out(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event ass_fini
bool MAE_COOP_R::ass_fini() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger ass_fini");
#endif
      _current_state->ass_fini(*this);
    }
    return (_current_state != 0);
}

