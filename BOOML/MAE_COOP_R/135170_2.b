class attente_State
!!!139266.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!150786.cpp!!!	time_out(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.deplacement lateral");
#endif
    stm._mae_coop_r_state._jeu_state._deplacement_lateral_state.create(stm);
  }
!!!151426.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!151554.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.attente");
#endif
cout<<"[BOUML] etat attente initial"<<endl;
master->set_time_out(100);
// activation de l'evitement
serialPrintf (master->getPortSerie(), "E1 \n") ;
!!!151554.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.attente");
#endif
cout<<"[BOUML] etat attente initial"<<endl;
master->set_time_out(3000);
// activation de l'evitement
serialPrintf (master->getPortSerie(), "E1 \n") ;
