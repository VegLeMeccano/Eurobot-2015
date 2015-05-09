class capture_State
!!!166146.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.recule");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._recule_state.create(stm);
  }
!!!166274.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!166402.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.capture");
#endif
cout<<"gobelet : capture"<<endl;
// ferme le pince interne souleve
serialPrintf(master->getPortSerie(),"P5 \n");
master->set_time_out(300);

master->get_gestionnaire_mission()->get_mission_distrib()->capture_gobelet_done();
master->get_gestionnaire_mission()->get_element_robot()->gobelet_saisie();
cout<<"gobelet attrape!"<<endl;
!!!166530.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state;
!!!166146.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.recule");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._recule_state.create(stm);
  }
!!!166274.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!166402.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.capture");
#endif
cout<<"gobelet : capture"<<endl;
// ferme le pince interne souleve
serialPrintf(master->getPortSerie(),"P5 \n");
master->set_time_out(300);

master->get_gestionnaire_mission()->get_mission_distrib()->capture_gobelet_done();
master->get_gestionnaire_mission()->get_element_robot()->gobelet_saisie();
cout<<"gobelet attrape!"<<endl;
!!!166530.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state;
