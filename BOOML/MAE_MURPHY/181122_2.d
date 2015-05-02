format 76

statecanvas 128002 state_ref 150914 // vidage distributeur
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 109 38 2000 955 1043
end
pseudostatecanvas 128130 pseudostate_ref 209666 // initial
   xyz 181 122 2005
end
statecanvas 128258 state_ref 216450 // BF Cap objectif
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 158 181 2005 297 131
end
statecanvas 128386 state_ref 216578 // BF droite sur distrib
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 148 389 2005 349 159
end
statecanvas 128770 state_ref 216706 // BF avance jusquau blocage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 157 663 2005 335 103
end
statecanvas 128898 state_ref 216834 // SET Y CAP
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 658 141 2005 349 159
end
statecanvas 129026 state_ref 216962 // pompage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 507 364 2005 537 79
end
statecanvas 129154 state_ref 217090 // recule
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 669 495 2005 339 61
end
pseudostatecanvas 129282 pseudostate_ref 209794 // exit_point
   xyz 508 753 3005 label_xy 484 772
end
statecanvas 130306 state_ref 217346 // orientation vers sortie de zone
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 713 633 3010 317 131
end
statecanvas 130562 state_ref 217474 // avance
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 697 829 2005 327 159
end
transitioncanvas 128514 transition_ref 258562 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 128642 transition_ref 258690 // <transition>
  
  from ref 128258 z 2006 label "assFini" xyz 295 342 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129410 transition_ref 259074 // <transition>
  
  from ref 128386 z 2006 label "assFini" xyz 304 597 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129538 transition_ref 259202 // <transition>
  
  from ref 128770 z 2006 label "blocage" xyz 541 473 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129666 transition_ref 259330 // <transition>
  
  from ref 128898 z 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129794 transition_ref 259458 // <transition>
  
  from ref 129026 z 2006 label "distrib_deboite" xyz 772 460 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130434 transition_ref 259714 // <transition>
  
  from ref 129154 z 3011 label "assFini" xyz 833 586 3011 to ref 130306
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130690 transition_ref 259842 // <transition>
  
  from ref 130306 z 3011 label "assFini" xyz 847 788 3011 to ref 130562
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130818 transition_ref 259970 // <transition>
  
  from ref 130562 z 3006 label "assFini" xyz 594 794 3006 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
end
