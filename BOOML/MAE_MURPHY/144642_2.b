class ouvre_pince_State
!!!198274.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!198402.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.ouvre pince");
#endif
if(master->is_Jaune()){
// ouverture de pince
serialPrintf(master->getPortSerie(),"D0 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"G0 \n");
}
!!!198530.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!245250.cpp!!!	pince_ouverte(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._avance_state.create(stm);
  }
!!!198402.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.ouvre pince");
#endif
if(master->is_Jaune()){
// ouverture de pince
serialPrintf(master->getPortSerie(),"D0 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"G0 \n");
}
