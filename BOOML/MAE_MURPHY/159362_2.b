class point_de_depart_State
!!!187778.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._orientation_avant_reculage_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.orientation avant reculage");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._orientation_avant_reculage_state.create(stm);
    return (bool) 1;
  }
!!!187906.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
	_completion(stm);
!!!188034.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart");
#endif
// rejoindre devant la zone de depart
!!!188162.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
!!!188034.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart");
#endif
// rejoindre devant la zone de depart
