class re_ouvre_pince_State
!!!353922.cpp!!!	pince_ouverte(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._re_avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.re avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._re_avance_state.create(stm);
  }
!!!354050.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!354178.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.re ouvre pince");
#endif
if(master->is_Jaune()){
// ouverture de pince
serialPrint(master->getPortSerie(),"D0 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"G0 \n");
}
!!!354306.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!354178.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.re ouvre pince");
#endif
if(master->is_Jaune()){
// ouverture de pince
serialPrint(master->getPortSerie(),"D0 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"G0 \n");
}
