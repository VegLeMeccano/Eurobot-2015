class vidage_distributeur_State
!!!177410.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._bf_droite_sur_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF droite sur distrib");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._bf_droite_sur_distrib_state.create(stm);
  }
!!!181122.cpp!!!	_exit6(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.sortie zone");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state.create(stm);
  }
!!!182274.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur");
#endif
// element_robot.aspire();
// mission_distrib.netoyage_zone_done(); 
cout<<"vidage distributeur"<<endl;
!!!182402.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
!!!182274.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur");
#endif
// element_robot.aspire();
// mission_distrib.netoyage_zone_done(); 
cout<<"vidage distributeur"<<endl;
