format 76

statecanvas 128002 state_ref 128386 // Jeu
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 334.24 6.8482 2000 1593 1010
end
statecanvas 128130 state_ref 142850 // mission pillage distrib
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 366.071 625.727 2005 363 110
end
statecanvas 128258 state_ref 142978 // mission attrap balle et chiage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 528.295 827.41 2005 319 110
end
statecanvas 128386 state_ref 143106 // mission claps
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 971.139 858.799 2005 300 90
end
statecanvas 128514 state_ref 143234 // mission rush zone centrale
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 351.342 436.038 2005 320 110
end
statecanvas 129026 state_ref 143490 // mission depot de tour zone depart
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1382.3 804.972 2005 281 75
end
statecanvas 129794 state_ref 157442 // sortie de zone de depart
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 350.726 106.391 2005 433 145
end
statecanvas 130178 state_ref 158722 // mission zone ennemie
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1542.01 421.393 2005 256 89
end
pseudostatecanvas 130562 pseudostate_ref 161410 // exit_point
   xyz 1211.14 851.203 3005 label_xy 1201 871
end
pseudostatecanvas 130690 pseudostate_ref 167938 // initial
   xyz 1025.4 77.4206 2005
end
statecanvas 130946 state_ref 172290 // decision
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 854.707 328.915 2005 359 131
end
pseudostatecanvas 131586 pseudostate_ref 174466 // choice
   xyz 1021.4 139.508 2005
end
pseudostatecanvas 133506 pseudostate_ref 174850 // exit_point
   xyz 711.876 715.143 3005 label_xy 674 735
end
pseudostatecanvas 134402 pseudostate_ref 181762 // exit_point
   xyz 834.467 878.191 3005 label_xy 858 885
end
statecanvas 134658 state_ref 180098 // mission depot tour estrade
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1428.7 576.769 3011 417 89
end
pseudostatecanvas 134914 pseudostate_ref 230402 // exit_point
   xyz 661.064 519.822 3005 label_xy 623 538
end
pseudostatecanvas 135170 pseudostate_ref 182018 // exit_point
   xyz 1374.9 814.702 3005 label_xy 1369 834
end
pseudostatecanvas 135426 pseudostate_ref 182530 // exit_point
   xyz 1430.6 579.934 3016 label_xy 1426 600
end
pseudostatecanvas 135682 pseudostate_ref 257282 // exit_point
   xyz 1534 475 3005 label_xy 1530 494
end
transitioncanvas 131714 transition_ref 199426 // <transition>
  
  from ref 131586 z 2006 label "[master->get_gestionnaire_mission()->commencement() == true]" xyz 751 139 2006 to ref 129794
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131842 transition_ref 199554 // <transition>
  
  from ref 130690 z 2006 to ref 131586
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131970 transition_ref 199682 // <transition>
  
  from ref 131586 z 2006 label "[master->get_gestionnaire_mission()->commencement() == false]" xyz 1047 218 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132098 transition_ref 199810 // <transition>
  
  from ref 129794 z 2006 label "assFini" xyz 792 271 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132866 transition_ref 200450 // <transition>
  
  from ref 130562 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133378 transition_ref 202626 // <transition>
  decenter_end 972
  
  from ref 130946 z 2006 label "mission_distrib" xyz 764 517 2006 to ref 128130
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133634 transition_ref 209154 // <transition>
  
  from ref 133506 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133762 transition_ref 209282 // <transition>
  
  from ref 130946 z 2006 label "mission_claps" xyz 1046 648 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133890 transition_ref 209410 // <transition>
  
  from ref 130946 z 2006 label "mission_depot_tour_depart" xyz 1225 624 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134018 transition_ref 209538 // <transition>
  
  from ref 130946 z 2006 label "mission_zone_ennemie" xyz 1301 418 2006 to ref 130178
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134146 transition_ref 209666 // <transition>
  decenter_end 919
  
  from ref 130946 z 2006 label "mission_chiage_balle" xyz 850 635 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134274 transition_ref 209794 // <transition>
  
  from ref 130946 z 2006 label "mission_zone_centrale" xyz 704 434 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134530 transition_ref 211074 // <transition>
  
  from ref 134402 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134786 transition_ref 211202 // <transition>
  
  from ref 130946 z 3012 label "mission_depot_tour_estrade" xyz 1295 491 3012 to ref 134658
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135042 transition_ref 280834 // <transition>
  
  from ref 134914 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135298 transition_ref 312834 // <transition>
  
  from ref 135170 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135554 transition_ref 313090 // <transition>
  
  from ref 135426 z 3017 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135810 transition_ref 368258 // <transition>
  
  from ref 135682 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
end
