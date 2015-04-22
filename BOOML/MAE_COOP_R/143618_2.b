class reprise_State
!!!172802.cpp!!!	adversaire(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.Evitement");
#endif
    stm._mae_coop_r_state._jeu_state._evitement_state.create(stm);
  }
!!!172930.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
    stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state.create(stm);
  }
!!!173058.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!173186.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.reprise");
#endif
if(compteur_cycle>5){
// desactivation de l'evitement :: on pousse le mec
serialPrintf (portSerie, "E0 \n") ;
}
else
{
	// reprise asserv en cours
	serialPrintf (portSerie, "A5 \n") ;
}

!!!173314.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!173186.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.reprise");
#endif
if(master->get_cycle_attente()>5){
// desactivation de l'evitement :: on pousse le mec, rien a battre!
serialPrintf (portSerie, "E0 \n") ;
}
else
{
	// reprise asserv en cours
	serialPrintf (portSerie, "A5 \n") ;
}
