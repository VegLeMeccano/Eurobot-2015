class cap_mission_State
!!!220034.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._cap_mission_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.BF droite to mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._bf_droite_to_mission_state._exit19(stm);
  }
!!!220162.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!220290.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.cap mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S3 " 
	+ master->get_gestionnaire()->get_cap_mission_str() 
	+ " \n";
const char* ordre_c = ordre.c_str();
serialPrintf(master->getPortSerie(),"S7 1 \n"); 	// vitesse moyenne
serialPrintf(master->getPortSerie(),ordre_c); 
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
!!!220418.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state;
!!!265858.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.cap mission");
#endif
serialPrintf(master->getPortSerie(),"S7 0 \n"); 	// vitesse moyennee
!!!220034.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._cap_mission_state._doexit(stm);
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.BF droite to mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._bf_droite_to_mission_state._exit19(stm);
  }
!!!220162.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!220290.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.cap mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S3 " 
	+ master->get_gestionnaire()->get_cap_mission_str() 
	+ " \n";
const char* ordre_c = ordre.c_str();
serialPrintf(master->getPortSerie(),"S7 1 \n"); 	// vitesse moyenne
serialPrintf(master->getPortSerie(),ordre_c); 
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
!!!265858.cpp!!!	_doexit(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute exit behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.cap mission");
#endif
serialPrintf(master->getPortSerie(),"S7 0 \n"); 	// vitesse moyennee
!!!220418.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state;
