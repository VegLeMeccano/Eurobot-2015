class mission_zone_ennemie_State
!!!165634.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state.create(stm);
  }
!!!167298.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state;
!!!194178.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
// claps ennemi
// depot de goblets cinéma adverse
!!!194178.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
// claps ennemi
// depot de goblets cinéma adverse
