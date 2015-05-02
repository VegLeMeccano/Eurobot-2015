format 76

statecanvas 128002 state_ref 157698 // chope du coin
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 87.0093 -81.7489 2000 1833 1287
end
pseudostatecanvas 128130 pseudostate_ref 216578 // initial
   xyz 215.377 17.6147 2005
end
statecanvas 128386 state_ref 225282 // BF droite sur le verre
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 113.282 35.9873 2005 345 159
end
statecanvas 128514 state_ref 225410 // chope gobelet
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 121.648 253.225 2005 465 89
end
statecanvas 128642 state_ref 225538 // recule des stands
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 185.497 417.727 2005 335 61
end
statecanvas 128770 state_ref 225666 // BF CAP
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 184.016 559.295 2005 329 61
end
statecanvas 128898 state_ref 225794 // recule vers la zone de depart
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 547.706 38.9514 2005 335 61
end
statecanvas 129026 state_ref 225922 // BF droite vers les stands
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 629.636 145.154 2005 343 159
end
statecanvas 129154 state_ref 226050 // ouvre pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 728.676 337.657 2005 273 145
end
pseudostatecanvas 130306 pseudostate_ref 243714 // exit_point
   xyz 1144.66 1041.84 3005 label_xy 1129 1062
end
statecanvas 130434 state_ref 279426 // avance
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 699.036 538.85 2005 331 61
end
statecanvas 130562 state_ref 279554 // chope stand 1
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 726.616 636.106 2005 273 145
end
statecanvas 130690 state_ref 279682 // re ouvre pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 772.096 884.851 2005 273 145
end
statecanvas 130818 state_ref 279810 // re avance
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1315.53 17.1867 2005 331 75
end
statecanvas 130946 state_ref 279938 // chope stand 2
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1512.98 123.392 2005 273 145
end
statecanvas 131074 state_ref 280066 // recalage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1472.69 478.297 2005 309 103
end
statecanvas 131202 state_ref 280194 // BF CAP pour claps
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1474.17 310.532 2005 293 159
end
statecanvas 131330 state_ref 280322 // deboit claps coin
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1309.95 929.48 2005 501 173
end
statecanvas 133506 state_ref 280450 // set X CAP
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1422.49 608.722 2005 429 173
end
statecanvas 134146 state_ref 280578 // avance claps
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1466.5 818.987 2005 293 89
end
transitioncanvas 129538 transition_ref 296194 // <transition>
  
  from ref 128386 z 2006 label "assFini" xyz 281 211 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129666 transition_ref 296322 // <transition>
  
  from ref 128514 z 2006 label "time_out" xyz 331 373 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129794 transition_ref 296450 // <transition>
  
  from ref 128642 z 2006 label "assFini" xyz 332 508 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129922 transition_ref 296578 // <transition>
  
  from ref 128770 z 2006 label "assFini" xyz 513 321 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130050 transition_ref 296706 // <transition>
  
  from ref 128898 z 2006 label "assFini" xyz 725 117 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130178 transition_ref 296834 // <transition>
  
  from ref 129026 z 2006 label "assFini" xyz 843 312 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131458 transition_ref 352130 // <transition>
  
  from ref 129154 z 2006 label "pince_ouverte" xyz 830 502 2006 to ref 130434
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131586 transition_ref 352258 // <transition>
  
  from ref 130434 z 2006 label "assFini" xyz 845 611 2006 to ref 130562
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131714 transition_ref 352386 // <transition>
  
  from ref 130562 z 2006 label "pince_stand_by" xyz 845 823 2006 to ref 130690
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131842 transition_ref 352514 // <transition>
  
  from ref 130690 z 2006 label "pince_ouverte" xyz 1170 480 2006 to ref 130818
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132354 transition_ref 352770 // <transition>
  
  from ref 130818 z 2006 label "assFini" xyz 1529 103 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132482 transition_ref 352898 // <transition>
  decenter_begin 495
  
  from ref 131330 z 3006 label "claps_replie" xyz 1210 1023 3006 to ref 130306
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132994 transition_ref 353154 // <transition>
  
  from ref 128130 z 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133634 transition_ref 353282 // <transition>
  
  from ref 130946 z 2006 label "pince_stand_by" xyz 1594 282 2006 to ref 131202
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133762 transition_ref 353410 // <transition>
  
  from ref 131202 z 2006 label "assFini" xyz 1604 462 2006 to ref 131074
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133890 transition_ref 353538 // <transition>
  
  from ref 131074 z 2006 label "blocage" xyz 1608 591 2006 to ref 133506
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134274 transition_ref 353794 // <transition>
  
  from ref 133506 z 2006 label "time_out" xyz 1601 785 2006 to ref 134146
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134402 transition_ref 353922 // <transition>
  
  from ref 134146 z 2006 label "assFini" xyz 1566 914 2006 to ref 131330
  write_horizontally default show_definition default drawing_language default
end
end
