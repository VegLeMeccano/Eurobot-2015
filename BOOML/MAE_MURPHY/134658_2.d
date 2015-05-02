format 76

statecanvas 128002 state_ref 128386 // Jeu
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 334.24 -10.1518 2000 1593 1010
end
statecanvas 128130 state_ref 142850 // mission pillage distrib
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 366.071 608.727 2005 363 110
end
statecanvas 128258 state_ref 142978 // mission attrap balle et chiage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 528.295 810.41 2005 319 110
end
statecanvas 128386 state_ref 143106 // mission claps
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 971.139 841.799 2005 300 90
end
statecanvas 128514 state_ref 143234 // mission rush zone centrale
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 351.342 419.038 2005 320 110
end
statecanvas 129026 state_ref 143490 // mission depot de tour zone depart
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1382.3 787.972 2005 279 73
end
statecanvas 129794 state_ref 157442 // sortie de zone de depart
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 350.726 89.3907 2005 371 103
end
statecanvas 130178 state_ref 158722 // mission zone ennemie
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1542.01 406.393 2005 256 75
end
pseudostatecanvas 130562 pseudostate_ref 161410 // exit_point
   xyz 1211.14 834.203 3005 label_xy 1201 854
end
pseudostatecanvas 130690 pseudostate_ref 167938 // initial
   xyz 1025.4 59.4206 2005
end
statecanvas 130946 state_ref 172290 // decision
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 854.707 311.915 2005 359 131
end
pseudostatecanvas 131586 pseudostate_ref 174466 // choice
   xyz 1021.4 122.508 2005
end
pseudostatecanvas 133506 pseudostate_ref 174850 // exit_point
   xyz 711.876 698.143 3005 label_xy 674 718
end
pseudostatecanvas 134402 pseudostate_ref 181762 // exit_point
   xyz 834.467 861.191 3005 label_xy 858 868
end
statecanvas 134658 state_ref 180098 // mission depot tour estrade
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1428.7 559.769 3011 417 83
end
pseudostatecanvas 134914 pseudostate_ref 230402 // exit_point
   xyz 661.064 502.822 3005 label_xy 623 521
end
pseudostatecanvas 135170 pseudostate_ref 182018 // exit_point
   xyz 1374.9 797.702 3005 label_xy 1369 817
end
pseudostatecanvas 135426 pseudostate_ref 182530 // exit_point
   xyz 1430.6 562.934 3016 label_xy 1426 583
end
transitioncanvas 131714 transition_ref 199426 // <transition>
  
  from ref 131586 z 2006 label "[master->get_gestionnaire_mission()->commencement() == true]" xyz 720 118 2006 to ref 129794
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131842 transition_ref 199554 // <transition>
  
  from ref 130690 z 2006 to ref 131586
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131970 transition_ref 199682 // <transition>
  
  from ref 131586 z 2006 label "[master->get_gestionnaire_mission()->commencement() == false]" xyz 1047 201 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132098 transition_ref 199810 // <transition>
  
  from ref 129794 z 2006 label "assFini" xyz 755 233 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132866 transition_ref 200450 // <transition>
  
  from ref 130562 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133378 transition_ref 202626 // <transition>
  decenter_end 972
  
  from ref 130946 z 2006 label "mission_distrib" xyz 764 500 2006 to ref 128130
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133634 transition_ref 209154 // <transition>
  
  from ref 133506 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133762 transition_ref 209282 // <transition>
  
  from ref 130946 z 2006 label "mission_claps" xyz 1046 631 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133890 transition_ref 209410 // <transition>
  
  from ref 130946 z 2006 label "mission_depot_tour_depart" xyz 1226 607 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134018 transition_ref 209538 // <transition>
  
  from ref 130946 z 2006 label "mission_zone_ennemie" xyz 1301 398 2006 to ref 130178
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134146 transition_ref 209666 // <transition>
  decenter_end 919
  
  from ref 130946 z 2006 label "mission_chiage_balle" xyz 850 618 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134274 transition_ref 209794 // <transition>
  
  from ref 130946 z 2006 label "mission_zone_centrale" xyz 704 417 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134530 transition_ref 211074 // <transition>
  
  from ref 134402 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134786 transition_ref 211202 // <transition>
  
  from ref 130946 z 3012 label "mission_depot_tour_estrade" xyz 1298 474 3012 to ref 134658
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
end
