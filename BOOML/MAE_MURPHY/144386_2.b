class depot_gobelet_State
!!!166530.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!166658.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet");
#endif
// mission � 4 pts
!!!166786.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state;
!!!166658.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet");
#endif
// mission � 4 pts
