class recule_vers_la_zone_de_depart_State
!!!196866.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._bf_droite_vers_les_stands_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.BF droite vers les stands");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._bf_droite_vers_les_stands_state.create(stm);
  }
!!!196994.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!197122.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recule vers la zone de depart");
#endif
serialPrint(master->getPortSerie(),"S4 -350 \n");
!!!197250.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!197122.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recule vers la zone de depart");
#endif
serialPrintf(master->getPortSerie(),"S4 -350 \n");
!!!196866.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._bf_droite_vers_les_stands_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.BF droite vers les stands");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._bf_droite_vers_les_stands_state.create(stm);
  }
!!!196994.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!197122.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recule vers la zone de depart");
#endif
serialPrintf(master->getPortSerie(),"S4 -350 \n");
!!!197250.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
