class BF_droite_vers_les_stands_State
!!!351874.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._ouvre_pince_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.ouvre pince");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._ouvre_pince_state.create(stm);
  }
!!!352002.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!352130.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.BF droite vers les stands");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S5 -1180 474 -90 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S5 1180 474 -90 \n");
}
!!!352258.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!352130.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.BF droite vers les stands");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S5 -1180 474 -90 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S5 1180 474 -90 \n");
}
