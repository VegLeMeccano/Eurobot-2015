class BF_droite_to_mission_State
!!!225922.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial.cap mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state._cap_mission_state.create(stm);
  }
!!!226050.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!226178.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial.BF droite to mission");
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
!!!226306.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._waypoint_initial_state;
!!!226178.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.waypoint initial.BF droite to mission");
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
