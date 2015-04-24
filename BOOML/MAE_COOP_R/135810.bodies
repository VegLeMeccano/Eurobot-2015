class preparation_pose_premier_tapis_State
!!!142850.cpp!!!	ioFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._remonte_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.remonte");
#endif
    stm._mae_coop_r_state._jeu_state._remonte_state.create(stm);
  }
!!!142978.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!143106.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.preparation pose premier tapis");
#endif
cout<<"[BOUML] etat preparation pose tapis 1"<<endl;
// deployement du premier tapis
serialPrintf (master->getPortSerie(), "T0 \n") ;
!!!143234.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
