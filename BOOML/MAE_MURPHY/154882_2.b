class startin_block_State
!!!243842.cpp!!!	start_enleve(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu");
#endif
    stm._mae_murphy_state._jeu_state.create(stm);
  }
!!!243970.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!244098.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.startin' block");
#endif
cout<<"MURPHY IS READY, PULL THE TRIGGER !"<<endl;
serialPrintf(master->getPortSerie(),"E1 \n"); // activation de l'evitement
!!!244226.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state;
!!!243842.cpp!!!	start_enleve(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu");
#endif
    stm._mae_murphy_state._jeu_state.create(stm);
  }
!!!243970.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!244098.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.startin' block");
#endif
cout<<"MURPHY IS READY, PULL THE TRIGGER !"<<endl;
serialPrintf(master->getPortSerie(),"E1 \n"); // activation de l'evitement
!!!244226.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state;
