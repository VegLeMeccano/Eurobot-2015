class faire_chier_en_zizagant_State
!!!166914.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    if (master->get_gestionnaire()->get_element_robot()->mode_chieur()==0) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state._chieur_stop_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant.chieur stop");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state._chieur_stop_state.create(stm);
    }
    else if (master->get_gestionnaire()->get_element_robot()->mode_chieur()==1) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state._chieur_faible_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant.chieur faible");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state._chieur_faible_state.create(stm);
    }
    else if (master->get_gestionnaire()->get_element_robot()->mode_chieur()==2) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state._chieur_plus_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant.chieur plus");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state._chieur_plus_state.create(stm);
    }
  }
!!!167042.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant");
#endif
// mission qui n'a pas de prix
// simplement rejoindre la sortie

// mettre un choix de point chieur � atteindre
master->get_gestionnaire()->get_mission_zone_ennemie()->mission_remplie();
!!!167170.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state;
!!!339202.cpp!!!	_exit24(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._exit25(stm);
  }
!!!167042.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant");
#endif
// mission qui n'a pas de prix
// simplement rejoindre la sortie

// mettre un choix de point chieur � atteindre
master->get_gestionnaire()->get_mission_zone_ennemie()->mission_remplie();
