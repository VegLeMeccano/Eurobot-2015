class BF_Cap_objectif_State
!!!177666.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!177794.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF Cap objectif");
#endif
cout<<"distrib : cap sur cible"<<endl;
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"S3 80 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S3 100 \n");
}
!!!177922.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
!!!177666.cpp!!!	create(inout stm : MAE_MURPHY) : void
	_doentry(stm);
!!!177794.cpp!!!	_doentry(inout stm : MAE_MURPHY) : void
#ifdef VERBOSE_STATE_MACHINE
	puts("DEBUG : execute entry behavior of .MAE_MURPHY.Jeu.mission pillage distrib.vidage distributeur.BF Cap objectif");
#endif
cout<<"distrib : cap sur cible"<<endl;
if(master->is_Jaune()){
serialPrintf(master->getPortSerie(),"S3 80 \n");
}
if(master->is_Vert()){
serialPrintf(master->getPortSerie(),"S3 100 \n");
}
!!!177922.cpp!!!	_upper(inout stm : MAE_MURPHY) : MAE_MURPHY::AnyState
  return &stm._mae_murphy_state._jeu_state._mission_pillage_distrib_state._vidage_distributeur_state;
