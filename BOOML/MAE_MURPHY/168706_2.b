class orientation_vers_objectif_State
!!!208386.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._bf_droite_vers_lobjectif_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.BF droite vers l'objectif");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state._bf_droite_vers_lobjectif_state.create(stm);
  }
!!!208514.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!208642.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.orientation vers objectif");
#endif
// BCAP
string ordre;
ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission() + " \n";
serialPrint(master->getPortSerie(),ordre);
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
!!!208770.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._rejoindre_le_point_de_depart_mission_state;
!!!208642.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.rejoindre le point de depart mission.orientation vers objectif");
#endif
// BCAP
string ordre;
ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission() + " \n";
serialPrint(master->getPortSerie(),ordre);
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
