class Attente_State
!!!138242.cpp!!!	stratEnleve(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu");
#endif
    stm._mae_coop_r_state._jeu_state.create(stm);
  }
!!!138370.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!138498.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Attente");
#endif
cout<<"[BOUML] etat attente"<<endl;
//cout<<"portSerie : "<<master->getPortSerie()<<endl;
!!!138626.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state;
