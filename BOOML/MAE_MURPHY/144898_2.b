class chope_stand_1_State
!!!199298.cpp!!!	pince_stand_by(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._re_ouvre_pince_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.re ouvre pince");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._re_ouvre_pince_state.create(stm);
  }
!!!199426.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!199554.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.chope stand 1");
#endif
cout<<"coin : chope 1er stand"<<endl;
if(master->is_Jaune()){
// ouverture de pince
serialPrintf(master->getPortSerie(),"D1 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"G1 \n");
}
!!!199682.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!199298.cpp!!!	pince_stand_by(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._re_ouvre_pince_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du coin.re ouvre pince");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state._re_ouvre_pince_state.create(stm);
  }
!!!199426.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!199554.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.chope stand 1");
#endif
cout<<"coin : chope 1er stand"<<endl;
if(master->is_Jaune()){
// ouverture de pince
serialPrintf(master->getPortSerie(),"D1 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"G1 \n");
}
!!!199682.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
