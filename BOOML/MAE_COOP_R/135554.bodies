class ascension_State
!!!141570.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._decalage_gauche_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.decalage gauche");
#endif
    stm._mae_coop_r_state._jeu_state._decalage_gauche_state.create(stm);
  }
!!!141698.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!141826.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.ascension");
#endif
cout<<"[BOUML] etat ascension"<<endl;
// grimpe
serialPrintf (master->getPortSerie(), "S0 20000 \n") ;
!!!141954.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
