class replis_des_pinces_State
!!!162946.cpp!!!	pince_range(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._bf_cap_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.BF Cap");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._bf_cap_state.create(stm);
  }
!!!163074.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!163202.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.replis des pinces");
#endif
// replis des pinces
serialPrintf(master->getPortSerie(),"G6 \n");
serialPrintf(master->getPortSerie(),"D6 \n");
master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->mission_remplie();
!!!163330.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
!!!163202.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.replis des pinces");
#endif
// replis des pinces
serialPrintf(master->getPortSerie(),"G6 \n");
serialPrintf(master->getPortSerie(),"D6 \n");
master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->mission_remplie();
