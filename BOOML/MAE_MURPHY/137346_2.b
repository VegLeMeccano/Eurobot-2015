class BF_cap_vers_la_zone_de_distrib_State
!!!166786.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._exit3(stm);
  }
!!!166914.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!167042.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.BF cap vers la zone de distrib");
#endif
if(master->is_Jaune()){
// BF cap
serialPrintf(master->getPortSerie(),"S3 132 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S3 48 \n");
}
!!!167170.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state;
!!!167042.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.BF cap vers la zone de distrib");
#endif
if(master->is_Jaune()){
// BF cap
serialPrintf(master->getPortSerie(),"S3 132 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S3 48 \n");
}
