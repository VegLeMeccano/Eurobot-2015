class BF_cap_vers_estrade_State
!!!308226.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state._ouverture_claps_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.claps central.ouverture claps");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state._ouverture_claps_state.create(stm);
  }
!!!308354.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!308482.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.claps central.BF cap vers estrade");
#endif
if(master->is_Jaune()){
// BF droite sur le claps
serialPrint(master->getPortSerie(),"S3 180 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 0 \n");
}
!!!308610.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._claps_central_state;
!!!308482.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.claps central.BF cap vers estrade");
#endif
if(master->is_Jaune()){
// BF droite sur le claps
serialPrint(master->getPortSerie(),"S3 180 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 0 \n");
}
