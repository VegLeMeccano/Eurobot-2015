class cap_to_mission_State
!!!206594.cpp!!!	assFini(inout stm : MAE_MURPHY) : void

  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._waypoint_initial_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.waypoint initial.BF droite to mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._waypoint_initial_state._bf_droite_to_mission_state.create(stm!!!206722.cpp!!!	create(inout stm : MAE_MURPHY) : void
) : void
	_doen!!!206850.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
m : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.waypoint initial.cap to mission");
#endif
// BCAP
string ordre;
ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
const char* ordre_c = ordre.c_str();
serialPrintf(master->getPortSerie(),ordre_c);
cout<<"ORIENTATION!!!206978.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._wa!!!206594.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._waypoint_initial_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.waypoint initial.BF droite to mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._waypoint_initial_state._bf_droite_to_mission_state.create(stm);
  }
!!!206722.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!206850.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.waypoint initial.cap to mission");
#endif
// BCAP
string ordre;
ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
const char* ordre_c = ordre.c_str();
serialPrintf(master->getPortSerie(),ordre_c);
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
!!!206978.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._waypoint_initial_state;
