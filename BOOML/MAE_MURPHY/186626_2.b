class avance_State
!!!268930.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._chope_stand_1_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.chope stand 1");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._chope_stand_1_state.create(stm);
  }
!!!269058.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!353154.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!353282.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.avance");
#endif
serialPrint(master->getPortSerie(),"S4 100 \n");
!!!353282.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.avance");
#endif
serialPrint(master->getPortSerie(),"S4 100 \n");
