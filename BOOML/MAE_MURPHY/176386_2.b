class chope_1_State
!!!225538.cpp!!!	pince_stand_by(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._ouverture_pince_cote_escalier_seconde_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.ouverture pince cote escalier seconde");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._ouverture_pince_cote_escalier_seconde_state.create(stm);
  }
!!!225666.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!225794.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.chope 1");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"D1 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"G1 \n");
}
!!!225922.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
!!!225794.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.chope 1");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"D1 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"G1 \n");
}
