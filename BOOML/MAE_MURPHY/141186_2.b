class BF_droite_vers_lobjectif_State
!!!183298.cpp!!!	assFini(inout stm : MAE_MURPHY) : void

  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._orientation_cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.orientation cap mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._orientation_cap_mission_state.create(stm!!!183426.cpp!!!	create(inout stm : MAE_MURPHY) : void
) : void
	_doen!!!183554.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
out stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.BF droite vers l'objectif");
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
cout!!!183682.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
HY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_poi!!!183298.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._orientation_cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.orientation cap mission");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._orientation_cap_mission_state.create(stm);
  }
!!!183426.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!183554.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.BF droite vers l'objectif");
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
!!!183682.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state;
