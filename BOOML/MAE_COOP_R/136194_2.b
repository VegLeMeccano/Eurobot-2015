class preparation_pose_second_tapis_State
!!!142338.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!168834.cpp!!!	ioFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._remonte_2_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.remonte 2");
#endif
    stm._mae_coop_r_state._jeu_state._remonte_2_state.create(stm);
  }
!!!168962.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!169090.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.preparation pose second tapis");
#endif
// deployement du second tapis
serialPrintf (portSerie, "T2 \n") ;
!!!169090.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.preparation pose second tapis");
#endif
// deployement du second tapis
serialPrintf (portSerie, "T2 \n") ;
