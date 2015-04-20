class deplacement_lateral_State
!!!139778.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!151170.cpp!!!	ass_fini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._attente_recalibration_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.attente recalibration");
#endif
    stm._mae_coop_r_state._jeu_state._attente_recalibration_state.create(stm);
  }
!!!159106.cpp!!!	adversaire(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.Evitement");
#endif
    stm._mae_coop_r_state._jeu_state._evitement_state.create(stm);
  }
!!!159490.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
    stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state.create(stm);
  }
!!!159618.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!159746.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.deplacement lateral");
#endif
if(master->est_Jaune()){
// on part sur la droite, pour 5 tour de roue
serialPrintf (portSerie, "A2 5\n") ;
}
if(master->est_Vert()){
// on part sur la gauche
serialPrintf (portSerie, "A3 5\n") ;
}
!!!159106.cpp!!!	adversaire(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu");
#endif
    if (tour_roue>4) {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
      stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state.create(stm);
    }
    else if (tour_roue<4) {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.Evitement");
#endif
      stm._mae_coop_r_state._jeu_state._evitement_state.create(stm);
    }
  }
!!!159746.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.deplacement lateral");
#endif
if(master->est_Jaune()){
// on part sur la droite, pour 5 tour de roue
serialPrintf (portSerie, "A2 5\n") ;
}
if(master->est_Vert()){
// on part sur la gauche
serialPrintf (portSerie, "A3 5\n") ;
}
