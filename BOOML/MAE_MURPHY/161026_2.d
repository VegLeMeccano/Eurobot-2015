format 76

statecanvas 128002 state_ref 142978 // mission attrap balle et chiage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 74.5 41.1 2000 1057 763
end
pseudostatecanvas 128258 pseudostate_ref 181634 // initial
   xyz 232.8 117.8 2005
end
statecanvas 128386 state_ref 179202 // point de depart
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 104.6 180.8 2005 277 92
end
statecanvas 128642 state_ref 179330 // orientation avant reculage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 107 307.6 2005 308 114
end
statecanvas 128770 state_ref 179458 // Recalage
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 129.8 463.7 2005 246 101
end
statecanvas 128898 state_ref 179586 // capture de balle
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 578.9 143.4 2005 286 108
end
statecanvas 129026 state_ref 179714 // drop pop corn
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 588.1 308.6 2005 283 112
end
statecanvas 129154 state_ref 179842 // drop gobelet
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 581.1 469.7 2005 303 121
end
pseudostatecanvas 129282 pseudostate_ref 181762 // exit_point
   xyz 438.3 707.4 3005 label_xy 401 723
end
statecanvas 129410 state_ref 179970 // sortie
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 617.1 646.3 2005 246 103
end
transitioncanvas 128514 transition_ref 209922 // <transition>
  
  from ref 128258 z 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129538 transition_ref 210050 // <transition>
  
  from ref 129410 z 3006 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129666 transition_ref 210178 // <transition>
  
  from ref 128386 z 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129922 transition_ref 210434 // <transition>
  
  from ref 128642 z 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130050 transition_ref 210562 // <transition>
  
  from ref 128770 z 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130178 transition_ref 210690 // <transition>
  
  from ref 128898 z 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 210818 // <transition>
  
  from ref 129026 z 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130434 transition_ref 210946 // <transition>
  
  from ref 129154 z 2006 to ref 129410
  write_horizontally default show_definition default drawing_language default
end
end
