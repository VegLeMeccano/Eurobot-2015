class chope_gobelet_State
!!!195330.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._recule_des_stands_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.recule des stands");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._recule_des_stands_state.create(stm);
  }
!!!195458.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!195586.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.chope gobelet");
#endif
cout<<"coin : chope gobelet"<<endl;
serialPrintf(master->getPortSerie(),"P5 \n");
master->set_time_out(200);
master->get_gestionnaire_mission()->get_element_robot()->gobelet_saisie();
!!!195714.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!195330.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._recule_vers_la_zone_de_depart_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.recule vers la zone de depart");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._recule_vers_la_zone_de_depart_state.create(stm);
  }
!!!195458.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!195586.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.chope gobelet");
#endif
cout<<"coin : chope gobelet"<<endl;
serialPrintf(master->getPortSerie(),"P5 \n");
master->set_time_out(200);
master->get_gestionnaire_mission()->get_element_robot()->gobelet_saisie();
!!!195714.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
