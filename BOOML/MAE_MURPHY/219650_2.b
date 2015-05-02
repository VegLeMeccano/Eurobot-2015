class set_Y_CAP_State
!!!317826.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._depot_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.depot");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._depot_state.create(stm);
    return (bool) 1;
  }
!!!317954.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
	_completion(stm);
!!!318082.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.set Y CAP");
#endif
// recup les coords du master avec le S1 (pour le x)
serialPrint(master->getPortSerie(),"S0 ?? ?? -90 \n");
!!!318210.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
!!!318082.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.set Y CAP");
#endif
// recup les coords du master avec le S1 (pour le x)
serialPrint(master->getPortSerie(),"S0 ?? ?? -90 \n");
