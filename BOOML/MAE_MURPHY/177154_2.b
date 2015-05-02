class BF_droite_vers_objectif_State
!!!228866.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._ouverture_pince_cote_bordure_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.ouverture pince cote bordure");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._ouverture_pince_cote_bordure_state.create(stm);
  }
!!!228994.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!229122.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF droite vers objectif");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S5 -1174 1544 90 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S5 1174 1544 90 \n");
}
!!!229250.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
!!!229122.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF droite vers objectif");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S5 -1174 1544 90 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrint(master->getPortSerie(),"S5 1174 1544 90 \n");
}
