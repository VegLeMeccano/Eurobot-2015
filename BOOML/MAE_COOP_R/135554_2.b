class ascension_State
!!!140290.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!166658.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._decalage_gauche_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.decalage gauche");
#endif
    stm._mae_coop_r_state._jeu_state._decalage_gauche_state.create(stm);
  }
!!!166786.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!166914.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.ascension");
#endif
cout<<"[BOUML] etat ascension"<<endl;
// grimpe
serialPrintf (master->getPortSerie(), "S6 \n") ;
!!!166914.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.ascension");
#endif
cout<<"[BOUML] etat ascension"<<endl;
// grimpe
serialPrintf (master->getPortSerie(), "S6 \n") ;
