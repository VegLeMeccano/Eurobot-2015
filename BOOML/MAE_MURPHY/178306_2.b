class pompage_State
!!!233858.cpp!!!	distrib_deboite(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._pompage_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.recule");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._recule_state.create(stm);
  }
!!!233986.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!234114.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.pompage");
#endif
serialPrint(master->getPortSerie(),"P0 \n");
!!!234242.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.pompage");
#endif
master->get_gestionnaire_mission()->get_mission_distrib()->netoyage_zone_done();
!!!234370.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
!!!234114.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.pompage");
#endif
serialPrint(master->getPortSerie(),"P0 \n");
!!!234242.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.pompage");
#endif
master->get_gestionnaire_mission()->get_mission_distrib()->netoyage_zone_done();
