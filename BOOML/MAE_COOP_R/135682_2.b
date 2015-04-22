class decalage_gauche_State
!!!140802.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!167042.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._preparation_pose_premier_tapis_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.preparation pose premier tapis");
#endif
    stm._mae_coop_r_state._jeu_state._preparation_pose_premier_tapis_state.create(stm);
  }
!!!167170.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!167298.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.decalage gauche");
#endif
// decalage gauche
serialPrintf (portSerie, "A3 \n") ;
!!!167298.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.decalage gauche");
#endif
// decalage gauche
serialPrintf (portSerie, "A3 \n") ;
