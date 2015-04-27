class Initialisation_State
!!!149122.cpp!!!	strat_mis(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial");
#endif
    stm._mae_murphy_state._recalage_initial_state.create(stm);
  }
!!!149250.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!149378.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Initialisation");
#endif
cout<<"etat attente"<<endl;
!!!149506.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state;
!!!149378.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Initialisation");
#endif
cout<<"etat attente"<<endl;
