class prepare_la_pose_State
!!!222466.cpp!!!	pince_ready_to_drop(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._avance_state.create(stm);
  }
!!!222594.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!222722.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.prepare la pose");
#endif
// preparation des piles a poser
if(master->is_Jaune()){
	serialPrint(master->getPortSerie(),"D9 \n"); // objectif de pose sur estrade
	serialPrint(master->getPortSerie(),"D4 \n"); // preparation de la pose
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_depart()->is_depot_double())
	{
		serialPrint(master->getPortSerie(),"G9 \n");
		serialPrint(master->getPortSerie(),"G4 \n");
	}
}
if(master->is_Vert()){
	serialPrint(master->getPortSerie(),"G9 \n");
	serialPrint(master->getPortSerie(),"G4 \n");
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_depart()->is_depot_double())
	{
		serialPrint(master->getPortSerie(),"D9 \n");
		serialPrint(master->getPortSerie(),"D4 \n");
	}
}
!!!222850.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
!!!222722.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.prepare la pose");
#endif
// preparation des piles a poser
if(master->is_Jaune()){
	serialPrintf(master->getPortSerie(),"D9 \n"); // objectif de pose sur estrade
	serialPrintf(master->getPortSerie(),"D4 \n"); // preparation de la pose
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_depart()->is_depot_double())
	{
		serialPrintf(master->getPortSerie(),"G9 \n");
		serialPrintf(master->getPortSerie(),"G4 \n");
	}
}
if(master->is_Vert()){
	serialPrintf(master->getPortSerie(),"G9 \n");
	serialPrintf(master->getPortSerie(),"G4 \n");
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_depart()->is_depot_double())
	{
		serialPrintf(master->getPortSerie(),"D9 \n");
		serialPrintf(master->getPortSerie(),"D4 \n");
	}
}
!!!222466.cpp!!!	pince_ready_to_drop(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._avance_state.create(stm);
  }
!!!222594.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!222722.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.prepare la pose");
#endif
// preparation des piles a poser
if(master->is_Jaune()){
	serialPrintf(master->getPortSerie(),"D9 \n"); // objectif de pose sur estrade
	serialPrintf(master->getPortSerie(),"D4 \n"); // preparation de la pose
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_depart()->is_depot_double())
	{
		serialPrintf(master->getPortSerie(),"G9 \n");
		serialPrintf(master->getPortSerie(),"G4 \n");
	}
}
if(master->is_Vert()){
	serialPrintf(master->getPortSerie(),"G9 \n");
	serialPrintf(master->getPortSerie(),"G4 \n");
	if(master->get_gestionnaire_mission()->get_mission_depot_tour_depart()->is_depot_double())
	{
		serialPrintf(master->getPortSerie(),"D9 \n");
		serialPrintf(master->getPortSerie(),"D4 \n");
	}
}
!!!222850.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;