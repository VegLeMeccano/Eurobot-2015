class attente_evitement_State
!!!171266.cpp!!!	time_out(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._reprise_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.reprise");
#endif
    stm._mae_coop_r_state._jeu_state._reprise_state.create(stm);
  }
!!!171394.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!171522.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.attente evitement");
#endif
master->set_time_out()
increment_cycle_attente()
!!!171650.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
