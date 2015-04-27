class Recule_depart_State
!!!171906.cpp!!!	blocage(inout stm : MAE_MURPHY) : void
  _do(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._re_set_x_cap_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.Re set x cap");
#endif
    stm._mae_murphy_state._recalage_initial_state._re_set_x_cap_state.create(stm);
  }
!!!172034.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!172162.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.Recule depart");
#endif
serialPrint(master->getPortSerie(),"S2 \n");
!!!172290.cpp!!!	_do(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute do behavior of .MAE_MURPHY.Recalage Initial.Recule depart");
#endif
serialPrint(master->getPortSerie(),"S1 \n");
!!!172418.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._recalage_initial_state;
!!!172162.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.Recule depart");
#endif
serialPrint(master->getPortSerie(),"S2 \n");
!!!172290.cpp!!!	_do(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute do behavior of .MAE_MURPHY.Recalage Initial.Recule depart");
#endif
serialPrint(master->getPortSerie(),"S1 \n");
