class BF_cap_mission_State
!!!187010.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state._exit9(stm);
  }
!!!187138.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!187266.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart.BF cap mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S3 " 
	+ master->get_gestionnaire()->get_cap_mission() 
	+ " \n";
serialPrint(master->getPortSerie(),ordre); 
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
!!!187394.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state;
!!!187266.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart.BF cap mission");
#endif
// BF Droite vers objectif
string ordre;
ordre = "S3 " 
	+ master->get_gestionnaire()->get_cap_mission() 
	+ " \n";
serialPrintf(master->getPortSerie(),ordre); 
cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
