class BF_droite_stand_2_State
!!!214402.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._chope_stand_2_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.chope stand 2");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._chope_stand_2_state.create(stm);
  }
!!!214530.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!214658.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.BF droite stand 2");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S5 -423 357 -122 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S5 423 357 302 \n");
}
!!!214786.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state;
!!!214658.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.BF droite stand 2");
#endif
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"S5 -423 357 -122 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S5 423 357 302 \n");
}
!!!214402.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._chope_stand_2_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.chope stand 2");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._chope_stand_2_state.create(stm);
  }
!!!214530.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!214658.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.BF droite stand 2");
#endif
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"S5 -423 357 -122 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S5 423 357 302 \n");
}
!!!214786.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state;