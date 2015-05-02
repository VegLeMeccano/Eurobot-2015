class BF_droite_to_mission_State
!!!211074.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init.cap mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._cap_mission_state.create(stm);
  }
!!!211202.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!211330.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init.BF droite to mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S5 "
	+ master->get_gestionnaire()->get_x_mission() 
	+ " "
	+ master->get_gestionnaire()->get_y_mission() 
	+ " "
	+ master->get_gestionnaire()->get_cap_to_mission() 
	+ " \n";
serialPrint(master->getPortSerie(),ordre); 
cout<<"BF droite vers MISSION : "<<ordre<<endl;
!!!211458.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state;
!!!211330.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init.BF droite to mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S5 "
	+ master->get_gestionnaire()->get_x_mission() 
	+ " "
	+ master->get_gestionnaire()->get_y_mission() 
	+ " "
	+ master->get_gestionnaire()->get_cap_to_mission() 
	+ " \n";
serialPrintf(master->getPortSerie(),ordre); 
cout<<"BF droite vers MISSION : "<<ordre<<endl;
