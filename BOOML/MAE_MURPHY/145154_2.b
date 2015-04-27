class BF_90_deg_vers_les_marches_State
!!!169730.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._recule_bordure_claps_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.Recule bordure claps");
#endif
    stm._mae_murphy_state._recalage_initial_state._recule_bordure_claps_state.create(stm);
  }
!!!169858.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!169986.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.BF 90 deg vers les marches");
#endif
if(master->is_Jaune()){
// tourne vers les marches
serialPrint(master->getPortSerie(),"S3 0 \n");
}
if(master->is_Vert()){
// tourne vers les marches
serialPrint(master->getPortSerie(),"S3 0 \n");
}
!!!170114.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._recalage_initial_state;
!!!169986.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.BF 90 deg vers les marches");
#endif
if(master->is_Jaune()){
// tourne vers les marches
serialPrint(master->getPortSerie(),"S3 0 \n");
}
if(master->is_Vert()){
// tourne vers les marches
serialPrint(master->getPortSerie(),"S3 0 \n");
}
