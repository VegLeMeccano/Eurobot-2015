class ouverture_capot_State
!!!309890.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet.avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state._avance_state.create(stm);
  }
!!!310018.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!310146.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet.ouverture capot");
#endif
serialPrint(master->getPortSerie(),"P6 \n");
master->set_time_out(300);
master->get_gestionnaire()->get_mission_zone_ennemie()->depot_gobelet_done();
master->get_gestionnaire()->get_element_robot()->drop_gobelet_done();
!!!310274.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state;
!!!310146.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet.ouverture capot");
#endif
serialPrint(master->getPortSerie(),"P6 \n");
master->set_time_out(300);
master->get_gestionnaire()->get_mission_zone_ennemie()->depot_gobelet_done();
master->get_gestionnaire()->get_element_robot()->drop_gobelet_done();
