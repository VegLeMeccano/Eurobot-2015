class fin_deplacement_lateral_State
!!!172290.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._bumper_en_bas_des_marches_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.bumper en bas des marches");
#endif
    stm._mae_coop_r_state._jeu_state._bumper_en_bas_des_marches_state.create(stm);
  }
!!!172418.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!172546.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
// recalage des roues alignement

// desactivation de l'evitement
serialPrintf (portSerie, "E0 \n") ;
!!!172674.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!180354.cpp!!!	time_out(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._bumper_en_bas_des_marches_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.bumper en bas des marches");
#endif
    stm._mae_coop_r_state._jeu_state._bumper_en_bas_des_marches_state.create(stm);
  }
!!!172546.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
// recalage des roues alignement
// desactivation de l'evitement
serialPrintf (portSerie, "E0 \n") ;
master->set_time_out(2000);
