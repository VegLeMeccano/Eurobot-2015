format 76

statecanvas 128002 state_ref 128514 // Evitement
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 117 65 2000 543 355
end
pseudostatecanvas 128130 pseudostate_ref 189186 // junction
   xyz 224 158 2005
end
pseudostatecanvas 128258 pseudostate_ref 189314 // exit_point
   xyz 507 332 3005 label_xy 479 351
end
statecanvas 128386 state_ref 188034 // faire des maneuvre
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 261 223 2005 207 61
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
