class orientation_vers_sortie_de_zone_State
!!!235138.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._avance_state.create(stm);
  }
!!!235266.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!235394.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.orientation vers sortie de zone");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S3 -45 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 360 225 \n");
}
!!!235522.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
!!!235394.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.orientation vers sortie de zone");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S3 -45 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 360 225 \n");
}
