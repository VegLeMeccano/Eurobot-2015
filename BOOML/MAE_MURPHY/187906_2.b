class Claps_3_State
!!!272386.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!272514.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._claps_estrade_state;
!!!358786.cpp!!!	claps_replie(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_claps_state._claps_estrade_state._claps_3_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._claps_estrade_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.claps estrade");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._claps_estrade_state._exit13(stm);
  }
!!!358914.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.claps estrade.Claps 3");
#endif
// claps cote droit pour jaune
if(master->is_Jaune()){
// ouverture du claps
serialPrint(master->getPortSerie(),"C0 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"C2 \n");
}
!!!359042.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission claps.claps estrade.Claps 3");
#endif
master->get_gestionnaire_mission()->get_mission_claps()->claps_estrade_done();
!!!358914.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.claps estrade.Claps 3");
#endif
// claps cote droit pour jaune
if(master->is_Jaune()){
// ouverture du claps
serialPrint(master->getPortSerie(),"C0 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"C2 \n");
}
!!!359042.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission claps.claps estrade.Claps 3");
#endif
master->get_gestionnaire_mission()->get_mission_claps()->claps_estrade_done();
