class orientation_avant_reculage_State
!!!187778.cpp!!!	assFini(inout stm : MAE_MURPHY) : void

  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._recalage_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.Recalage");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._recalage_state.create(stm!!!187906.cpp!!!	create(inout stm : MAE_MURPHY) : void
) : void
	_doen!!!188034.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
tm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.orientation avant reculage");
#endif
if(master->is_Jaune()){
// vers le centre de la table
serialPrintf(master->getPortSerie(),"S3 0 \n");
}
if(master->is_Vert()){
serialPrintf(master!!!188162.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
 MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_attrap_!!!187778.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._recalage_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission attrap balle et chiage.Recalage");
#endif
    stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state._recalage_state.create(stm);
  }
!!!187906.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!188034.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission attrap balle et chiage.orientation avant reculage");
#endif
if(master->is_Jaune()){
// vers le centre de la table
serialPrintf(master->getPortSerie(),"S3 0 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S3 180 \n");
}
!!!188162.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_attrap_balle_et_chiage_state;
