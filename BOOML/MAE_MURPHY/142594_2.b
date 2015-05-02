class drop_pop_corn_State
!!!189826.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._drop_pop_corn_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._drop_gobelet_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop gobelet");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._drop_gobelet_state.create(stm);
  }
!!!189954.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!190082.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop pop corn");
#endif
// drop si present
if(master->get_gestionnaire_mission()->get_element_robot()->pop_corn_present())
{
	master->get_gestionnaire_mission()->get_element_robot()->pop_corn_decharge();
	master->get_gestionnaire_mission()->get_mission_chiage()->drop_pop_corn_done();
	// ouverture du capot
	serialPrint(master->getPortSerie(),"P2 \n");
	master->set_time_out(1200);
}
else
{
	master->set_time_out(200);
}
!!!190210.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop pop corn");
#endif
// fermeture du capot
serialPrint(master->getPortSerie(),"P3 \n");
!!!190338.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
!!!190082.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop pop corn");
#endif
// drop si present
if(master->get_gestionnaire_mission()->get_element_robot()->pop_corn_present())
{
	master->get_gestionnaire_mission()->get_element_robot()->pop_corn_decharge();
	master->get_gestionnaire_mission()->get_mission_chiage()->drop_pop_corn_done();
	// ouverture du capot
	serialPrint(master->getPortSerie(),"P2 \n");
	master->set_time_out(1200);
}
else
{
	master->set_time_out(200);
}
!!!190210.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.drop pop corn");
#endif
// fermeture du capot
serialPrint(master->getPortSerie(),"P3 \n");
