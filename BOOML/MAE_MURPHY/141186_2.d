format 76

statecanvas 128002 state_ref 135042 // Recalage Initial
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 64.7121 33.0868 2000 465 899
end
pseudostatecanvas 128130 pseudostate_ref 141186 // initial
   xyz 284.126 93.503 2005
end
statecanvas 128258 state_ref 141570 // Recule
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 151.154 127.943 2005 303 103
end
statecanvas 128386 state_ref 141698 // set X Y CAP
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 138.013 257.677 2005 347 201
end
pseudostatecanvas 129282 pseudostate_ref 141314 // exit_point
   xyz 329.242 845.744 3005 label_xy 303 865
end
statecanvas 131586 state_ref 194562 // coup de patte cote escalier pour confirmer le sens
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 139.408 500.532 2005 347 173
end
statecanvas 132354 state_ref 208002 // avance
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 168.158 703.503 2005 297 89
end
transitioncanvas 129154 transition_ref 148226 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130050 transition_ref 148994 // <transition>
  
  from ref 128258 z 2006 label "blocage" xyz 308 232.5 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132098 transition_ref 234882 // <transition>
  
  from ref 128386 z 2006 label "time_out" xyz 314 468.5 2006 to ref 131586
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132482 transition_ref 249090 // <transition>
  
  from ref 131586 z 2006 to ref 132354
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132610 transition_ref 249218 // <transition>
  
  from ref 132354 z 3006 label "assFini" xyz 337 810 3006 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
end
