format 76

statecanvas 128002 state_ref 143234 // mission rush zone centrale
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 118.6 157.5 2000 1393 1066
end
pseudostatecanvas 128130 pseudostate_ref 230274 // initial
   xyz 221 266 2005
end
pseudostatecanvas 128258 pseudostate_ref 230402 // exit_point
   xyz 718.8 1157.4 3005 label_xy 680 1176
end
statecanvas 128514 state_ref 270722 // waypoint init
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 338.2 258.6 2005 91 33
end
statecanvas 129154 state_ref 270850 // ouverture pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 175.8 354.3 2005 273 145
end
statecanvas 129410 state_ref 270978 // BF droite stand 1
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 152.3 546.9 2005 343 131
end
statecanvas 129666 state_ref 271106 // chope stand 1
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 345.1 736.2 2005 273 131
end
statecanvas 129794 state_ref 271234 // re ouverture pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 614.8 275.6 2005 273 131
end
statecanvas 129922 state_ref 271362 // BF droite stand 2
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 705.5 459.7 2005 343 131
end
statecanvas 130050 state_ref 271490 // chope stand 2
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 687.2 679.1 2005 273 131
end
statecanvas 130178 state_ref 271618 // BF cap sur stand 3
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1133.1 364.6 2005 293 131
end
statecanvas 130306 state_ref 271746 // re re ouverture pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1218.1 531.4 2005 273 131
end
statecanvas 130434 state_ref 271874 // BF droite stand 3
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1148.1 709.4 2005 343 131
end
statecanvas 130562 state_ref 272002 // chope stand 3
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1065.4 908.2 2005 273 131
end
statecanvas 130690 state_ref 272130 // tempo pour coop'r?
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 944.3 1100.5 2005 227 61
end
pseudostatecanvas 133122 pseudostate_ref 278274 // exit_point
   xyz 413.8 281 3005 label_xy 409 300
end
transitioncanvas 129026 transition_ref 340610 // <transition>
  
  from ref 128130 z 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129538 transition_ref 340866 // <transition>
  
  from ref 129154 z 2006 label "pince_ouverte" xyz 283 515 2006 to ref 129410
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130818 transition_ref 340994 // <transition>
  
  from ref 129410 z 2006 label "assFini" xyz 381 700 2006 to ref 129666
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130946 transition_ref 341122 // <transition>
  
  from ref 129666 z 2006 label "pince_stand_by" xyz 576 564 2006 to ref 129794
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131074 transition_ref 341250 // <transition>
  
  from ref 129794 z 2006 label "pince_ouverte" xyz 777 424 2006 to ref 129922
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131202 transition_ref 341378 // <transition>
  
  from ref 129922 z 2006 label "assFini" xyz 830 625 2006 to ref 130050
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131330 transition_ref 341506 // <transition>
  
  from ref 130050 z 2006 label "pince_stand_by" xyz 1019 570 2006 to ref 130178
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131586 transition_ref 341762 // <transition>
  
  from ref 130178 z 2006 label "assFini" xyz 1285 464 2006 to ref 130306
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132098 transition_ref 342018 // <transition>
  
  from ref 130306 z 2006 label "pince_ouverte" xyz 1297 685 2006 to ref 130434
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132226 transition_ref 342146 // <transition>
  
  from ref 130434 z 2006 label "assFini" xyz 1246 858 2006 to ref 130562
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132354 transition_ref 342274 // <transition>
  
  from ref 130562 z 2006 label "pince_stand_by" xyz 1071 1061 2006 to ref 130690
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132482 transition_ref 342402 // <transition>
  
  from ref 130690 z 3006 label "time_out" xyz 820 1144 3006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133250 transition_ref 343042 // <transition>
  
  from ref 133122 z 3006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
end
