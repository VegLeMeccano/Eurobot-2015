format 76

statecanvas 128002 state_ref 142978 // mission attrap balle et chiage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 75.5 44.1 2000 1149 1155
end
pseudostatecanvas 128258 pseudostate_ref 181634 // initial
   xyz 233.8 117.8 2005
end
statecanvas 128386 state_ref 179202 // point de depart
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 104.6 171.8 2005 277 92
end
statecanvas 128642 state_ref 179330 // orientation avant reculage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 92 310.6 2005 308 145
end
statecanvas 128770 state_ref 179458 // Recalage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 91.8 496.7 2005 347 243
end
statecanvas 128898 state_ref 179586 // capture de balle
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 484.9 146.4 2005 545 215
end
statecanvas 129026 state_ref 179714 // drop pop corn
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 545.1 395.6 2005 543 257
end
statecanvas 129154 state_ref 179842 // drop gobelet
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 583.1 690.7 2005 533 187
end
pseudostatecanvas 129282 pseudostate_ref 181762 // exit_point
   xyz 253.3 1099.4 3005 label_xy 216 1115
end
statecanvas 129410 state_ref 179970 // avance
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 596.1 912.3 2005 521 103
end
statecanvas 130562 state_ref 233474 // sortie
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 396 1067 2005 515 89
end
pseudostatecanvas 131074 pseudostate_ref 237058 // exit_point
   xyz 263 253 3005 label_xy 235 272
end
transitioncanvas 128514 transition_ref 209922 // <transition>
  
  from ref 128258 z 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129922 transition_ref 210434 // <transition>
  
  from ref 128642 z 2006 label "assFini" xyz 234 467 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130050 transition_ref 210562 // <transition>
  
  from ref 128770 z 2006 label "blocage" xyz 495 420 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130178 transition_ref 210690 // <transition>
  decenter_begin 449
  
  from ref 128898 z 2006 label "fin_montee_bras" xyz 642 371 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 210818 // <transition>
  
  from ref 129026 z 2006 label "time_out" xyz 847 665 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130434 transition_ref 210946 // <transition>
  
  from ref 129154 z 2006 label "time_out" xyz 864 883 2006 to ref 129410
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130690 transition_ref 287874 // <transition>
  
  from ref 129410 z 2006 label "assFini" xyz 729 1033 2006 to ref 130562
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130818 transition_ref 288002 // <transition>
  
  from ref 130562 z 3006 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130946 transition_ref 288130 // <transition>
  
  from ref 128898 z 2006 label "time_out" xyz 792 368 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131202 transition_ref 374786 // <transition>
  
  from ref 131074 z 3006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
end
