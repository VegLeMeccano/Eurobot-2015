class claps_central_State
!!!166146.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
	_completion(stm);
!!!166274.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.claps central");
#endif
// mission à 5pts
!!!166402.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state;
!!!194050.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state.create(stm);
    return (bool) 1;
  }
!!!166274.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.claps central");
#endif
// mission à 5pts
