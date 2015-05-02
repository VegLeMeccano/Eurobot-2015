class cap_mission_State
!!!211586.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._exit18(stm);
  }
!!!211714.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!211842.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init.cap mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S3 " 
	+ master->get_gestionnaire()->get_cap_mission() 
	+ " \n";
serialPrint(master->getPortSerie(),ordre); 
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
!!!211970.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state;
!!!211842.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init.cap mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S3 " 
	+ master->get_gestionnaire()->get_cap_mission() 
	+ " \n";
serialPrintf(master->getPortSerie(),ordre); 
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
!!!211586.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init");
#endif
    stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state._exit18(stm);
  }
!!!211714.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!211842.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission rush zone centrale.waypoint init.cap mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S3 " 
	+ master->get_gestionnaire()->get_cap_mission() 
	+ " \n";
serialPrintf(master->getPortSerie(),ordre); 
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
!!!211970.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_rush_zone_centrale_state._waypoint_init_state;
