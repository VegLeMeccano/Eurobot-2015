class Jeu_State
!!!149890.cpp!!!	evitement(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Evitement");
#endif
    stm._mae_murphy_state._evitement_state.create(stm);
  }
!!!167426.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    if (commencement == true) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._sortie_de_zone_de_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.sortie de zone de depart");
#endif
      stm._mae_murphy_state._jeu_state._sortie_de_zone_de_depart_state.create(stm);
    }
    else {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
      stm._mae_murphy_state._jeu_state._decision_state.create(stm);
    }
  }
!!!167554.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu");
#endif
cout<<"etat game"<<endl;
!!!167682.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state;
!!!167554.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu");
#endif
cout<<"etat game"<<endl;
