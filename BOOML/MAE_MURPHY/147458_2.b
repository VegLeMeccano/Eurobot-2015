class waypoint_init_State
!!!210306.cpp!!!	create(inout stm : MAE_MURPHY) : void
  {
    if (master->get_gestionnaire_mission()->is_mission_far()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init.cap to mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._cap_to_mission_state.create(stm);
    }
    else if (!master->get_gestionnaire_mission()->is_mission_far()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init.cap mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._cap_mission_state.create(stm);
    }
  }
!!!210434.cpp!!!	_exit18(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale");
#endif
    if (!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_central_catched()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._ouverture_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.ouverture pince");
#endif
      stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._ouverture_pince_state.create(stm);
    }
    else if (master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_central_catched()) {
      if (!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_estrade_catched()) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._re_ouverture_pince_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.re ouverture pince");
#endif
        stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._re_ouverture_pince_state.create(stm);
      }
      else if (master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_estrade_catched()) {
        if (master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_depart_catched()) {
          stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._tempo_pour_coopr_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.tempo pour coop'r?");
#endif
          stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._tempo_pour_coopr_state.create(stm);
        }
        else if (!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_depart_catched()) {
          stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._bf_cap_sur_stand_3_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.BF cap sur stand 3");
#endif
          stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._bf_cap_sur_stand_3_state.create(stm);
        }
      }
    }
  }
!!!212098.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state;
!!!210306.cpp!!!	create(inout stm : MAE_MURPHY) : void
  {
    if (master->get_gestionnaire_mission()->is_mission_far()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init.cap to mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._cap_to_mission_state.create(stm);
    }
    else if (!master->get_gestionnaire_mission()->is_mission_far()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init.cap mission");
#endif
      stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._cap_mission_state.create(stm);
    }
  }
!!!210434.cpp!!!	_exit18(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale");
#endif
    if (!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_central_catched()) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._ouverture_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.ouverture pince");
#endif
      stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._ouverture_pince_state.create(stm);
    }
    else if (master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_central_catched()) {
      if (!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_estrade_catched()) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._re_ouverture_pince_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.re ouverture pince");
#endif
        stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._re_ouverture_pince_state.create(stm);
      }
      else if (master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_estrade_catched()) {
        if (master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_depart_catched()) {
          stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._tempo_pour_coopr_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.tempo pour coop'r?");
#endif
          stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._tempo_pour_coopr_state.create(stm);
        }
        else if (!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_depart_catched()) {
          stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._bf_cap_sur_stand_3_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.BF cap sur stand 3");
#endif
          stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._bf_cap_sur_stand_3_state.create(stm);
        }
      }
    }
  }
!!!212098.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state;
