format 76

statecanvas 128002 state_ref 158722 // mission zone ennemie
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 109 69 2000 817 499
end
pseudostatecanvas 128130 pseudostate_ref 154882 // initial
   xyz 216 139 2005
end
statecanvas 128258 state_ref 158850 // waypoint initial
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 214 194 2005 149 61
end
statecanvas 128514 state_ref 158978 // claps central
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 177 419 2005 165 77
end
statecanvas 128642 state_ref 159106 // depot gobelet
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 483 444 2005 167 69
end
statecanvas 128770 state_ref 159234 // faire chier en zizagant
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 625 190 2005 275 125
end
pseudostatecanvas 129026 pseudostate_ref 182274 // choice
   xyz 435 305 2005
end
transitioncanvas 128898 transition_ref 192130 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129154 transition_ref 212482 // <transition>
  
  from ref 128258 z 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129282 transition_ref 212610 // <transition>
  
  from ref 129026 z 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129410 transition_ref 212738 // <transition>
  
  from ref 128514 z 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129538 transition_ref 212866 // <transition>
  
  from ref 129026 z 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129666 transition_ref 212994 // <transition>
  
  from ref 129026 z 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
end
