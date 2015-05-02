class SET_Y_CAP_State
!!!179202.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool

  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._pompage_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.pompage");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._pompage_state.create(stm);
    return (bool)!!!179330.cpp!!!	create(inout stm : MAE_MURPHY) : void
Y) : void
	_doentry(stm);
	_compl!!!179458.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
t stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.SET Y CAP");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S0 -1789 1050 90 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->get!!!179586.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._v!!!179202.cpp!!!	_completion(inout stm : MAE_MURPHY) : bool
  {
    stm._set_currentState(stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._pompage_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.pompage");
#endif
    stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state._pompage_state.create(stm);
    return (bool) 1;
  }
!!!179330.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
	_completion(stm);
!!!179458.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.SET Y CAP");
#endif
if(master->is_Jaune()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S0 -1789 1050 90 \n");
}
if(master->is_Vert()){
// BF droite sur le gobelet 
serialPrintf(master->getPortSerie(),"S0 1789 1050 90 \n");
}
!!!179586.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
