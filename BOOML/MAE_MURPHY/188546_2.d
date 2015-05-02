format 76

statecanvas 128002 state_ref 157954 // claps estrade
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 139 76 2000 1037 607
end
pseudostatecanvas 128130 pseudostate_ref 216706 // initial
   xyz 218 139 2005
end
statecanvas 128258 state_ref 226178 // BF droite sur claps estrade
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 164 269 2005 339 159
end
statecanvas 128514 state_ref 226434 // Claps 3
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 517 457 2005 523 187
end
pseudostatecanvas 128770 pseudostate_ref 216834 // exit_point
   xyz 705 263 3005 label_xy 687 282
end
transitioncanvas 128898 transition_ref 297858 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129666 transition_ref 298498 // <transition>
  
  from ref 128514 z 3006 label "claps_replie" xyz 706 361 3006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129794 transition_ref 350338 // <transition>
  
  from ref 128258 z 2006 label "assFini" xyz 520 432 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
end
