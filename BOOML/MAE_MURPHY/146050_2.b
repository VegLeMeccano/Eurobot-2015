class Re_set_x_cap_State
!!!173698.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial");
#endif
    stm._mae_murphy_state._recalage_initial_state._exit8(stm);
  }
!!!173826.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!173954.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.Re set x cap");
#endif
if(master->is_Jaune()){
// terrain, bordure, robot (axe de rotation)
serialPrint(master->getPortSerie(),"S0 -1334 996 -90 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S0 1334 996 90 \n");
}
master->set_time_out(300);
!!!174082.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._recalage_initial_state;
!!!173954.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.Re set x cap");
#endif
if(master->is_Jaune()){
// terrain, bordure, robot (axe de rotation)
serialPrint(master->getPortSerie(),"S0 -1334 996 -90 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S0 1334 996 90 \n");
}
master->set_time_out(300);
