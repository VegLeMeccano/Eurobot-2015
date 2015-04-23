class Evitement_State
!!!143106.cpp!!!	_completion(inout stm : MAE_COOP_R) : bool
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu");
#endif
    stm._mae_coop_r_state._jeu_state.create(stm);
    return (bool) 1;
  }
!!!143234.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
	_completion(stm);
!!!143362.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Evitement");
#endif
cout<<"etat évitement"<<endl;
!!!143490.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state;
!!!145794.cpp!!!	time_out(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._reprise_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.reprise");
#endif
    stm._mae_coop_r_state._jeu_state._reprise_state.create(stm);
  }
!!!145922.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!146050.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.Evitement");
#endif
// si on a atteint au moins 4 tours de roues, on stoppe l'asserv
// on raligne les roues (finir, ou attente d'asserv toujours sur un tour de roue fix)
serialPrintf (master->getPortSerie(), "A \n") ;

// mettre des etats de transistions...
master->set_time_out(1000);
master->cycle_attente_incremente();
!!!146178.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
