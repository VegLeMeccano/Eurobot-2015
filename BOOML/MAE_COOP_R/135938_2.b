class remonte_State
!!!141826.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!168066.cpp!!!	ioFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._decalage_droite_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.decalage droite");
#endif
    stm._mae_coop_r_state._jeu_state._decalage_droite_state.create(stm);
  }
!!!168194.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!168322.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.remonte");
#endif
// replis du premier tapis
serialPrintf (portSerie, "T1 \n") ;
!!!168322.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.remonte");
#endif
cout<<"[BOUML] etat remonte tapis 1"<<endl;
// replis du premier tapis
serialPrintf (master->getPortSerie(), "T1 \n") ;
