class BF_cap_initial_35deg_State
!!!168194.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_droite_vers_gobelet_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF droite vers gobelet");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_droite_vers_gobelet_state.create(stm);
  }
!!!168322.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!168450.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF cap initial 35deg");
#endif
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"S3 132 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S3 48 \n");
}
!!!168578.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
!!!168450.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF cap initial 35deg");
#endif
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"S3 132 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S3 48 \n");
}
