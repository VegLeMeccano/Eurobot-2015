class Evitement_State
!!!168066.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Evitement");
#endif
cout<<"etat évitement"<<endl;
!!!168194.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state;
!!!199426.cpp!!!	_junction1(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._evitement_state._faire_des_maneuvre_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Evitement.faire des maneuvre");
#endif
    stm._mae_murphy_state._evitement_state._faire_des_maneuvre_state.create(stm);
  }
!!!199554.cpp!!!	_exit7(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu");
#endif
    stm._mae_murphy_state._jeu_state.create(stm);
  }
!!!168066.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Evitement");
#endif
cout<<"etat évitement"<<endl;
