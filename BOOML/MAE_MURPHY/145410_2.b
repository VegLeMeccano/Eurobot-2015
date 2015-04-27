class BF_90_deg_State
!!!170882.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._recule_depart_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.Recule depart");
#endif
    stm._mae_murphy_state._recalage_initial_state._recule_depart_state.create(stm);
  }
!!!171010.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!171138.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.BF -90 deg");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S3 -90 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 90 \n");
}
!!!171266.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._recalage_initial_state;
!!!171138.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.BF -90 deg");
#endif
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S3 -90 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 90 \n");
}
