class Initialisation_State
!!!156162.cpp!!!	start_mis(inout stm : MAE_MURPHY) : void

  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial");
#endif
    stm._mae_murphy_state._recalage_initial_state.create(stm!!!156290.cpp!!!	create(inout stm : MAE_MURPHY) : void
) : void
	_doen!!!156418.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
AE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Initialisation");
#endif
cout<<"ETAT I!!!156546.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
URPHY::AnyState
  return &stm._m!!!156162.cpp!!!	start_mis(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial");
#endif
    stm._mae_murphy_state._recalage_initial_state.create(stm);
  }
!!!156290.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!156418.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Initialisation");
#endif
cout<<"ETAT INITIALISATION"<<endl;
!!!156546.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state;
