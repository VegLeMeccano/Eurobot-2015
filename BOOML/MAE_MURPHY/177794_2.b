class BF_Cap_objectif_State
!!!231426.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._bf_droite_sur_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF droite sur distrib");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._bf_droite_sur_distrib_state.create(stm);
  }
!!!231554.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!231682.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF Cap objectif");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S3 80 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 100 \n");
}
!!!231810.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
!!!231682.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF Cap objectif");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S3 80 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 100 \n");
}
