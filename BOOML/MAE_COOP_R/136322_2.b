class remonte_2_State
!!!142594.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!169218.cpp!!!	_completion(inout stm : MAE_COOP_R) : bool
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu");
#endif
    stm._mae_coop_r_state._jeu_state.create(stm);
    return (bool) 1;
  }
!!!169346.cpp!!!	ioFini(inout stm : MAE_COOP_R) : void
  if (_completion(stm)) return;
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_de_jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin de jeu");
#endif
    stm._mae_coop_r_state._jeu_state._fin_de_jeu_state.create(stm);
  }
!!!169474.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
	_completion(stm);
!!!169602.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.remonte 2");
#endif
// replis du premier tapis
serialPrintf (portSerie, "T3 \n") ;
!!!169346.cpp!!!	ioFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_de_jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin de jeu");
#endif
    stm._mae_coop_r_state._jeu_state._fin_de_jeu_state.create(stm);
  }
!!!169474.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!169602.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.remonte 2");
#endif
// replis du premier tapis
serialPrintf (portSerie, "T3 \n") ;
