class mission_attrap_balle_et_chiage_State
!!!185474.cpp!!!	create(inout stm : MAE_MURPHY) : void

  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state.create(st!!!190978.cpp!!!	_exit10(inout stm : MAE_MURPHY) : void
Y) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
    stm._mae_murphy_state._jeu_state._decision_state.c!!!192130.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage");
#endif
// de but : pres de zone de depart
cout<<"!!!192258.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
: MAE_MURPHY::AnyState
  return &stm._mae_m!!!185474.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.point de depart");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._point_de_depart_state.create(stm);
  }
!!!190978.cpp!!!	_exit10(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
    stm._mae_murphy_state._jeu_state._decision_state.create(stm);
  }
!!!192130.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage");
#endif
// de but : pres de zone de depart
cout<<"MISSION CHIAGE & BALL"<<endl;
!!!192258.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state;
