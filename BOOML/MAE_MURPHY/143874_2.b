class sortie_de_zone_de_depart_State
!!!165122.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
    stm._mae_murphy_state._jeu_state._decision_state.create(stm);
  }
!!!165250.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!165378.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.sortie de zone de depart");
#endif
// avance de 400mm
// attention si on laisse coop'r derrière ou devant
serialPrint(master->getPortSerie(),"S4 400 \n");
!!!165506.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state;
!!!165378.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.sortie de zone de depart");
#endif
// avance de 400mm
// attention si on laisse coop'r derrière ou devant
serialPrint(master->getPortSerie(),"S4 400 \n");
