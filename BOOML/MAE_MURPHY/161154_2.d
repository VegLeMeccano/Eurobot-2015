format 76

statecanvas 128002 state_ref 143490 // mission depot de tour zone depart
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 16.003 36.4909 2000 1511 877
end
pseudostatecanvas 128130 pseudostate_ref 181890 // initial
   xyz 370.715 96.6467 2005
end
statecanvas 128258 state_ref 180226 // way point initial
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 247.651 149.841 2005 275 69
end
pseudostatecanvas 128514 pseudostate_ref 182018 // exit_point
   xyz 1368.63 423.202 3005 label_xy 1363 442
end
statecanvas 128770 state_ref 180482 // depot une tour
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 163.309 391.83 2005 570 285
end
statecanvas 128898 state_ref 180610 // avance
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 860.722 445.973 2005 337 75
end
statecanvas 129666 state_ref 180738 // recule
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 414.982 741.798 2005 341 75
end
pseudostatecanvas 130690 pseudostate_ref 264578 // exit_point
   xyz 493.33 201.293 3005 label_xy 489 220
end
statecanvas 130946 state_ref 255490 // prepare la pose
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 766.868 92.917 2005 565 313
end
statecanvas 131330 state_ref 255618 // rembale les pinces
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 911.978 740.528 2005 579 89
end
statecanvas 131586 state_ref 255746 // BF cap vers la zone adverse
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1147.61 537.862 2005 303 155
end
transitioncanvas 128386 transition_ref 211330 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 212354 // <transition>
  
  from ref 128770 z 2006 label "pince_lache" xyz 514 699 2006 to ref 129666
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130562 transition_ref 267522 // <transition>
  
  from ref 128898 z 2006 label "assFini" xyz 784 494 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131074 transition_ref 323586 // <transition>
  
  from ref 130690 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131202 transition_ref 323714 // <transition>
  decenter_end 407
  
  from ref 130946 z 2006 label "pince_ready_to_drop" xyz 966 414 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131458 transition_ref 323842 // <transition>
  
  from ref 129666 z 2006 label "assFini" xyz 813 773 2006 to ref 131330
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131714 transition_ref 323970 // <transition>
  
  from ref 131330 z 2006 label "pince_range" xyz 1206 708 2006 to ref 131586
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131842 transition_ref 324098 // <transition>
  
  from ref 131586 z 3006 label "assFini" xyz 1336 482 3006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
end
