class BF_cap_to_mission_State
!!!157186.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF droite to mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
  }
!!!157314.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!157442.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF cap to mission");
#endif
// BCAP
string ordre;
ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission() + " \n";
serialPrint(master->getPortSerie(),ordre);
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
!!!157570.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._waypoint_init_state;
!!!157442.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.waypoint init.BF cap to mission");
#endif
// BCAP
string ordre;
ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission() + " \n";
serialPrintf(master->getPortSerie(),ordre);
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
