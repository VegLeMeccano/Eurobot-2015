format 76

statecanvas 128002 state_ref 180098 // mission depot tour estrade
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 80 87 2000 761 533
end
statecanvas 128130 state_ref 180994 // waypoint init
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 178 177 2005 161 93
end
pseudostatecanvas 128258 pseudostate_ref 182402 // initial
   xyz 246 121 2005
end
statecanvas 128514 state_ref 181122 // depot solo
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 214 406 2005 177 99
end
statecanvas 128642 state_ref 181250 // depot double
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 479 224 2005 213 101
end
pseudostatecanvas 128770 pseudostate_ref 182530 // exit_point
   xyz 639 514 3005 label_xy 635 533
end
statecanvas 128898 state_ref 181378 // sortie douce
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 489 402 2005 193 89
end
pseudostatecanvas 129282 pseudostate_ref 182658 // choice
   xyz 393 306 2005
end
statecanvas 130050 state_ref 181506 // preparation
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 219 307 2011 85 33
end
transitioncanvas 128386 transition_ref 213122 // <transition>
  
  from ref 128258 z 2006 to ref 128130
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129026 transition_ref 213250 // <transition>
  
  from ref 128642 z 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129154 transition_ref 213378 // <transition>
  
  from ref 128514 z 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129794 transition_ref 213634 // <transition>
  
  from ref 129282 z 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129922 transition_ref 213762 // <transition>
  
  from ref 129282 z 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130178 transition_ref 213890 // <transition>
  
  from ref 128130 z 2012 to ref 130050
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130434 transition_ref 214018 // <transition>
  
  from ref 130050 z 2012 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
end
