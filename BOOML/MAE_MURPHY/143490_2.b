class mission_rush_zone_centrale_State
!!!164354.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state;
!!!236674.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state.create(stm);
  }
!!!236802.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale");
#endif
// on va rusher les trois stands centraux
!!!330754.cpp!!!	_exit17(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
    stm._mae_murphy_state._jeu_state._decision_state.create(stm);
  }
!!!236802.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale");
#endif
// on va rusher les trois stands centraux
