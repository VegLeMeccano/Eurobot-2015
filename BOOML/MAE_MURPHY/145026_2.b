class set_X_CAP_State
!!!169218.cpp!!!	time_out(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._avance_un_peu_pour_tourner_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.avance un peu pour tourner");
#endif
    stm._mae_murphy_state._recalage_initial_state._avance_un_peu_pour_tourner_state.create(stm);
  }
!!!169346.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!169474.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.set X CAP");
#endif
if(master->is_Jaune()){
// X = -1500 + 70 +96 = -1334
// terrain, bordure, robot (axe de rotation)
serialPrint(master->getPortSerie(),"S0 -1334 0 -90 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S0 1334 0 90 \n");
}
master->set_time_out(300);
!!!169602.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._recalage_initial_state;
!!!169474.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.set X CAP");
#endif
if(master->is_Jaune()){
// X = -1500 + 70 +96 = -1334
// terrain, bordure, robot (axe de rotation)
serialPrint(master->getPortSerie(),"S0 -1334 0 -90 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S0 1334 0 90 \n");
}
master->set_time_out(300);
