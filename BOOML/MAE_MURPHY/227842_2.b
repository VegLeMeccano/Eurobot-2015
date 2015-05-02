class BF_cap_sur_stand_3_State
!!!335874.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._re_re_ouverture_pince_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.re re ouverture pince");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._re_re_ouverture_pince_state.create(stm);
  }
!!!336002.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!336130.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.BF cap sur stand 3");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S3 110 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 70 \n");
}
!!!336258.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state;
!!!336130.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.BF cap sur stand 3");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S3 110 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 70 \n");
}
