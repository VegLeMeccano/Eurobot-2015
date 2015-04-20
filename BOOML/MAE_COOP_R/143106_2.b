class Evitement_State
!!!170242.cpp!!!	tour_roue_4(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
    stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state.create(stm);
  }
!!!170626.cpp!!!	if(master->get_tour<4)(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._attente_evitement_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.attente evitement");
#endif
    stm._mae_coop_r_state._jeu_state._attente_evitement_state.create(stm);
  }
!!!170754.cpp!!!	time_out(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._reprise_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.reprise");
#endif
    stm._mae_coop_r_state._jeu_state._reprise_state.create(stm);
  }
!!!170882.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!171010.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.Evitement");
#endif
// si on a atteint au moins 4 tours de roues, on stoppe l'asserv
// on raligne les roues (finir, ou attente d'asserv toujours sur un tour de roue fix)
serialPrintf (portSerie, "A \n") ;

// mettre des etats de transistions...
master->set_time_out(1000)
increment_cycle_attente()
!!!171138.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
