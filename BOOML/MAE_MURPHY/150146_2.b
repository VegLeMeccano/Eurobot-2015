class avance_State
!!!221442.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._depot_une_tour_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.depot une tour");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._depot_une_tour_state.create(stm);
  }
!!!221570.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!221698.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.avance");
#endif
cout<<"depot depart : avance pour depot"<<endl;
serialPrintf(master->getPortSerie(),"S4 120 \n"); 
	
!!!221826.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
!!!221442.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._depot_une_tour_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot de tour zone depart.depot une tour");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state._depot_une_tour_state.create(stm);
  }
!!!221570.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!221698.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot de tour zone depart.avance");
#endif
cout<<"depot depart : avance pour depot"<<endl;
serialPrintf(master->getPortSerie(),"S4 120 \n"); 
	
!!!221826.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_de_tour_zone_depart_state;
