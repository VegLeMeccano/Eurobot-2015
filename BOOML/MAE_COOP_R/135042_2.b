class Jeu_State
!!!138626.cpp!!!	create(inout stm : MAE_COOP_R) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._attente_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.attente");
#endif
    stm._mae_coop_r_state._jeu_state._attente_state.create(stm);
  }
!!!138754.cpp!!!	_completion(inout stm : MAE_COOP_R) : bool
  {
    return (bool) 1;
  }
!!!142850.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu");
#endif
cout<<"etat game"<<endl;
!!!142978.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state;
!!!142850.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu");
#endif
cout<<"etat game"<<endl;
