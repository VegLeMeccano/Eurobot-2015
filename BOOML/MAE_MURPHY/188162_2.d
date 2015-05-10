format 76

statecanvas 128002 state_ref 143234 // mission rush zone centrale
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 74.1715 548.725 2000 1809 1270
end
pseudostatecanvas 128130 pseudostate_ref 230274 // initial
   xyz 176.997 659.446 2005
end
pseudostatecanvas 128258 pseudostate_ref 230402 // exit_point
   xyz 674.214 1550.41 3005 label_xy 636 1569
end
statecanvas 128514 state_ref 270722 // waypoint init
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 293.364 652.546 2005 91 33
end
statecanvas 129154 state_ref 270850 // ouverture pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 141.917 890.691 2005 347 159
end
statecanvas 129410 state_ref 270978 // BF droite stand 1
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 103.399 1098.75 2005 347 145
end
statecanvas 129666 state_ref 271106 // chope stand 1
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 92.3795 1287.03 2005 571 159
end
statecanvas 129794 state_ref 271234 // re ouverture pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 827.419 728.059 2005 351 145
end
statecanvas 129922 state_ref 271362 // BF droite stand 2
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 784.917 900.785 2005 347 145
end
statecanvas 130050 state_ref 271490 // chope stand 2
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 738.869 1087.96 2005 575 159
end
statecanvas 130178 state_ref 271618 // BF cap sur stand 3
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1215.98 704.411 2005 349 145
end
statecanvas 130306 state_ref 271746 // re re ouverture pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1414.15 924.232 2005 343 145
end
statecanvas 130434 state_ref 271874 // BF droite stand 3
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1383.76 1089.21 2005 343 145
end
statecanvas 130562 state_ref 272002 // chope stand 3
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1281.19 1259.07 2005 570 173
end
statecanvas 130690 state_ref 272130 // tempo pour coop'r?
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 836.117 1516.71 2005 611 173
end
pseudostatecanvas 133122 pseudostate_ref 278274 // exit_point
   xyz 368.38 674.914 3005 label_xy 364 693
end
pseudostatecanvas 133378 pseudostate_ref 291970 // choice
   xyz 1071.14 1345.53 2005
end
pseudostatecanvas 134018 pseudostate_ref 292098 // choice
   xyz 476.538 700.437 2005
end
pseudostatecanvas 134530 pseudostate_ref 292226 // choice
   xyz 709.331 1341.64 2005
end
transitioncanvas 129026 transition_ref 340610 // <transition>
  
  from ref 128130 z 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129538 transition_ref 340866 // <transition>
  
  from ref 129154 z 2006 label "pince_ouverte" xyz 259 1066 2006 to ref 129410
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130818 transition_ref 340994 // <transition>
  
  from ref 129410 z 2006 label "assFini" xyz 305 1261 2006 to ref 129666
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131074 transition_ref 341250 // <transition>
  
  from ref 129794 z 2006 label "pince_ouverte" xyz 983 871 2006 to ref 129922
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131202 transition_ref 341378 // <transition>
  
  from ref 129922 z 2006 label "assFini" xyz 971 1061 2006 to ref 130050
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131586 transition_ref 341762 // <transition>
  
  from ref 130178 z 2006 label "assFini" xyz 1501 868 2006 to ref 130306
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132098 transition_ref 342018 // <transition>
  
  from ref 130306 z 2006 label "pince_ouverte" xyz 1572 1070 2006 to ref 130434
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132226 transition_ref 342146 // <transition>
  
  from ref 130434 z 2006 label "assFini" xyz 1564 1057 2006 to ref 130562
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132354 transition_ref 342274 // <transition>
  
  from ref 130562 z 2006 label "pince_stand_by" xyz 1319 1457 2006 to ref 130690
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132482 transition_ref 342402 // <transition>
  
  from ref 130690 z 3006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133506 transition_ref 360450 // <transition>
  
  from ref 133378 z 2006 label "[master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_depart_catched()]" xyz 867 1440 2006 to ref 130690
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133634 transition_ref 360578 // <transition>
  
  from ref 133378 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_depart_catched()]" xyz 1022 1042 2006 to ref 130178
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133890 transition_ref 360834 // <transition>
  decenter_begin 432
  
  from ref 130050 z 2006 label "pince_stand_by" xyz 993 1284 2006 to ref 133378
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134146 transition_ref 360962 // <transition>
  
  from ref 133122 z 3006 to ref 134018
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134274 transition_ref 361090 // <transition>
  
  from ref 134018 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_central_catched()]" xyz 182 804 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134658 transition_ref 361346 // <transition>
  
  from ref 129666 z 2006 label "pince_stand_by" xyz 626 1343 2006 to ref 134530
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134786 transition_ref 361474 // <transition>
  
  from ref 134530 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_estrade_catched()]" xyz 545 877 2006 to point 718.433 929.574
  line 135042 z 2006 to ref 129794
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134914 transition_ref 361602 // <transition>
  
  from ref 134530 z 2006 label "[master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_estrade_catched()]" xyz 664 1379 2006 to ref 133378
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135170 transition_ref 361730 // <transition>
  
  from ref 134018 z 2006 label "[master->get_gestionnaire_mission()->get_mission_zone_centrale()->is_stand_central_catched()]" xyz 372 1057 2006 to ref 134530
  write_horizontally default show_definition default drawing_language default
end
end
