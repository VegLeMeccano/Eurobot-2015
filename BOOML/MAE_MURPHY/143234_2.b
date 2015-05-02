class chope_du_stand_sur_la_route_State
!!!194178.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_stand_sur_la_route_state._ouverture_de_pince_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du stand sur la route.ouverture de pince");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_stand_sur_la_route_state._ouverture_de_pince_state.create(stm);
  }
!!!194306.cpp!!!	_exit11(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps");
#endif
    if (master->get_gestionnaire_mission()->get_mission_claps()->is_zone_coin_done()) {
      if (master->get_gestionnaire_mission()->get_mission_claps()->is_is_clap_estrade_done()) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.sortie de zone");
#endif
        stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state.create(stm);
      }
      else if (!master->get_gestionnaire_mission()->get_mission_claps()->is_is_clap_estrade_done()) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._claps_estrade_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.claps estrade");
#endif
        stm._mae_murphy_state._jeu_state._mission_claps_state._claps_estrade_state.create(stm);
      }
    }
    else if (!master->get_gestionnaire_mission()->get_mission_claps()->is_zone_coin_done()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin");
#endif
      stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state.create(stm);
    }
  }
!!!194434.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du stand sur la route");
#endif
// chope le stand devant la zone de depart
!!!194562.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state;
!!!194434.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du stand sur la route");
#endif
// chope le stand devant la zone de depart
