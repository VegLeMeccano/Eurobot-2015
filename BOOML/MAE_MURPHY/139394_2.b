class BF_avance_State
!!!175490.cpp!!!	assFini(inout stm : MAE_MURPHY) : void

  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._chope_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.chope");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._chope_state.create(stm!!!175618.cpp!!!	create(inout stm : MAE_MURPHY) : void
) : void
	_doen!!!175746.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
AE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF avance");
#endif
serialPrintf(master->getPort!!!175874.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
URPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stan!!!175490.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._chope_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.chope");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state._chope_state.create(stm);
  }
!!!175618.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!175746.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure.BF avance");
#endif
serialPrintf(master->getPortSerie(),"S4 120 \n");
!!!175874.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state;
