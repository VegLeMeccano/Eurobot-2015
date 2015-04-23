class decalage_droite_State
!!!142082.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
!!!168450.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._preparation_pose_second_tapis_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.preparation pose second tapis");
#endif
    stm._mae_coop_r_state._jeu_state._preparation_pose_second_tapis_state.create(stm);
  }
!!!168578.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!168706.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.decalage droite");
#endif
cout<<"[BOUML] etat decalage droite"<<endl;
// decalage gauche
serialPrintf (master->getPortSerie(), "A2 \n") ;
!!!168706.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.decalage droite");
#endif
cout<<"[BOUML] etat decalage droite"<<endl;
// decalage gauche
serialPrintf (master->getPortSerie(), "A2 \n") ;
