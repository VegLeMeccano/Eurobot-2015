format 76

statecanvas 128002 state_ref 180994 // waypoint init
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 212 22 2000 973 1441
end
pseudostatecanvas 128130 pseudostate_ref 264194 // initial
   xyz 388 99 2005
end
pseudostatecanvas 128258 pseudostate_ref 264322 // exit_point
   xyz 850 510 3005 label_xy 846 529
end
statecanvas 128386 state_ref 254210 // BF cap to mission
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 228 181 2005 459 131
end
statecanvas 128514 state_ref 254338 // BF droite to mission
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 330 384 2005 355 215
end
statecanvas 128642 state_ref 254466 // BF cap mission
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 510 642 2005 339 159
end
transitioncanvas 128770 transition_ref 321538 // <transition>
  
  from ref 128130 z 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 128898 transition_ref 321666 // <transition>
  
  from ref 128386 z 2006 label "assFini" xyz 458 340 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129026 transition_ref 321794 // <transition>
  
  from ref 128514 z 2006 label "assFini" xyz 550 610 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129154 transition_ref 321922 // <transition>
  
  from ref 128642 z 3006 label "assFini" xyz 780 576 3006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
end
