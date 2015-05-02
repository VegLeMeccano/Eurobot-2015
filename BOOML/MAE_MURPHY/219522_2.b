class avance_State
!!!317186.cpp!!!	blocage(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._avance_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._set_y_cap_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.set Y CAP");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._set_y_cap_state.create(stm);
  }
!!!317314.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!317442.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.avance");
#endif
// jusqu'au blocage
serialPrint(master->getPortSerie(),"S4 350 \n");
!!!317570.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.avance");
#endif
serialPrint(master->getPortSerie(),"S1 \n");
!!!317698.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
!!!317442.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.avance");
#endif
// jusqu'au blocage
serialPrint(master->getPortSerie(),"S4 350 \n");
!!!317570.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.avance");
#endif
serialPrint(master->getPortSerie(),"S1 \n");
