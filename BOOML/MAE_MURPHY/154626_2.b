class coup_de_patte_cote_escalier_pour_confirmer_le_sens_State
!!!242306.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._recalage_initial_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Recalage Initial.avance");
#endif
    stm._mae_murphy_state._recalage_initial_state._avance_state.create(stm);
    return (bool) 1;
  }
!!!242434.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
	_completion(stm);
!!!242562.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.coup de patte cote escalier pour confirmer le sens");
#endif
if(master->is_Jaune()){
// coup de patte cote gauche
serialPrint(master->getPortSerie(),"C2 \n");
}
if(master->is_Vert()){
// coup de patte cote droit
serialPrint(master->getPortSerie(),"C0 \n");
}
//master->set_time_out(2000);
!!!242690.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._recalage_initial_state;
!!!242562.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Recalage Initial.coup de patte cote escalier pour confirmer le sens");
#endif
if(master->is_Jaune()){
// coup de patte cote gauche
serialPrint(master->getPortSerie(),"C2 \n");
}
if(master->is_Vert()){
// coup de patte cote droit
serialPrint(master->getPortSerie(),"C0 \n");
}
//master->set_time_out(2000);
