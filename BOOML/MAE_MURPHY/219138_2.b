class BF_cap_mission_State
!!!315266.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._exit1(stm);
  }
!!!315394.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!315522.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF cap mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S3 " 
	+ master->get_gestionnaire()->get_cap_mission() 
	+ " \n";
serialPrint(master->getPortSerie(),ordre); 
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
!!!315650.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state;
!!!315522.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF cap mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S3 " 
	+ master->get_gestionnaire()->get_cap_mission() 
	+ " \n";
serialPrint(master->getPortSerie(),ordre); 
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
