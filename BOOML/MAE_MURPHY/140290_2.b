class MAE_MURPHY
!!!148226.cpp!!!	MAE_MURPHY()
  _current_state = 0;
!!!148482.cpp!!!	create() : bool
if (_current_state == 0)
(_current_state = &(*this)._mae_murphy_state)->create(*this);
return (_current_state != 0);
!!!148866.cpp!!!	strat_mis() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger strat_mis");
#endif
    _current_state->strat_mis(*this);
  }
  return (_current_state != 0);
!!!149634.cpp!!!	evitement() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger evitement");
#endif
    _current_state->evitement(*this);
  }
  return (_current_state != 0);
!!!156546.cpp!!!	assFini() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger assFini");
#endif
    _current_state->assFini(*this);
  }
  return (_current_state != 0);
!!!157570.cpp!!!	adversaire() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger adversaire");
#endif
    _current_state->adversaire(*this);
  }
  return (_current_state != 0);
!!!158338.cpp!!!	time_out() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger time_out");
#endif
    _current_state->time_out(*this);
  }
  return (_current_state != 0);
!!!168450.cpp!!!	blocage() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger blocage");
#endif
    _current_state->blocage(*this);
  }
  return (_current_state != 0);
!!!174594.cpp!!!	doActivity() : void
  _current_state->_do(*this);
!!!174722.cpp!!!	_set_currentState(inout st : MAE_MURPHY::AnyState) : void
  _current_state = &st;
!!!174850.cpp!!!	_final() : void
  _current_state = 0;
#ifdef VERBOSE_STATE_MACHINE
  puts("DEBUG : final state reached");
#endif
!!!175106.cpp!!!	start_enleve() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger start_enleve");
#endif
    _current_state->start_enleve(*this);
  }
  return (_current_state != 0);
!!!186370.cpp!!!	AssFini() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger AssFini");
#endif
    _current_state->AssFini(*this);
  }
  return (_current_state != 0);
!!!194306.cpp!!!	mission_distrib() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger mission_distrib");
#endif
    _current_state->mission_distrib(*this);
  }
  return (_current_state != 0);
!!!194690.cpp!!!	mission claps() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger mission claps");
#endif
    _current_state->mission claps(*this);
  }
  return (_current_state != 0);
!!!195074.cpp!!!	mission_depot_tour() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger mission_depot_tour");
#endif
    _current_state->mission_depot_tour(*this);
  }
  return (_current_state != 0);
!!!195458.cpp!!!	mission_zone_ennemie() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger mission_zone_ennemie");
#endif
    _current_state->mission_zone_ennemie(*this);
  }
  return (_current_state != 0);
!!!195842.cpp!!!	mission_chiage() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger mission_chiage");
#endif
    _current_state->mission_chiage(*this);
  }
  return (_current_state != 0);
!!!196226.cpp!!!	mission_zone_centrale() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger mission_zone_centrale");
#endif
    _current_state->mission_zone_centrale(*this);
  }
  return (_current_state != 0);
!!!196610.cpp!!!	mission_depot_estrade() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger mission_depot_estrade");
#endif
    _current_state->mission_depot_estrade(*this);
  }
  return (_current_state != 0);
!!!200578.cpp!!!	mission_claps() : bool
  if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : fire trigger mission_claps");
#endif
    _current_state->mission_claps(*this);
  }
  return (_current_state != 0);
