format 76

statecanvas 128002 state_ref 143106 // mission claps
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 120 73 2000 1490 881
end
pseudostatecanvas 128130 pseudostate_ref 154754 // initial
   xyz 190.6 154.2 2005
end
statecanvas 128258 state_ref 157570 // chope du stand sur la route
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 145.4 333.8 2005 303 61
end
statecanvas 128514 state_ref 157698 // chope du coin
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 573 702.2 2005 295 103
end
statecanvas 128770 state_ref 157954 // claps estrade
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1123 716.4 2005 243 61
end
statecanvas 129026 state_ref 158210 // waypoint initial
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 291.2 146.4 2005 245 61
end
statecanvas 129282 state_ref 158466 // sortie de zone
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1371.2 444.6 2005 154 60
end
pseudostatecanvas 130306 pseudostate_ref 161410 // exit_point
   xyz 1552.6 465.6 3005 label_xy 1541 484
end
pseudostatecanvas 131970 pseudostate_ref 243586 // exit_point
   xyz 239.2 377.4 3005 label_xy 220 396
end
pseudostatecanvas 132226 pseudostate_ref 243714 // exit_point
   xyz 808.8 694.8 3005 label_xy 793 713
end
pseudostatecanvas 133250 pseudostate_ref 216834 // exit_point
   xyz 1342.6 711.6 3005 label_xy 1324 730
end
pseudostatecanvas 134018 pseudostate_ref 250754 // exit_point
   xyz 1515 470.6 3005 label_xy 1511 488
end
pseudostatecanvas 134274 pseudostate_ref 284930 // exit_point
   xyz 396 197.4 3005 label_xy 386 216
end
pseudostatecanvas 134786 pseudostate_ref 285186 // choice
   xyz 477.6 249.8 2005
end
pseudostatecanvas 135298 pseudostate_ref 285314 // choice
   xyz 738.8 439 2005
end
pseudostatecanvas 135682 pseudostate_ref 285442 // choice
   xyz 1014.4 553.2 2005
end
transitioncanvas 130562 transition_ref 266498 // <transition>
  
  from ref 128130 z 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134146 transition_ref 306306 // <transition>
  
  from ref 134018 z 3006 to ref 130306
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134530 transition_ref 350210 // <transition>
  
  from ref 133250 z 3006 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135042 transition_ref 350850 // <transition>
  
  from ref 134274 z 3006 to ref 134786
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135170 transition_ref 350978 // <transition>
  
  from ref 134786 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_claps()->is_stand_depart_done()]" xyz 207 295 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135426 transition_ref 351106 // <transition>
  
  from ref 134786 z 2006 label "[master->get_gestionnaire_mission()->get_mission_claps()->is_stand_depart_done()]" xyz 412 355 2006 to ref 135298
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135554 transition_ref 351234 // <transition>
  
  from ref 131970 z 3006 to ref 135298
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135810 transition_ref 351362 // <transition>
  
  from ref 135298 z 2006 label "[master->get_gestionnaire_mission()->get_mission_claps()->is_zone_coin_done()]" xyz 685 500 2006 to ref 135682
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 136322 transition_ref 351618 // <transition>
  
  from ref 135298 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_claps()->is_zone_coin_done()]" xyz 397 580 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 136450 transition_ref 351746 // <transition>
  
  from ref 132226 z 3006 to ref 135682
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 136578 transition_ref 351874 // <transition>
  
  from ref 135682 z 2006 label "[master->get_gestionnaire_mission()->get_mission_claps()->is_clap_estrade_done()]" xyz 999 521 2006 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 136706 transition_ref 352002 // <transition>
  
  from ref 135682 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_claps()->is_clap_estrade_done()]" xyz 916 640 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
end
