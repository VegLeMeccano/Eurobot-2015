class decision_State
!!!236546.cpp!!!	mission_distrib(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state.create(stm);
  }
!!!236930.cpp!!!	mission_claps(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state.create(stm);
  }
!!!237314.cpp!!!	mission_depot_tour_depart(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state.create(stm);
  }
!!!237698.cpp!!!	mission_zone_ennemie(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state.create(stm);
  }
!!!238082.cpp!!!	mission_chiage_balle(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state.create(stm);
  }
!!!238466.cpp!!!	mission_zone_centrale(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state.create(stm);
  }
!!!238850.cpp!!!	mission_depot_tour_estrade(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state.create(stm);
  }
!!!238978.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!239106.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.decision");
#endif
cout<<"DECISION DE MISSION"<<endl;
master->get_gestionnaire_mission()->decision_mission();

// decision du gestionnaire de mission
// consulte les mission restante � faire et dans quel ordre
// etat de depart apres sortie d'evitement ...
!!!239234.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state;
!!!239106.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.decision");
#endif
cout<<"DECISION DE MISSION"<<endl;
master->get_gestionnaire_mission()->decision_mission();

// decision du gestionnaire de mission
// consulte les mission restante � faire et dans quel ordre
// etat de depart apres sortie d'evitement ...
