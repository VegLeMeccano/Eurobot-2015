class AnyState
!!!137602.cpp!!!	stratEnleve(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->stratEnleve(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition stratEnleve not expected");
#endif
!!!138370.cpp!!!	evitement(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->evitement(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition evitement not expected");
#endif
!!!150658.cpp!!!	time_out(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->time_out(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition time_out not expected");
#endif
!!!151042.cpp!!!	ass_fini(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->ass_fini(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition ass_fini not expected");
#endif
!!!158978.cpp!!!	adversaire(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->adversaire(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition adversaire not expected");
#endif
!!!159362.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->assFini(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition assFini not expected");
#endif
!!!167554.cpp!!!	ioFini(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->ioFini(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition ioFini not expected");
#endif
!!!170114.cpp!!!	tour_roue_4(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->tour_roue_4(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition tour_roue_4 not expected");
#endif
!!!170498.cpp!!!	if(master->get_tour<4)(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->if(master->get_tour<4)(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition if(master->get_tour<4) not expected");
#endif
