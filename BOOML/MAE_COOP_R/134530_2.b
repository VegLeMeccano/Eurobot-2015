class MAE_COOP_R
!!!137346.cpp!!!	MAE_COOP_R()
  _current_state = 0;
!!!137986.cpp!!!	stratEnleve() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger stratEnleve");
#endif
    _current_state->stratEnleve(*this);
  }
  return (_current_state != 0);
!!!139010.cpp!!!	time_out() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger time_out");
#endif
    _current_state->time_out(*this);
  }
  return (_current_state != 0);
!!!139778.cpp!!!	adversaire() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger adversaire");
#endif
    _current_state->adversaire(*this);
  }
  return (_current_state != 0);
!!!140162.cpp!!!	assFini() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger assFini");
#endif
    _current_state->assFini(*this);
  }
  return (_current_state != 0);
!!!142594.cpp!!!	ioFini() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger ioFini");
#endif
    _current_state->ioFini(*this);
  }
  return (_current_state != 0);
!!!137602.cpp!!!	create() : bool
if (_current_state == 0)
(_current_state = &(*this)._mae_coop_r_state)->create(*this);
return (_current_state != 0);
!!!148866.cpp!!!	doActivity() : void
  _current_state->_do(*this);
!!!148994.cpp!!!	_set_currentState(inout st : MAE_COOP_R::AnyState) : void
  _current_state = &st;
!!!149122.cpp!!!	_final() : void
  _current_state = 0;
#ifdef VERBOSE_STATE_MACHINE
  puts("DEBUG : final state reached");
#endif
