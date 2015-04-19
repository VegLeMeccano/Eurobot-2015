class Evitement_State
!!!143106.cpp!!!	_completion(inout stm : MAE_COOP_R) : bool
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu");
#endif
    stm._mae_coop_r_state._jeu_state.create(stm);
    return (bool) 1;
  }
!!!143234.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
	_completion(stm);
!!!143362.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Evitement");
#endif
cout<<"etat évitement"<<endl;
!!!143490.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state;
