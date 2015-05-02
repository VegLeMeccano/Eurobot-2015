class re_re_ouverture_pince_State
!!!336386.cpp!!!	pince_ouverte(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._bf_droite_stand_3_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.BF droite stand 3");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._bf_droite_stand_3_state.create(stm);
  }
!!!336514.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!336642.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.re re ouverture pince");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"G0 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"D0 \n");
}
!!!336770.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state;
!!!336642.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.re re ouverture pince");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"G0 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"D0 \n");
}
