format 76

statecanvas 128002 state_ref 128514 // Evitement
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 118 66 2000 567 403
end
pseudostatecanvas 128130 pseudostate_ref 189186 // junction
   xyz 224 158 2005
end
pseudostatecanvas 128258 pseudostate_ref 189314 // exit_point
   xyz 544 386 3005 label_xy 516 405
end
statecanvas 128386 state_ref 188034 // faire des maneuvre
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 141 192 2005 487 173
end
transitioncanvas 128514 transition_ref 220546 // <transition>
  
  from ref 128130 z 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 128642 transition_ref 220674 // <transition>
  
  from ref 128386 z 3006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
end
