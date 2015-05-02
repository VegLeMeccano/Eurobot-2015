class waypoint_initial_State
!!!225026.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
    if (!master->get_gestionnaire()->get_mission_zone_ennemie()->is_claps_done()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.claps central");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state.create(stm);
    }
    else if (master->get_gestionnaire()->get_mission_zone_ennemie()->is_claps_done()) {
      if (master->get_gestionnaire()->get_mission_zone_ennemie()->is_depot_gobelet_done()) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant");
#endif
        stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state.create(stm);
      }
      else if (!master->get_gestionnaire()->get_mission_zone_ennemie()->is_depot_gobelet_done()) {
        if (!master->get_gestionnaire()->get_element_robot()->gobelet_present()) {
          stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant");
#endif
          stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state.create(stm);
        }
        else if (master->get_gestionnaire()->get_element_robot()->gobelet_present()) {
          stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet");
#endif
          stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state.create(stm);
        }
      }
    }
    return (bool) 1;
  }
!!!225154.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial.cap to mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state._cap_to_mission_state.create(stm);
  }
!!!226946.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial");
#endif
// en BF droite
!!!227074.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state;
!!!226946.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial");
#endif
// en BF droite
!!!225026.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
    if (!master->get_gestionnaire()->get_mission_zone_ennemie()->is_claps_done()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.claps central");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state.create(stm);
    }
    else if (master->get_gestionnaire()->get_mission_zone_ennemie()->is_claps_done()) {
      if (master->get_gestionnaire()->get_mission_zone_ennemie()->is_depot_gobelet_done()) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant");
#endif
        stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state.create(stm);
      }
      else if (!master->get_gestionnaire()->get_mission_zone_ennemie()->is_depot_gobelet_done()) {
        if (!master->get_gestionnaire()->get_element_robot()->gobelet_present()) {
          stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant");
#endif
          stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state.create(stm);
        }
        else if (master->get_gestionnaire()->get_element_robot()->gobelet_present()) {
          stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet");
#endif
          stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state.create(stm);
        }
      }
    }
    return (bool) 1;
  }
!!!225154.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial.cap to mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state._cap_to_mission_state.create(stm);
  }
!!!226946.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial");
#endif
// en BF droite
!!!227074.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state;
