class BF_Cap_State
!!!163458.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission depot tour estrade");
#endif
    stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state._exit2(stm);
  }
!!!163586.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!163714.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.BF Cap");
#endif
cout<<"depot estrade : demi tour"<<endl;
serialPrintf(master->getPortSerie(),"S3 90 \n");
!!!163842.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_depot_tour_estrade_state;
!!!163714.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission depot tour estrade.BF Cap");
#endif
cout<<"depot estrade : demi tour"<<endl;
serialPrintf(master->getPortSerie(),"S3 90 \n");
