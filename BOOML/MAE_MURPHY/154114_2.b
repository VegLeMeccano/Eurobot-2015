class faire_des_maneuvre_State
!!!240386.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!240514.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Evitement.faire des maneuvre");
#endif
// BF cap 90 ou -90 ou 180
// etat pipo d'evitement, le tout ce passe dans la decision dans le super etat Game
// sinon un petit timer...
// fermeture des pinces 
// et capot
serialPrintf(master->getPortSerie(),"P3 \n");
serialPrintf(master->getPortSerie(),"D2 \n");
serialPrintf(master->getPortSerie(),"G2 \n");
master->set_time_out(500);
cout<<"on evite"<<endl;
!!!240642.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._evitement_state;
!!!251778.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Evitement");
#endif
    stm._mae_murphy_state._evitement_state._exit26(stm);
  }
!!!251778.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Evitement");
#endif
    stm._mae_murphy_state._evitement_state._exit26(stm);
  }
!!!240386.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!240514.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Evitement.faire des maneuvre");
#endif
// BF cap 90 ou -90 ou 180
// etat pipo d'evitement, le tout ce passe dans la decision dans le super etat Game
// sinon un petit timer...
// fermeture des pinces 
// et capot
serialPrintf(master->getPortSerie(),"P3 \n");
serialPrintf(master->getPortSerie(),"D2 \n");
serialPrintf(master->getPortSerie(),"G2 \n");
master->set_time_out(50);
cout<<"on evite"<<endl;
!!!240642.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._evitement_state;
