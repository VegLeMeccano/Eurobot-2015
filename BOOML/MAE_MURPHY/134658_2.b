class AnyState
!!!156034.cpp!!!	start_mis(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->start_mis(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition start_mis not expected");
#endif
!!!157058.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->assFini(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition assFini not expected");
#endif
!!!159234.cpp!!!	pince_lache(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->pince_lache(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition pince_lache not expected");
#endif
!!!160642.cpp!!!	pince_ready_to_drop(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->pince_ready_to_drop(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition pince_ready_to_drop not expected");
#endif
!!!161410.cpp!!!	blocage(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->blocage(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition blocage not expected");
#endif
!!!162818.cpp!!!	pince_range(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->pince_range(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition pince_range not expected");
#endif
!!!164354.cpp!!!	evitement(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->evitement(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition evitement not expected");
#endif
!!!166018.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->time_out(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition time_out not expected");
#endif
!!!169346.cpp!!!	pince_ouverte(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->pince_ouverte(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition pince_ouverte not expected");
#endif
!!!170626.cpp!!!	pince_stand_by(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->pince_stand_by(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition pince_stand_by not expected");
#endif
!!!179842.cpp!!!	distrib_deboite(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->distrib_deboite(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition distrib_deboite not expected");
#endif
!!!189058.cpp!!!	fin_montee_bras(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->fin_montee_bras(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition fin_montee_bras not expected");
#endif
!!!198018.cpp!!!	pince_ouverte
(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->pince_ouverte
(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition pince_ouverte
 not expected");
#endif
!!!202626.cpp!!!	claps_replie(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->claps_replie(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition claps_replie not expected");
#endif
!!!236418.cpp!!!	mission_distrib(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->mission_distrib(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition mission_distrib not expected");
#endif
!!!236802.cpp!!!	mission_claps(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->mission_claps(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition mission_claps not expected");
#endif
!!!237186.cpp!!!	mission_depot_tour_depart(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->mission_depot_tour_depart(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition mission_depot_tour_depart not expected");
#endif
!!!237570.cpp!!!	mission_zone_ennemie(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->mission_zone_ennemie(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition mission_zone_ennemie not expected");
#endif
!!!237954.cpp!!!	mission_chiage_balle(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->mission_chiage_balle(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition mission_chiage_balle not expected");
#endif
!!!238338.cpp!!!	mission_zone_centrale(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->mission_zone_centrale(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition mission_zone_centrale not expected");
#endif
!!!238722.cpp!!!	mission_depot_tour_estrade(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->mission_depot_tour_estrade(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition mission_depot_tour_estrade not expected");
#endif
!!!239490.cpp!!!	end_game(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->end_game(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition end_game not expected");
#endif
!!!243714.cpp!!!	start_enleve(inout stm : MAE_MURPHY) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->start_enleve(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition start_enleve not expected");
#endif
