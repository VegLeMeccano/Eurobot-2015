class deplacement_cible_State
!!!165378.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._capture_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.capture");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state._capture_state.create(stm);
  }
!!!165506.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!165634.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.deplacement cible");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S5 -590 1198 145 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S5 590 1198 35 \n");
}
!!!165762.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state;
!!!165634.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier.deplacement cible");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S5 -590 1198 145 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S5 590 1198 35 \n");
}