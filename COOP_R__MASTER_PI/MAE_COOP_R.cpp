
#include "MAE_COOP_R.h"

#include "Master.h"
#include <wiringPi.h>
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

// the current state doesn't manage the event adversaire, give it to the upper state
void MAE_COOP_R::AnyState::adversaire(MAE_COOP_R & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->adversaire(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition adversaire not expected");
#endif
}

// the current state doesn't manage the event assFini, give it to the upper state
void MAE_COOP_R::AnyState::assFini(MAE_COOP_R & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->assFini(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition assFini not expected");
#endif
}

// the current state doesn't manage the event ioFini, give it to the upper state
void MAE_COOP_R::AnyState::ioFini(MAE_COOP_R & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->ioFini(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition ioFini not expected");
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
  cout<<"portSerie : "<<portSerie<<endl
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Attente_State::_upper(MAE_COOP_R & stm) {
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
      stm._mae_coop_r_state._jeu_state._deplacement_lateral_state.create(stm);
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
  master->set_time_out(100);
  // activation de l'evitement
  serialPrintf (portSerie, "E1 \n") ;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deployement_State::~deployement_State() {
}

// to manage the event time_out
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deployement_State::time_out(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._ascension_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.ascension");
#endif
      stm._mae_coop_r_state._jeu_state._ascension_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deployement_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deployement_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.deployement");
#endif
  master->set_time_out(2000);
  // deployement des chaines secondaires
  serialPrintf (portSerie, "S5 \n") ;
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deployement_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::reprise_State::~reprise_State() {
}

// to manage the event adversaire
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::reprise_State::adversaire(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.Evitement");
#endif
      stm._mae_coop_r_state._jeu_state._evitement_state.create(stm);
    }
}

// to manage the event assFini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::reprise_State::assFini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
      stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::reprise_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::reprise_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.reprise");
#endif
  if(master->get_cycle_attente()>5){
  // desactivation de l'evitement :: on pousse le mec, rien a battre!
  serialPrintf (portSerie, "E0 \n") ;
  }
  else
  {
  	// reprise asserv en cours
  	serialPrintf (portSerie, "A5 \n") ;
  }
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::reprise_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_deplacement_lateral_State::~fin_deplacement_lateral_State() {
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_deplacement_lateral_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_deplacement_lateral_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
  // recalage des roues alignement
  // desactivation de l'evitement
  serialPrintf (portSerie, "E0 \n") ;
  master->set_time_out(2000);
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_deplacement_lateral_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event time_out
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_deplacement_lateral_State::time_out(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._bumper_en_bas_des_marches_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.bumper en bas des marches");
#endif
      stm._mae_coop_r_state._jeu_state._bumper_en_bas_des_marches_state.create(stm);
    }
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::bumper_en_bas_des_marches_State::~bumper_en_bas_des_marches_State() {
}

// to manage the event assFini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::bumper_en_bas_des_marches_State::assFini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._attente_recalibration_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.attente recalibration");
#endif
      stm._mae_coop_r_state._jeu_state._attente_recalibration_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::bumper_en_bas_des_marches_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::bumper_en_bas_des_marches_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.bumper en bas des marches");
#endif
  // on va bumper en bas des marches
  // on suppose que c'est pas possible qu'il y ait n con qui passe devant... a verifier
  serialPrintf (portSerie, "A6 \n") ;
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::bumper_en_bas_des_marches_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::Evitement_State::~Evitement_State() {
}

// to manage the event time_out
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::Evitement_State::time_out(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._reprise_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.reprise");
#endif
      stm._mae_coop_r_state._jeu_state._reprise_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::Evitement_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::Evitement_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.Evitement");
#endif
  // si on a atteint au moins 4 tours de roues, on stoppe l'asserv
  // on raligne les roues (finir, ou attente d'asserv toujours sur un tour de roue fix)
  serialPrintf (portSerie, "A \n") ;
  
  // mettre des etats de transistions...
  master->set_time_out(1000);
  master->cycle_attente_incremente();
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::Evitement_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_de_jeu_State::~fin_de_jeu_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_de_jeu_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_de_jeu_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::fin_de_jeu_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.fin de jeu");
#endif
  // fin de mission
  cout<<"########  FIN DE JEU  ###########"<<endl;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_2_State::~remonte_2_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_2_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event ioFini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_2_State::ioFini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_de_jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin de jeu");
#endif
      stm._mae_coop_r_state._jeu_state._fin_de_jeu_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_2_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_2_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.remonte 2");
#endif
  // replis du premier tapis
  serialPrintf (portSerie, "T3 \n") ;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_second_tapis_State::~preparation_pose_second_tapis_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_second_tapis_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event ioFini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_second_tapis_State::ioFini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._remonte_2_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.remonte 2");
#endif
      stm._mae_coop_r_state._jeu_state._remonte_2_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_second_tapis_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_second_tapis_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.preparation pose second tapis");
#endif
  // deployement du second tapis
  serialPrintf (portSerie, "T2 \n") ;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_droite_State::~decalage_droite_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_droite_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event assFini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_droite_State::assFini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._preparation_pose_second_tapis_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.preparation pose second tapis");
#endif
      stm._mae_coop_r_state._jeu_state._preparation_pose_second_tapis_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_droite_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_droite_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.decalage droite");
#endif
  // decalage gauche
  serialPrintf (portSerie, "A2 \n") ;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_State::~remonte_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event ioFini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_State::ioFini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._decalage_droite_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.decalage droite");
#endif
      stm._mae_coop_r_state._jeu_state._decalage_droite_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::remonte_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.remonte");
#endif
  // replis du premier tapis
  serialPrintf (portSerie, "T1 \n") ;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_premier_tapis_State::~preparation_pose_premier_tapis_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_premier_tapis_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event ioFini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_premier_tapis_State::ioFini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._remonte_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.remonte");
#endif
      stm._mae_coop_r_state._jeu_state._remonte_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_premier_tapis_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::preparation_pose_premier_tapis_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.preparation pose premier tapis");
#endif
  // deployement du premier tapis
  serialPrintf (portSerie, "T0 \n") ;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_gauche_State::~decalage_gauche_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_gauche_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event assFini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_gauche_State::assFini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._preparation_pose_premier_tapis_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.preparation pose premier tapis");
#endif
      stm._mae_coop_r_state._jeu_state._preparation_pose_premier_tapis_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_gauche_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::decalage_gauche_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.decalage gauche");
#endif
  // decalage gauche
  serialPrintf (portSerie, "A3 \n") ;
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::ascension_State::~ascension_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::ascension_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event assFini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::ascension_State::assFini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._decalage_gauche_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.decalage gauche");
#endif
      stm._mae_coop_r_state._jeu_state._decalage_gauche_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::ascension_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::ascension_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.ascension");
#endif
  // grimpe
  serialPrintf (portSerie, "S6 \n") ;
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
      stm._mae_coop_r_state._jeu_state._attente_recalibration_state._doexit(stm);
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._deployement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.deployement");
#endif
      stm._mae_coop_r_state._jeu_state._deployement_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_recalibration_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_recalibration_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.attente recalibration");
#endif
  master->set_time_out(4000);
  // ordre de recalibration de la centrale
  serialPrintf (portSerie, "D4 \n") ;
}

// perform the 'exit behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::attente_recalibration_State::_doexit(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_COOP_R.Jeu.attente recalibration");
#endif
  // ordre de reset angle
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deplacement_lateral_State::~deplacement_lateral_State() {
}

// returns the state containing the current
MAE_COOP_R::AnyState * MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deplacement_lateral_State::_upper(MAE_COOP_R & stm) {
    return &stm._mae_coop_r_state._jeu_state;
}

// to manage the event adversaire
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deplacement_lateral_State::adversaire(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu");
#endif
      if (master->get_tour_roue() >= 4) {
        stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
        stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state.create(stm);
      }
      else if (master->get_tour_roue() <4) {
        stm._set_currentState(stm._mae_coop_r_state._jeu_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_COOP_R.Jeu.Evitement");
#endif
        stm._mae_coop_r_state._jeu_state._evitement_state.create(stm);
      }
    }
}

// to manage the event assFini
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deplacement_lateral_State::assFini(MAE_COOP_R & stm) {
    {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
      stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state.create(stm);
    }
}

// to manage the event create
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deplacement_lateral_State::create(MAE_COOP_R & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_COOP_R::MAE_COOP_R_State::Jeu_State::deplacement_lateral_State::_doentry(MAE_COOP_R & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.deplacement lateral");
#endif
  if(master->is_Jaune()){
  // on part sur la droite, pour 5 tour de roue
  serialPrintf (portSerie, "A2 5\n") ;
  }
  if(master->is_Vert()){
  // on part sur la gauche
  serialPrintf (portSerie, "A3 5\n") ;
  }
}

MAE_COOP_R::MAE_COOP_R_State::Jeu_State::~Jeu_State() {
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

// the operation you call to signal the event adversaire
bool MAE_COOP_R::adversaire() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger adversaire");
#endif
      _current_state->adversaire(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event assFini
bool MAE_COOP_R::assFini() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger assFini");
#endif
      _current_state->assFini(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event ioFini
bool MAE_COOP_R::ioFini() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger ioFini");
#endif
      _current_state->ioFini(*this);
    }
    return (_current_state != 0);
}

