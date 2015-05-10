format 76

statecanvas 128002 state_ref 128130 // MAE_MURPHY
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 61.638 35.917 2000 745 759
end
pseudostatecanvas 128130 pseudostate_ref 128130 // initial
   xyz 409.377 88.48 2005
end
statecanvas 128258 state_ref 128258 // Initialisation
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 305.271 125.786 2005 271 61
end
statecanvas 128386 state_ref 128386 // Jeu
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 86.968 464.125 2005 299 127
end
statecanvas 128514 state_ref 128514 // Evitement
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 489.959 485.625 2005 255 93
end
statecanvas 130050 state_ref 135042 // Recalage Initial
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 301.211 227.774 2005 289 61
end
pseudostatecanvas 130434 pseudostate_ref 141314 // exit_point
   xyz 307.496 275.936 3005 label_xy 296 300
end
statecanvas 130946 state_ref 165762 // startin' block
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 93.121 356.362 2005 421 75
end
pseudostatecanvas 131330 pseudostate_ref 189314 // exit_point
   xyz 480.011 486.249 3005 label_xy 415 475
end
statecanvas 131586 state_ref 262274 // Game Over
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 315 664 2005 263 79
end
transitioncanvas 130178 transition_ref 147970 // <transition>
  
  from ref 128258 z 2006 label "start_mis" xyz 419 198 2006 to ref 130050
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130690 transition_ref 179074 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131074 transition_ref 192386 // <transition>
  
  from ref 130434 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131202 transition_ref 192514 // <transition>
  
  from ref 130946 z 2006 label "start_enleve" xyz 211 425 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131458 transition_ref 220802 // <transition>
  
  from ref 131330 z 3006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131714 transition_ref 330626 // <transition>
  
  from ref 128386 z 2006 label "end_game" xyz 329 618 2006 to ref 131586
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131842 transition_ref 387970 // <transition>
  
  from ref 128386 z 2006 label "evitement" xyz 413 521 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
end
