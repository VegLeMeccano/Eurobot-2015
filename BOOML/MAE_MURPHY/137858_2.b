class BF_droite_vers_gobelet_State
!!!168706.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._ouverture_pince_cote_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.ouverture pince cote escalier");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._ouverture_pince_cote_escalier_state.create(stm);
  }
!!!168834.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!168962.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF droite vers gobelet");
#endif
cout<<"stands escalier : BF droite sur cible"<<endl;
if(master->is_Jaune()){
// BF droite sur le gobelet 
// y = 1664 -120
serialPrintf(master->getPortSerie(),"S5 -848 1436 90 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S5 848 1436 90 \n");
}
!!!169090.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
!!!168706.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._ouverture_pince_cote_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.ouverture pince cote escalier");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._ouverture_pince_cote_escalier_state.create(stm);
  }
!!!168834.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!168962.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF droite vers gobelet");
#endif
cout<<"stands escalier : BF droite sur cible"<<endl;
if(master->is_Jaune()){
// BF droite sur le gobelet 
// y = 1664 -120
serialPrintf(master->getPortSerie(),"S5 -848 1436 90 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S5 848 1436 90 \n");
}
!!!169090.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
