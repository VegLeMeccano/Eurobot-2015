class BF_avance_State
!!!169986.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._chope_1_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.chope 1");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._chope_1_state.create(stm);
  }
!!!170114.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!170242.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF avance");
#endif
serialPrintf(master->getPortSerie(),"S7 0 \n"); 	// vitesse lente
cout<<"stands escalier : avance sur 1er stand"<<endl;
serialPrintf(master->getPortSerie(),"S4 240 \n");
/*
if(master->is_Jaune()){
// BF droite sur le gobelet 
// y = 1664 -120
serialPrintf(master->getPortSerie(),"S5 -848 1686 90 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S5 848 1686 90 \n");
}
*/
!!!170370.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
!!!169986.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._chope_1_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.chope 1");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._chope_1_state.create(stm);
  }
!!!170114.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!170242.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF avance");
#endif
serialPrintf(master->getPortSerie(),"S7 0 \n"); 	// vitesse lente
cout<<"stands escalier : avance sur 1er stand"<<endl;
serialPrintf(master->getPortSerie(),"S4 240 \n");
/*
if(master->is_Jaune()){
// BF droite sur le gobelet 
// y = 1664 -120
serialPrintf(master->getPortSerie(),"S5 -848 1686 90 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S5 848 1686 90 \n");
}
*/
!!!170370.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state;
