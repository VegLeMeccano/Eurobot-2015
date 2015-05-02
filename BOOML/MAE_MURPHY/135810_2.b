class depot_State
!!!159362.cpp!!!	pince_lache(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._recule_doucement_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.recule doucement");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._recule_doucement_state.create(stm);
  }
!!!159490.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!159618.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.depot");
#endif
// preparation des piles a poser
if(master->is_Jaune()){
	serialPrint(master->getPortSerie(),"G5 \n"); // lache
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->is_depot_double())
	{
		serialPrint(master->getPortSerie(),"D5 \n");
	}
}
if(master->is_Vert()){
	serialPrint(master->getPortSerie(),"D5 \n");
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->is_depot_double())
	{
		serialPrint(master->getPortSerie(),"G5 \n");
	}
}
!!!159746.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
!!!159618.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.depot");
#endif
// preparation des piles a poser
if(master->is_Jaune()){
	serialPrintf(master->getPortSerie(),"G5 \n"); // lache
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->is_depot_double())
	{
		serialPrintf(master->getPortSerie(),"D5 \n");
	}
}
if(master->is_Vert()){
	serialPrintf(master->getPortSerie(),"D5 \n");
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->is_depot_double())
	{
		serialPrintf(master->getPortSerie(),"G5 \n");
	}
}
!!!159362.cpp!!!	pince_lache(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._recule_doucement_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.recule doucement");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._recule_doucement_state.create(stm);
  }
!!!159490.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!159618.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.depot");
#endif
// preparation des piles a poser
if(master->is_Jaune()){
	serialPrintf(master->getPortSerie(),"G5 \n"); // lache
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->is_depot_double())
	{
		serialPrintf(master->getPortSerie(),"D5 \n");
	}
}
if(master->is_Vert()){
	serialPrintf(master->getPortSerie(),"D5 \n");
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->is_depot_double())
	{
		serialPrintf(master->getPortSerie(),"G5 \n");
	}
}
!!!159746.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
