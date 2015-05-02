class mission_depot_de_tour_zone_depart_State
!!!191234.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state.create(stm);
  }
!!!193794.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state;
!!!305026.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart");
#endif
// depot de tour sur la zone de depart
!!!338562.cpp!!!	_exit20(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
    stm._mae_murphy_state._jeu_state._decision_state.create(stm);
  }
!!!305026.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart");
#endif
// depot de tour sur la zone de depart
