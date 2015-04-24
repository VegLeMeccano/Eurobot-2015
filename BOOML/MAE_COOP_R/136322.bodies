class remonte_2_State
!!!144898.cpp!!!	ioFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_de_jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin de jeu");
#endif
    stm._mae_coop_r_state._jeu_state._fin_de_jeu_state.create(stm);
  }
!!!145026.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!145154.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.remonte 2");
#endif
cout<<"[BOUML] etat remonte tapis 2"<<endl;
// replis du premier tapis
serialPrintf (master->getPortSerie(), "T3 \n"); 
!!!145282.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
