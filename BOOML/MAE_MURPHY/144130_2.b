class recule_des_stands_State
!!!195970.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!196098.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recule des stands");
#endif
cout<<"coin : recule pour degagement"<<endl;
serialPrintf(master->getPortSerie(),"S4 -120 \n");
!!!196226.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._chope_du_coin_state;
!!!196098.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.chope du coin.recule des stands");
#endif
cout<<"coin : recule pour degagement"<<endl;
serialPrintf(master->getPortSerie(),"S4 -120 \n");
