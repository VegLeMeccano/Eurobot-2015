class attente_recalibration_State
!!!140930.cpp!!!	time_out(inout stm : MAE_COOP_R) : void
  {
    stm._mae_coop_r_state._jeu_state._attente_recalibration_state._doexit(stm);
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._deployement_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.deployement");
#endif
    stm._mae_coop_r_state._jeu_state._deployement_state.create(stm);
  }
!!!141058.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!141186.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.attente recalibration");
#endif
cout<<"[BOUML] etat attente recalibration"<<endl;
master->set_time_out(4000);
// ordre de recalibration de la centrale
serialPrintf (master->getPortSerie(), "D4 \n") ;
!!!141314.cpp!!!	_doexit(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_COOP_R.Jeu.attente recalibration");
#endif
// ordre de reset angle
!!!141442.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
