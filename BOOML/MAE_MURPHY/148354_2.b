class re_ouverture_pince_State
!!!213890.cpp!!!	pince_ouverte(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._bf_droite_stand_2_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.BF droite stand 2");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._bf_droite_stand_2_state.create(stm);
  }
!!!214018.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!214146.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.re ouverture pince");
#endif
cout<<"stand estrade : ouverture de pince"<<endl;
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"G0 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"D0 \n");
}
!!!214274.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state;
!!!214146.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.re ouverture pince");
#endif
cout<<"stand estrade : ouverture de pince"<<endl;
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"G0 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"D0 \n");
}
