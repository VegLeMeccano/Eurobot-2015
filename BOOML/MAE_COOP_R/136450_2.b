class fin_de_jeu_State
!!!142722.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!169730.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!169858.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.fin de jeu");
#endif
// fin de mission
cout<<"########  FIN DE JEU  ###########"<<endl;
!!!169858.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.fin de jeu");
#endif
// fin de mission
cout<<"########  FIN DE JEU  ###########"<<endl;
