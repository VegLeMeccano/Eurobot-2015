class BF_droite_to_mission_State
!!!157698.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF cap mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_cap_mission_state.create(stm);
  }
!!!157826.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!157954.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF droite to mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S5 "
	+ master->get_gestionnaire()->get_x_mission_str() 
	+ " "
	+ master->get_gestionnaire()->get_y_mission_str() 
	+ " "
	+ master->get_gestionnaire()->get_cap_to_mission_str() 
	+ " \n";
const char* ordre_c = ordre.c_str();
serialPrintf(master->getPortSerie(),ordre_c); 
cout<<"BF droite vers MISSION : "<<ordre<<endl;
!!!158082.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state;
!!!157954.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF droite to mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S5 "
	+ master->get_gestionnaire()->get_x_mission_str() 
	+ " "
	+ master->get_gestionnaire()->get_y_mission_str() 
	+ " "
	+ master->get_gestionnaire()->get_cap_to_mission_str() 
	+ " \n";
const char* ordre_c = ordre.c_str();
serialPrintf(master->getPortSerie(),ordre_c); 
cout<<"BF droite vers MISSION : "<<ordre<<endl;
