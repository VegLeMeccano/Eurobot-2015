class point_de_depart_mission_State
!!!186626.cpp!!!	AssFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib");
#endif
    if (mission_distrib.is_capture_gobelet_done() ) {
      stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture stands cote escalier");
#endif
      stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_stands_cote_escalier_state.create(stm);
    }
    else if (!mission_distrib.is_capture_gobelet_done() ) {
      if (!element_robot.gobelet_present()) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.capture de gobelet escalier");
#endif
        stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._capture_de_gobelet_escalier_state.create(stm);
      }
      else if (element_robot.gobelet_present()) {
        stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.sortie zone");
#endif
        stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._sortie_zone_state.create(stm);
      }
    }
  }
!!!186754.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!186882.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.point de depart mission");
#endif
// devant la zone de depart
// BF droite ?? pour y rejoindre
// si commencement -> deja la
// sinon on check ou on est puis BF cap vers le point, puis BF droite
!!!187010.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state;
!!!186882.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.point de depart mission");
#endif
// devant la zone de depart
// BF droite ?? pour y rejoindre
// si commencement -> deja la
// sinon on check ou on est puis BF cap vers le point, puis BF droite
