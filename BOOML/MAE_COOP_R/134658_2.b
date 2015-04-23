class AnyState
!!!138114.cpp!!!	stratEnleve(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->stratEnleve(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition stratEnleve not expected");
#endif
!!!139138.cpp!!!	time_out(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->time_out(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition time_out not expected");
#endif
!!!139906.cpp!!!	adversaire(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->adversaire(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition adversaire not expected");
#endif
!!!140290.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->assFini(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition assFini not expected");
#endif
!!!142722.cpp!!!	ioFini(inout stm : MAE_COOP_R) : void
  AnyState * st = _upper(stm);

  if (st != 0)
    st->ioFini(stm);
#ifdef VERBOSE_STATE_MACHINE
  else
    puts("DEBUG : transition ioFini not expected");
#endif
