class BF_cap_State
!!!208514.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.sortie de zone.avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state._avance_state.create(stm);
    return (bool) 1;
  }
!!!208642.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
	_completion(stm);
!!!208770.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.sortie de zone.BF cap");
#endif
if(	master->get_gestionnaire_mission()->get_mission_claps()->is_stand_depart_done()
	&& master->get_gestionnaire_mission()->get_mission_claps()->is_zone_coin_done()
	&& master->get_gestionnaire_mission()->get_mission_claps()->is_claps_estrade_done())
{
	master->get_gestionnaire_mission()->get_mission_claps()->mission_remplie();
}
!!!208898.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state;
!!!208770.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.sortie de zone.BF cap");
#endif
if(	master->get_gestionnaire_mission()->get_mission_claps()->is_stand_depart_done()
	&& master->get_gestionnaire_mission()->get_mission_claps()->is_zone_coin_done()
	&& master->get_gestionnaire_mission()->get_mission_claps()->is_claps_estrade_done())
{
	master->get_gestionnaire_mission()->get_mission_claps()->mission_remplie();
}
!!!208514.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission claps.sortie de zone.avance");
#endif
    stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state._avance_state.create(stm);
    return (bool) 1;
  }
!!!208642.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
	_completion(stm);
!!!208770.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission claps.sortie de zone.BF cap");
#endif
if(	master->get_gestionnaire_mission()->get_mission_claps()->is_stand_depart_done()
	&& master->get_gestionnaire_mission()->get_mission_claps()->is_zone_coin_done()
	&& master->get_gestionnaire_mission()->get_mission_claps()->is_claps_estrade_done())
{
	master->get_gestionnaire_mission()->get_mission_claps()->mission_remplie();
}
!!!208898.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_claps_state._sortie_de_zone_state;
