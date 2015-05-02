class preparation_State
!!!199042.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!199170.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
!!!316930.cpp!!!	pince_ready_to_drop(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._avance_state.create(stm);
  }
!!!317058.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.preparation");
#endif
// preparation des piles a poser
if(master->is_Jaune()){
	serialPrint(master->getPortSerie(),"G8 \n"); // objectif de pose sur estrade
	serialPrint(master->getPortSerie(),"G4 \n"); // preparation de la pose
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->is_depot_double())
	{
		serialPrint(master->getPortSerie(),"D8 \n");
		serialPrint(master->getPortSerie(),"D4 \n");
	}
}
if(master->is_Vert()){
	serialPrint(master->getPortSerie(),"D8 \n");
	serialPrint(master->getPortSerie(),"D4 \n");
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->is_depot_double())
	{
		serialPrint(master->getPortSerie(),"G8 \n");
		serialPrint(master->getPortSerie(),"G4 \n");
	}
}
!!!317058.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.preparation");
#endif
// preparation des piles a poser
if(master->is_Jaune()){
	serialPrint(master->getPortSerie(),"G8 \n"); // objectif de pose sur estrade
	serialPrint(master->getPortSerie(),"G4 \n"); // preparation de la pose
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->is_depot_double())
	{
		serialPrint(master->getPortSerie(),"D8 \n");
		serialPrint(master->getPortSerie(),"D4 \n");
	}
}
if(master->is_Vert()){
	serialPrint(master->getPortSerie(),"D8 \n");
	serialPrint(master->getPortSerie(),"D4 \n");
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_estrade()->is_depot_double())
	{
		serialPrint(master->getPortSerie(),"G8 \n");
		serialPrint(master->getPortSerie(),"G4 \n");
	}
}
