class reprise_State
!!!147330.cpp!!!	adversaire(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.Evitement");
#endif
    stm._mae_coop_r_state._jeu_state._evitement_state.create(stm);
  }
!!!147458.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
    stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state.create(stm);
  }
!!!147586.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!147714.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.reprise");
#endif
if(master->get_cycle_attente()>5){
// desactivation de l'evitement :: on pousse le mec, rien a battre!
serialPrintf (master->getPortSerie(), "E0 \n") ;
}
else
{
	// reprise asserv en cours
	serialPrintf (master->getPortSerie(), "A5 \n") ;
}
!!!147842.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
