class to_escalier_State
!!!311554.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state._to_estrade_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant.to estrade");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state._to_estrade_state.create(stm);
  }
!!!311682.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!311810.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant.to escalier");
#endif
if(master->is_Jaune()){
// BF droite sur le cine
serialPrint(master->getPortSerie(),"S5 170 919 180 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S5 -170 919 0 \n");
}
!!!311938.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._faire_chier_en_zizagant_state;
!!!311810.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.faire chier en zizagant.to escalier");
#endif
if(master->is_Jaune()){
// BF droite sur le cine
serialPrint(master->getPortSerie(),"S5 170 919 180 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S5 -170 919 0 \n");
}
