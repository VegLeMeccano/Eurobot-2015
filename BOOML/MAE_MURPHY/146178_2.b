class BF_droite_sur_claps_estrade_State
!!!204802.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._claps_estrade_state._claps_3_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.claps estrade.Claps 3");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._claps_estrade_state._claps_3_state.create(stm);
  }
!!!204930.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!205058.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.claps estrade.BF droite sur claps estrade");
#endif
serialPrintf(master->getPortSerie(),"S7 1 \n"); 	// vitesse moyenne
cout<<"claps estrade : BF droite sur cible"<<endl;
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S5 -730 270 0 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S5 730 270 180 \n");
}
!!!205186.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._claps_estrade_state;
!!!205058.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.claps estrade.BF droite sur claps estrade");
#endif
serialPrintf(master->getPortSerie(),"S7 1 \n"); 	// vitesse moyenne
cout<<"claps estrade : BF droite sur cible"<<endl;
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S5 -730 270 0 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S5 730 270 180 \n");
}
