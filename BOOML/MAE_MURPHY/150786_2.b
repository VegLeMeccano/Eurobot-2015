class sortie_de_zone_de_depart_State
!!!224386.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
    stm._mae_murphy_state._jeu_state._decision_state.create(stm);
  }
!!!224514.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!224642.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.sortie de zone de depart");
#endif
// avance de 200mm (400mm avec le recalage)
// attention si on laisse coop'r derri�re ou devant
serialPrint(master->getPortSerie(),"S4 200 \n");
master->get_gestionnaire_mission()->commencement_fin();
!!!224770.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state;
!!!224642.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.sortie de zone de depart");
#endif
// avance de 200mm (400mm avec le recalage)
// attention si on laisse coop'r derri�re ou devant
serialPrintf(master->getPortSerie(),"S4 200 \n");
master->get_gestionnaire_mission()->commencement_fin();
!!!224386.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._decision_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.decision");
#endif
    stm._mae_murphy_state._jeu_state._decision_state.create(stm);
  }
!!!224514.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!224642.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.sortie de zone de depart");
#endif
// avance de 200mm (400mm avec le recalage)
// attention si on laisse coop'r derri�re ou devant
serialPrintf(master->getPortSerie(),"S4 200 \n");
master->get_gestionnaire_mission()->commencement_fin();
!!!224770.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state;