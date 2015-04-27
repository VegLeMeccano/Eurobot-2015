class capture_stand_bordure_State
!!!160002.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
!!!185602.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state.create(stm);
    return (bool) 1;
  }
!!!185730.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
	_completion(stm);
!!!185858.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure");
#endif
// Jaune : pile gauche +1
// element_robot.pile_gauche_incr();


// Vert : pile droite +1
// element_robot.pile_droite_incr();
!!!185858.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure");
#endif
// Jaune : pile gauche +1
// element_robot.pile_gauche_incr();


// Vert : pile droite +1
// element_robot.pile_droite_incr();
