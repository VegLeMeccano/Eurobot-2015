class chope_stand_3_State
!!!217090.cpp!!!	pince_stand_by(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._chope_stand_3_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._tempo_pour_coopr_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.tempo pour coop'r?");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._tempo_pour_coopr_state.create(stm);
  }
!!!217218.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!217346.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.chope stand 3");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"G1 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"D1 \n");
}
!!!217474.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.chope stand 3");
#endif
master->get_gestionnaire_mission()->get_mission_zone_centrale()->catch_stand_depart();
master->get_gestionnaire_mission()->get_mission_claps()->stand_depart_done();
!!!217602.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state;
!!!217346.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.chope stand 3");
#endif
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"G1 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"D1 \n");
}
!!!217474.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.chope stand 3");
#endif
master->get_gestionnaire_mission()->get_mission_zone_centrale()->catch_stand_depart();
master->get_gestionnaire_mission()->get_mission_claps()->stand_depart_done();
