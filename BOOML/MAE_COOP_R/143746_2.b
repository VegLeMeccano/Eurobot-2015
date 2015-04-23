class deployement_State
!!!173442.cpp!!!	time_out(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._ascension_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.ascension");
#endif
    stm._mae_coop_r_state._jeu_state._ascension_state.create(stm);
  }
!!!173570.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!173698.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.deployement");
#endif
cout<<"[BOUML] etat deployement"<<endl;
master->set_time_out(2000);
// deployement des chaines secondaires
serialPrintf (master->getPortSerie(), "S5 \n") ;
!!!173826.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!173698.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.deployement");
#endif
cout<<"[BOUML] etat deployement"<<endl;
master->set_time_out(2000);
// deployement des chaines secondaires
serialPrintf (master->getPortSerie(), "S5 \n") ;
