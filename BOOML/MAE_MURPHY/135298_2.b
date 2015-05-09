class waypoint_init_State
!!!156674.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    if (master->get_gestionnaire_mission()->is_mission_far()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF cap to mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_cap_to_mission_state.create(stm);
    }
    else if (!master->get_gestionnaire_mission()->is_mission_far()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF cap mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_cap_mission_state.create(stm);
    }
  }
!!!156802.cpp!!!	_exit1(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._preparation_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.preparation");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._preparation_state.create(stm);
  }
!!!158722.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init");
#endif
// rejoindre un point initial
!!!158850.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
!!!156674.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    if (master->get_gestionnaire_mission()->is_mission_far()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF cap to mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_cap_to_mission_state.create(stm);
    }
    else if (!master->get_gestionnaire_mission()->is_mission_far()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF cap mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_cap_mission_state.create(stm);
    }
  }
!!!156802.cpp!!!	_exit1(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._preparation_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.preparation");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._preparation_state.create(stm);
  }
!!!158722.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init");
#endif
// rejoindre un point initial
!!!158850.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
