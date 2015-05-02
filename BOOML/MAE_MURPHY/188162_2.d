format 76

statecanvas 128002 state_ref 143234 // mission rush zone centrale
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 130.1 120.1 2000 1810 1270
end
pseudostatecanvas 128130 pseudostate_ref 230274 // initial
   xyz 232.8 230.7 2005
end
pseudostatecanvas 128258 pseudostate_ref 230402 // exit_point
   xyz 730.5 1121.4 3005 label_xy 692 1140
end
statecanvas 128514 state_ref 270722 // waypoint init
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 349.9 223.8 2005 91 33
end
statecanvas 129154 state_ref 270850 // ouverture pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 197.7 461.9 2005 277 145
end
statecanvas 129410 state_ref 270978 // BF droite stand 1
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 159.2 669.2 2005 347 131
end
statecanvas 129666 state_ref 271106 // chope stand 1
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 148.2 858.7 2005 571 145
end
statecanvas 129794 state_ref 271234 // re ouverture pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 883.8 299.4 2005 277 131
end
statecanvas 129922 state_ref 271362 // BF droite stand 2
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 840 471.1 2005 347 131
end
statecanvas 130050 state_ref 271490 // chope stand 2
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 794.5 658.9 2005 575 145
end
statecanvas 130178 state_ref 271618 // BF cap sur stand 3
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1290.8 332.3 2005 297 131
end
statecanvas 130306 state_ref 271746 // re re ouverture pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1470.8 495.8 2005 277 131
end
statecanvas 130434 state_ref 271874 // BF droite stand 3
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1440.5 661.9 2005 343 131
end
statecanvas 130562 state_ref 272002 // chope stand 3
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1337 830.6 2005 570 159
end
statecanvas 130690 state_ref 272130 // tempo pour coop'r?
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 892.8 1087.4 2005 611 159
end
pseudostatecanvas 133122 pseudostate_ref 278274 // exit_point
   xyz 424.2 245.2 3005 label_xy 420 264
end
pseudostatecanvas 133378 pseudostate_ref 291970 // choice
   xyz 1127.3 916.3 2005
end
pseudostatecanvas 134018 pseudostate_ref 292098 // choice
   xyz 532.4 271.8 2005
end
pseudostatecanvas 134530 pseudostate_ref 292226 // choice
   xyz 765.1 912.2 2005
end
transitioncanvas 129026 transition_ref 340610 // <transition>
  
  from ref 128130 z 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129538 transition_ref 340866 // <transition>
  
  from ref 129154 z 2006 label "pince_ouverte" xyz 299 630 2006 to ref 129410
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130818 transition_ref 340994 // <transition>
  
  from ref 129410 z 2006 label "assFini" xyz 362 825 2006 to ref 129666
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131074 transition_ref 341250 // <transition>
  
  from ref 129794 z 2006 label "pince_ouverte" xyz 1022 435 2006 to ref 129922
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131202 transition_ref 341378 // <transition>
  
  from ref 129922 z 2006 label "assFini" xyz 1028 625 2006 to ref 130050
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131586 transition_ref 341762 // <transition>
  
  from ref 130178 z 2006 label "assFini" xyz 1530 470 2006 to ref 130306
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132098 transition_ref 342018 // <transition>
  
  from ref 130306 z 2006 label "pince_ouverte" xyz 1612 634 2006 to ref 130434
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132226 transition_ref 342146 // <transition>
  
  from ref 130434 z 2006 label "assFini" xyz 1603 800 2006 to ref 130562
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132354 transition_ref 342274 // <transition>
  
  from ref 130562 z 2006 label "pince_stand_by" xyz 1375 1021 2006 to ref 130690
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132482 transition_ref 342402 // <transition>
  
  from ref 130690 z 3006 label "time_out" xyz 800 1128 3006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133506 transition_ref 360450 // <transition>
  
  from ref 133378 z 2006 label "[master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_depart_catched()]" xyz 924 1011 2006 to ref 130690
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133634 transition_ref 360578 // <transition>
  
  from ref 133378 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_depart_catched()]" xyz 1076 635 2006 to ref 130178
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133890 transition_ref 360834 // <transition>
  decenter_begin 432
  
  from ref 130050 z 2006 label "pince_stand_by" xyz 1049 848 2006 to ref 133378
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134146 transition_ref 360962 // <transition>
  
  from ref 133122 z 3006 to ref 134018
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134274 transition_ref 361090 // <transition>
  
  from ref 134018 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_central_catched()]" xyz 224 373 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134658 transition_ref 361346 // <transition>
  
  from ref 129666 z 2006 label "pince_stand_by" xyz 682 914 2006 to ref 134530
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134786 transition_ref 361474 // <transition>
  
  from ref 134530 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_estrade_catched()]" xyz 601 448 2006 to point 774 500
  line 135042 z 2006 to ref 129794
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134914 transition_ref 361602 // <transition>
  
  from ref 134530 z 2006 label "[master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_estrade_catched()]" xyz 720 950 2006 to ref 133378
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135170 transition_ref 361730 // <transition>
  
  from ref 134018 z 2006 label "[master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_central_catched()]" xyz 425 603 2006 to ref 134530
  write_horizontally default show_definition default drawing_language default
end
end
