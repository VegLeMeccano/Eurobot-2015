class Recalage_Initial_State
!!!241026.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.Recule");
#endif
    stm._mae_murphy_state._recalage_initial_state._recule_state.create(stm);
  }
!!!242178.cpp!!!	_exit27(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._startin_block_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.startin' block");
#endif
    stm._mae_murphy_state._startin_block_state.create(stm);
  }
!!!243330.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial");
#endif
cout<<"ETAT RECALAGE INITIAL"<<endl;
!!!243458.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state;
!!!243330.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial");
#endif
cout<<"ETAT RECALAGE INITIAL"<<endl;
!!!243330.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial");
#endif
cout<<"ETAT RECALAGE INITIAL"<<endl;
