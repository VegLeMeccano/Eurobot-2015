class Recule_bordure_claps_State
!!!170242.cpp!!!	blocage(inout stm : MAE_MURPHY) : void
  _do(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._set_y_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.set Y");
#endif
    stm._mae_murphy_state._recalage_initial_state._set_y_state.create(stm);
  }
!!!170370.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!170498.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.Recule bordure claps");
#endif
serialPrint(master->getPortSerie(),"S2 \n");
!!!170626.cpp!!!	_do(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute do behavior of .MAE_MURPHY.Recalage Initial.Recule bordure claps");
#endif
serialPrint(master->getPortSerie(),"S1 \n");
// pour recup le vrai Y et le mettre dans le S0
!!!170754.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._recalage_initial_state;
!!!170498.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.Recule bordure claps");
#endif
serialPrint(master->getPortSerie(),"S2 \n");
!!!170626.cpp!!!	_do(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute do behavior of .MAE_MURPHY.Recalage Initial.Recule bordure claps");
#endif
serialPrint(master->getPortSerie(),"S1 \n");
// pour recup le vrai Y et le mettre dans le S0
