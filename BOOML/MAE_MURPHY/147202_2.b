class avance_State
!!!209026.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.sortie de zone");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state._exit15(stm);
    return (bool) 1;
  }
!!!209154.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_completion(stm);
!!!209282.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state;
!!!209026.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.sortie de zone");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state._exit15(stm);
    return (bool) 1;
  }
!!!209154.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_completion(stm);
!!!209282.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state;
