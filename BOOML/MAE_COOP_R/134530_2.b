class MAE_COOP_R
!!!136834.cpp!!!	MAE_COOP_R()
  _current_state = 0;
!!!137090.cpp!!!	create() : bool
if (_current_state == 0)
(_current_state = &(*this)._mae_coop_r_state)->create(*this);
return (_current_state != 0);
!!!137474.cpp!!!	stratEnleve() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger stratEnleve");
#endif
    _current_state->stratEnleve(*this);
  }
  return (_current_state != 0);
!!!138242.cpp!!!	evitement() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger evitement");
#endif
    _current_state->evitement(*this);
  }
  return (_current_state != 0);
!!!143746.cpp!!!	doActivity() : void
  _current_state->_do(*this);
!!!143874.cpp!!!	_set_currentState(inout st : MAE_COOP_R::AnyState) : void
  _current_state = &st;
!!!144002.cpp!!!	_final() : void
  _current_state = 0;
#ifdef VERBOSE_STATE_MACHINE
  puts("DEBUG : final state reached");
#endif
!!!150530.cpp!!!	time_out() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger time_out");
#endif
    _current_state->time_out(*this);
  }
  return (_current_state != 0);
!!!150914.cpp!!!	ass_fini() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger ass_fini");
#endif
    _current_state->ass_fini(*this);
  }
  return (_current_state != 0);
!!!158850.cpp!!!	adversaire() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger adversaire");
#endif
    _current_state->adversaire(*this);
  }
  return (_current_state != 0);
!!!159234.cpp!!!	assFini() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger assFini");
#endif
    _current_state->assFini(*this);
  }
  return (_current_state != 0);
!!!167426.cpp!!!	ioFini() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger ioFini");
#endif
    _current_state->ioFini(*this);
  }
  return (_current_state != 0);
!!!169986.cpp!!!	tour_roue_4() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger tour_roue_4");
#endif
    _current_state->tour_roue_4(*this);
  }
  return (_current_state != 0);
!!!170370.cpp!!!	if(master->get_tour<4)() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger if(master->get_tour<4)");
#endif
    _current_state->if(master->get_tour<4)(*this);
  }
  return (_current_state != 0);
