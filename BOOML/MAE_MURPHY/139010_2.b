class BF_cap_vers_objectif_State
!!!173954.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._bf_droite_vers_objectif_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF droite vers objectif");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._bf_droite_vers_objectif_state.create(stm);
  }
!!!174082.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!174210.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF cap vers objectif");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S3 132 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 48 \n");
}
!!!174338.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
!!!174210.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF cap vers objectif");
#endif
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"S3 132 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S3 48 \n");
}