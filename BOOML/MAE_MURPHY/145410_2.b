class recalage_State
!!!201346.cpp!!!	blocage(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._recalage_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._set_x_cap_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.set X CAP");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._set_x_cap_state.create(stm);
  }
!!!201474.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!201602.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recalage");
#endif
serialPrint(master->getPortSerie(),"S2 \n");
!!!201730.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recalage");
#endif
serialPrint(master->getPortSerie(),"S1 \n");
!!!201858.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!201602.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recalage");
#endif
serialPrintf(master->getPortSerie(),"S2 \n");
!!!201730.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recalage");
#endif
serialPrintf(master->getPortSerie(),"S1 \n");
!!!201346.cpp!!!	blocage(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._recalage_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._set_x_cap_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.set X CAP");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._set_x_cap_state.create(stm);
  }
!!!201474.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!201602.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recalage");
#endif
serialPrintf(master->getPortSerie(),"S2 \n");
!!!201730.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recalage");
#endif
serialPrintf(master->getPortSerie(),"S1 \n");
!!!201858.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
