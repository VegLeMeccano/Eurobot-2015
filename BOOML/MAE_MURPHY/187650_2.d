format 76

statecanvas 128002 state_ref 158978 // claps central
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 226 80 2000 1005 831
end
pseudostatecanvas 128130 pseudostate_ref 257538 // initial
   xyz 318 169 2005
end
statecanvas 128258 state_ref 247170 // BF droite
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 284 288 2005 343 145
end
statecanvas 128386 state_ref 247298 // ouverture claps
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 386 717 2005 447 159
end
statecanvas 128514 state_ref 247426 // BF cap to cine
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 803 276 2005 297 145
end
pseudostatecanvas 128898 pseudostate_ref 257666 // exit_point
   xyz 982 574 3005 label_xy 978 593
end
statecanvas 129794 state_ref 262786 // BF cap vers estrade
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 319 508 2011 297 145
end
transitioncanvas 129026 transition_ref 313858 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129282 transition_ref 314114 // <transition>
  
  from ref 128386 z 2006 label "claps_replie" xyz 749 560 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129922 transition_ref 331266 // <transition>
  
  from ref 128258 z 2012 label "assFini" xyz 443 462 2012 to ref 129794
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130050 transition_ref 331394 // <transition>
  
  from ref 129794 z 2012 label "assFini" xyz 516 676 2012 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130178 transition_ref 331522 // <transition>
  
  from ref 128514 z 3006 label "assFini" xyz 959 489 3006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
end
