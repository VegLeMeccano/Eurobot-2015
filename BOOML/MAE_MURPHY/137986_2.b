class ouverture_pince_cote_escalier_State
!!!169474.cpp!!!	pince_ouverte(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_avance_state.create(stm);
  }
!!!169602.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!169730.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.ouverture pince cote escalier");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"D0 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"G0 \n");
}
!!!169858.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
!!!169730.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.ouverture pince cote escalier");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"D0 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"G0 \n");
}
