class BF_CAP_vers_centre_de_la_table_State
!!!230530.cpp!!!	assFini(inout stm : MAE_MURPHY) : void
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state._ouverture_capot_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet.ouverture capot");
#endif
    stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state._ouverture_capot_state.create(stm);
  }
!!!230658.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!230786.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet.BF CAP vers centre de la table");
#endif
if(master->is_Jaune()){
// BF cap centre
serialPrint(master->getPortSerie(),"S3 180 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 0 \n");
}
!!!230914.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_zone_ennemie_state._depot_gobelet_state;
!!!230786.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission zone ennemie.depot gobelet.BF CAP vers centre de la table");
#endif
if(master->is_Jaune()){
// BF cap centre
serialPrint(master->getPortSerie(),"S3 180 \n");
}
if(master->is_Vert()){
serialPrint(master->getPortSerie(),"S3 0 \n");
}
