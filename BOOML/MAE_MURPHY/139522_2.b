class chope_State
!!!176002.cpp!!!	pince_stand_by(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.recule");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._recule_state.create(stm);
  }
!!!176130.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!176258.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.chope");
#endif
cout<<"stands bordure : chope de stand"<<endl;
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"G1 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"D1 \n");
}
!!!176386.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
!!!176002.cpp!!!	pince_stand_by(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.recule");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._recule_state.create(stm);
  }
!!!176130.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!176258.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.chope");
#endif
cout<<"stands bordure : chope de stand"<<endl;
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"G1 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"D1 \n");
}
!!!176386.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
