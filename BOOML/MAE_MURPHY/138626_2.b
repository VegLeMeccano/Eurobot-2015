class chope_2_State
!!!172290.cpp!!!	pince_stand_by(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.recule");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._recule_state.create(stm);
  }
!!!172418.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!172546.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.chope 2");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"D1 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"G1 \n");
}
!!!172674.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
!!!172546.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.chope 2");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"D1 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"G1 \n");
}
