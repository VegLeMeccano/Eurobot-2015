class BF_droite_to_mission_State
!!!219394.cpp!!!	_exit19(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._prepare_la_pose_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.prepare la pose");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._prepare_la_pose_state.create(stm);
  }
!!!219522.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.cap mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._cap_mission_state.create(stm);
  }
!!!219650.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!219778.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.BF droite to mission");
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
!!!219906.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state;
!!!219778.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.BF droite to mission");
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
!!!219394.cpp!!!	_exit19(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._prepare_la_pose_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.prepare la pose");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._prepare_la_pose_state.create(stm);
  }
!!!219522.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.cap mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state._cap_mission_state.create(stm);
  }
!!!219650.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!219778.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.way point initial.BF droite to mission");
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
!!!219906.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._way_point_initial_state;
