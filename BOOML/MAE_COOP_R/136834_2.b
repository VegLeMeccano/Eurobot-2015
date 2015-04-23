class fin_deplacement_lateral_State
!!!146818.cpp!!!	time_out(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._bumper_en_bas_des_marches_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.bumper en bas des marches");
#endif
    stm._mae_coop_r_state._jeu_state._bumper_en_bas_des_marches_state.create(stm);
  }
!!!146946.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!147074.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
cout<<"[BOUML] etat fin de deplacement lateral"<<endl;
// recalage des roues alignement
// desactivation de l'evitement
serialPrintf (master->getPortSerie(), "E0 \n") ;
master->set_time_out(2000);
!!!147202.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
