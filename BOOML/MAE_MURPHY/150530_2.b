class rembale_les_pinces_State
!!!222978.cpp!!!	pince_range(inout stm : MAE_MURPHY) : void

  {
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._rembale_les_pinces_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._bf_cap_vers_la_zone_adverse_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.BF cap vers la zone adverse");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._bf_cap_vers_la_zone_adverse_state.create(st!!!223106.cpp!!!	create(inout stm : MAE_MURPHY) : void
Y) : void
	_doe!!!223234.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.rembale les pinces");
#endif
serialPrintf(master->getPortSerie(),"G6 \n");
serialPrintf(mas!!!223362.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.rembale les pinces");
#endif
master->get_gestionnaire_mission()->get_mission_depot!!!223490.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
: MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_!!!222978.cpp!!!	pince_range(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._rembale_les_pinces_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._bf_cap_vers_la_zone_adverse_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.BF cap vers la zone adverse");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._bf_cap_vers_la_zone_adverse_state.create(stm);
  }
!!!223106.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!223234.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.rembale les pinces");
#endif
serialPrintf(master->getPortSerie(),"G6 \n");
serialPrintf(master->getPortSerie(),"D6 \n");
!!!223362.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.rembale les pinces");
#endif
master->get_gestionnaire_mission()->get_mission_depot_tour_depart()->mission_remplie();
!!!223490.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
