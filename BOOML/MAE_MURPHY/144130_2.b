class waypoint_initial_State
!!!165762.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
	_completion(stm);
!!!165890.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial");
#endif
// en BF droite
!!!166018.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state;
!!!193922.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
    {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.claps central");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state.create(stm);
    }
    else {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state.create(stm);
    }
    else {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant");
#endif
      stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state.create(stm);
    }
    return (bool) 1;
  }
!!!165890.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial");
#endif
// en BF droite
