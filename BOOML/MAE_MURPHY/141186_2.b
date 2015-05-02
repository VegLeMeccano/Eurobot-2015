class capture_de_gobelet_escalier_State
!!!157314.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._deplacement_cible_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.deplacement cible");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._deplacement_cible_state.create(stm);
  }
!!!159746.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
!!!185090.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier");
#endif
// capture d gobelet pres de l'escalier
!!!328962.cpp!!!	_exit3(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib");
#endif
    if (!master->get_gestionnaire_mission()->mission_distrib()->is_netoyage_zone_done() ) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state.create(stm);
    }
    else if (master->get_gestionnaire_mission()->mission_distrib()->is_netoyage_zone_done() ) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.sortie zone");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state.create(stm);
    }
  }
!!!185090.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier");
#endif
// capture d gobelet pres de l'escalier
