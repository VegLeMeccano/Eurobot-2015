class BF_cap_vers_la_zone_adverse_State
!!!304514.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._exit20(stm);
  }
!!!304642.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!304770.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.BF cap vers la zone adverse");
#endif
// demi-tour
if(master->is_Jaune()){
	serialPrint(master->getPortSerie(),"S3 0 \n"); 
}
if(master->is_Vert()){
	serialPrint(master->getPortSerie(),"S3 180 \n"); 
}
!!!304898.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
!!!304770.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.BF cap vers la zone adverse");
#endif
// demi-tour
if(master->is_Jaune()){
	serialPrint(master->getPortSerie(),"S3 0 \n"); 
}
if(master->is_Vert()){
	serialPrint(master->getPortSerie(),"S3 180 \n"); 
}
