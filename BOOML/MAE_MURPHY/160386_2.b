class way_point_initial_State
!!!191490.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.cap to mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._cap_to_mission_state.create(stm);
  }
!!!191618.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
!!!301826.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial");
#endif
// rejoindre le point initial de mission
!!!301826.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial");
#endif
// rejoindre le point initial de mission
