class mission_zone_ennemie_State
!!!224898.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state.create(stm);
  }
!!!235906.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
// claps ennemi
// depot de goblets cin�ma adverse
!!!236034.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state;
!!!235778.cpp!!!	_exit25(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
    stm._mae_murphy_state._jeu_state._decision_state.create(stm);
  }
!!!235906.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
// claps ennemi
// depot de goblets cin�ma adverse
!!!224898.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state.create(stm);
  }
!!!235778.cpp!!!	_exit25(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
    stm._mae_murphy_state._jeu_state._decision_state.create(stm);
  }
!!!235906.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
// claps ennemi
// depot de goblets cin�ma adverse
!!!236034.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state;
