class set_X_CAP_State
!!!203394.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._avance_claps_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.avance claps");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._avance_claps_state.create(stm);
  }
!!!203522.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!203650.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.set X CAP");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S0 -1404 247 0\n"); // mettre le Y du S
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S0 1404 247 180 \n");
}
master->set_time_out(50);
!!!203778.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!203650.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.set X CAP");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S0 -1404 247 0\n"); // mettre le Y du S
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S0 1404 247 180 \n");
}
master->set_time_out(50);
