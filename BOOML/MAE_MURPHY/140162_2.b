class BF_avance_jusquau_blocage_State
!!!178562.cpp!!!	blocage(inout stm : MAE_MURPHY) : void
  _do(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._set_y_cap_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.SET Y CAP");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._set_y_cap_state.create(stm);
  }
!!!178690.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!178818.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF avance jusquau blocage");
#endif
serialPrint(master->getPortSerie(),"S4 200 \n");
!!!178946.cpp!!!	_do(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute do behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF avance jusquau blocage");
#endif
serialPrint(master->getPortSerie(),"S1 \n");
!!!179074.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
!!!178818.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF avance jusquau blocage");
#endif
serialPrintf(master->getPortSerie(),"S4 200 \n");
!!!178946.cpp!!!	_do(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute do behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF avance jusquau blocage");
#endif
serialPrintf(master->getPortSerie(),"S1 \n");
