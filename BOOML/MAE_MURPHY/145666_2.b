class deboit_claps_coin_State
!!!202754.cpp!!!	claps_replie(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._deboit_claps_coin_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._exit12(stm);
  }
!!!202882.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!203010.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.deboit claps coin");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"C0 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"C2 \n");
}
!!!203138.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.deboit claps coin");
#endif
master->get_gestionnaire_mission()->get_mission_claps()->zone_coin_done();
!!!203266.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!203010.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.deboit claps coin");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"C0 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"C2 \n");
}
!!!203138.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.deboit claps coin");
#endif
master->get_gestionnaire_mission()->get_mission_claps()->zone_coin_done();
!!!202754.cpp!!!	claps_replie(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._deboit_claps_coin_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._exit12(stm);
  }
!!!202882.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!203010.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.deboit claps coin");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"C0 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"C2 \n");
}
!!!203138.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.deboit claps coin");
#endif
master->get_gestionnaire_mission()->get_mission_claps()->zone_coin_done();
!!!203266.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
