class deplacement_lateral_State
!!!140034.cpp!!!	adversaire(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu");
#endif
    if (master->get_tour_roue() >= 4) {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
      stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state.create(stm);
    }
    else if (master->get_tour_roue() <4) {
      stm._set_currentState(stm._mae_coop_r_state._jeu_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_COOP_R.Jeu.Evitement");
#endif
      stm._mae_coop_r_state._jeu_state._evitement_state.create(stm);
    }
  }
!!!140418.cpp!!!	assFini(inout stm : MAE_COOP_R) : void
  {
    stm._set_currentState(stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state);
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : current state is now .MAE_COOP_R.Jeu.fin deplacement lateral");
#endif
    stm._mae_coop_r_state._jeu_state._fin_deplacement_lateral_state.create(stm);
  }
!!!140546.cpp!!!	create(inout stm : MAE_COOP_R) : void
	_doentry(stm);
!!!140674.cpp!!!	_doentry(inout stm : MAE_COOP_R) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_COOP_R.Jeu.deplacement lateral");
#endif
cout<<"[BOUML] etat deplacement lateral"<<endl;
if(master->is_Jaune()){
// on part sur la droite, pour 5 tour de roue
serialPrintf(master->getPortSerie(), "A2 5\n") ;
}
if(master->is_Vert()){
// on part sur la gauche
serialPrintf (master->getPortSerie(), "A3 5\n") ;
}
!!!140802.cpp!!!	_upper(inout stm : MAE_COOP_R) : MAE_COOP_R::AnyState
  return &stm._mae_coop_r_state._jeu_state;
