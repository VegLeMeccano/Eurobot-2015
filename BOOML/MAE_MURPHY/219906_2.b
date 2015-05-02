class BF_Cap_State
!!!318850.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._exit2(stm);
  }
!!!318978.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!319106.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.BF Cap");
#endif
serialPrint(master->getPortSerie(),"S3 90 \n");
!!!319234.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
!!!319106.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.BF Cap");
#endif
serialPrint(master->getPortSerie(),"S3 90 \n");
