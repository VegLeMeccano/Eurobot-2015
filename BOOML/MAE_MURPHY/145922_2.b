class set_Y_State
!!!173186.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.avance");
#endif
    stm._mae_murphy_state._recalage_initial_state._avance_state.create(stm);
  }
!!!173314.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!173442.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.set Y");
#endif
// Y = 800 + 96 = 896
// terrain, bordure, robot (axe de rotation)
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S0 -1214 896 0 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S0 1214 896 0 \n");
}
master->set_time_out(300);
!!!173570.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._recalage_initial_state;
!!!173442.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.set Y");
#endif
// Y = 800 + 96 = 896
// terrain, bordure, robot (axe de rotation)
if(master->is_Jaune()){
serialPrint(master->getPortSerie(),"S0 -1214 896 0 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S0 1214 896 0 \n");
}
master->set_time_out(300);
