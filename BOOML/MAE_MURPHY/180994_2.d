format 76

statecanvas 128002 state_ref 150786 // capture stand bordure
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 205 66 2000 919 671
end
pseudostatecanvas 128130 pseudostate_ref 209410 // initial
   xyz 537 192 2005
end
pseudostatecanvas 128258 pseudostate_ref 209538 // exit_point
   xyz 722 659 3005 label_xy 683 678
end
statecanvas 128386 state_ref 215682 // BF cap vers objectif
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 256 217 2005 293 131
end
statecanvas 128642 state_ref 215810 // BF droite vers objectif
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 250 378 2005 345 159
end
statecanvas 128770 state_ref 215938 // ouverture pince cote bordure
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 277 588 2005 273 131
end
statecanvas 128898 state_ref 216066 // BF avance
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 749 252 2005 331 61
end
statecanvas 129026 state_ref 216194 // chope
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 778 367 2005 273 131
end
statecanvas 129154 state_ref 216322 // recule
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 746 558 2005 335 61
end
transitioncanvas 128514 transition_ref 257538 // <transition>
  
  from ref 128130 z 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129282 transition_ref 257666 // <transition>
  
  from ref 128386 z 2006 label "assFini" xyz 370 352 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129410 transition_ref 257794 // <transition>
  
  from ref 128642 z 2006 label "assFini" xyz 370 552 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129538 transition_ref 257922 // <transition>
  
  from ref 128770 z 2006 label "pince_ouverte" xyz 609 523 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129666 transition_ref 258050 // <transition>
  
  from ref 128898 z 2006 label "assFini" xyz 923 329 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129794 transition_ref 258178 // <transition>
  
  from ref 129026 z 2006 label "pince_stand_by" xyz 940 524 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129922 transition_ref 258306 // <transition>
  
  from ref 129154 z 3006 label "assFini" xyz 773 632 3006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
end
