class chope_du_coin_State
!!!194690.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._bf_droite_sur_le_verre_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.BF droite sur le verre");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._bf_droite_sur_le_verre_state.create(stm);
  }
!!!198658.cpp!!!	_exit12(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps");
#endif
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
!!!204418.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin");
#endif
// chope les 2 stands
// le gobelet
// et fait le claps du coin
// attention faut pas avoir un gobelet dans le cul
!!!204546.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state;
!!!204418.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin");
#endif
// chope les 2 stands
// le gobelet
// et fait le claps du coin
// attention faut pas avoir un gobelet dans le cul
!!!194690.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._bf_droite_sur_le_verre_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.BF droite sur le verre");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._bf_droite_sur_le_verre_state.create(stm);
  }
!!!198658.cpp!!!	_exit12(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps");
#endif
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
!!!204418.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin");
#endif
// chope les 2 stands
// le gobelet
// et fait le claps du coin
// attention faut pas avoir un gobelet dans le cul
!!!204546.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state;
