class bumper_en_bas_des_marches_State
!!!171778.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._attente_recalibration_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.attente recalibration");
#endif
    stm._mae_coop_r_state._jeu_state._attente_recalibration_state.create(stm);
  }
!!!171906.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!172034.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.bumper en bas des marches");
#endif
// on va bumper en bas des marches
// on suppose que c'est pas possible qu'il y ait n con qui passe devant... a verifier
serialPrintf (portSerie, "A6 \n") ;
!!!172162.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!172034.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.bumper en bas des marches");
#endif
cout<<"[BOUML] etat bumper bas des marches"<<endl;
// on va bumper en bas des marches
// on suppose que c'est pas possible qu'il y ait n con qui passe devant... a verifier
serialPrintf (master->getPortSerie(), "A6 \n") ;
