class BF_droite_State
!!!227330.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state._bf_cap_vers_estrade_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.claps central.BF cap vers estrade");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state._bf_cap_vers_estrade_state.create(stm);
  }
!!!227458.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!227586.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.claps central.BF droite");
#endif
cout<<"claps central : BF droite dessus"<<endl;
if(master->is_Jaune()){
// BF droite sur le claps
serialPrintf(master->getPortSerie(),"S5 977 260 -60 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S5 -977 260 -120 \n");
}
!!!227714.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state;
!!!227586.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.claps central.BF droite");
#endif
cout<<"claps central : BF droite dessus"<<endl;
if(master->is_Jaune()){
// BF droite sur le claps
serialPrintf(master->getPortSerie(),"S5 977 260 -60 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S5 -977 260 -120 \n");
}
