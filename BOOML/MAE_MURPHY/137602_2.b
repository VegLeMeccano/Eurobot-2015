class capture_stands_cote_escalier_State
!!!168066.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_cap_initial_35deg_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF cap initial 35deg");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_cap_initial_35deg_state.create(stm);
  }
!!!173314.cpp!!!	_exit4(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state.create(stm);
  }
!!!173442.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier");
#endif
/// Jaune : pile droite +2
// element_robot.pile_droite_incr();
// element_robot.pile_droite_incr();

/// Vert : pile gauche +2
// element_robot.pile_gauche_incr();
// element_robot.pile_gauche_incr();
!!!173570.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
!!!173442.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier");
#endif
/// Jaune : pile droite +2
// element_robot.pile_droite_incr();
// element_robot.pile_droite_incr();

/// Vert : pile gauche +2
// element_robot.pile_gauche_incr();
// element_robot.pile_gauche_incr();
!!!168066.cpp!!!	create(inout stm : MAE_MURPHY) : void
  _doentry(stm);
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_cap_initial_35deg_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier.BF cap initial 35deg");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state._bf_cap_initial_35deg_state.create(stm);
  }
!!!173314.cpp!!!	_exit4(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stand bordure");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stand_bordure_state.create(stm);
  }
!!!173442.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier");
#endif
/// Jaune : pile droite +2
// element_robot.pile_droite_incr();
// element_robot.pile_droite_incr();

/// Vert : pile gauche +2
// element_robot.pile_gauche_incr();
// element_robot.pile_gauche_incr();
!!!173570.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
