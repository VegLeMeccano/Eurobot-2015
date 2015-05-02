class point_de_depart_State
!!!185602.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._orientation_avant_reculage_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.orientation avant reculage");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._orientation_avant_reculage_state.create(stm);
  }
!!!185730.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state._orientation_vers_objectif_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart.orientation vers objectif");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state._orientation_vers_objectif_state.create(stm);
  }
!!!187522.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart");
#endif
// rejoindre devant la zone de depart
// en BF droite sans cap final
!!!187650.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
!!!187522.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart");
#endif
// rejoindre devant la zone de depart
// en BF droite sans cap final
