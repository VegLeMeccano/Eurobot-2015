class ouverture_de_pince_State
!!!248066.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!248194.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du stand sur la route.ouverture de pince");
#endif
if(master->is_Jaune()){
// ouvre pince gauche
serialPrint(master->getPortSerie(),"G0 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"D0 \n");
}
!!!248322.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_stand_sur_la_route_state;
!!!348930.cpp!!!	pince_ouverte(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_stand_sur_la_route_state._bf_droite_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.chope du stand sur la route.BF droite");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_stand_sur_la_route_state._bf_droite_state.create(stm);
  }
!!!248194.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du stand sur la route.ouverture de pince");
#endif
if(master->is_Jaune()){
// ouvre pince gauche
serialPrint(master->getPortSerie(),"G0 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"D0 \n");
}
