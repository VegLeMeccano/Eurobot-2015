format 76

statecanvas 128002 state_ref 270722 // waypoint init
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 180 33 2000 921 621
end
pseudostatecanvas 128130 pseudostate_ref 278146 // initial
   xyz 343 89 2005
end
pseudostatecanvas 128258 pseudostate_ref 278274 // exit_point
   xyz 787 517 3005 label_xy 783 536
end
statecanvas 128386 state_ref 272258 // cap to mission
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 222 202 2005 437 117
end
statecanvas 128514 state_ref 272386 // BF droite to mission
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 292 370 2005 333 201
end
statecanvas 128642 state_ref 272514 // cap mission
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 702 236 2005 325 145
end
transitioncanvas 128770 transition_ref 342530 // <transition>
  
  from ref 128130 z 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 128898 transition_ref 342658 // <transition>
  
  from ref 128386 z 2006 label "assFini" xyz 429 336 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129026 transition_ref 342786 // <transition>
  
  from ref 128514 z 2006 label "assFini" xyz 645 378 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129154 transition_ref 342914 // <transition>
  
  from ref 128642 z 3006 label "assFini" xyz 801 440 3006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
end
