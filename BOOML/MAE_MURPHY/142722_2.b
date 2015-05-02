class drop_gobelet_State
!!!190466.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._avance_state.create(stm);
  }
!!!190594.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!190722.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop gobelet");
#endif
// drop si present
master->set_time_out(200);
if(master->get_gestionnaire_mission()->get_element_robot()->gobelet_present())
{
	master->get_gestionnaire_mission()->get_element_robot()->gobelet_relache();
	master->get_gestionnaire_mission()->get_mission_chiage()->drop_gobelet_done();
	// drop gobelet
	serialPrint(master->getPortSerie(),"P6 \n");
}
!!!190850.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
!!!190722.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop gobelet");
#endif
// drop si present
master->set_time_out(200);
if(master->get_gestionnaire_mission()->get_element_robot()->gobelet_present())
{
	master->get_gestionnaire_mission()->get_element_robot()->gobelet_relache();
	master->get_gestionnaire_mission()->get_mission_chiage()->drop_gobelet_done();
	// drop gobelet
	serialPrintf(master->getPortSerie(),"P6 \n");
}
