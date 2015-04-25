format 76

statecanvas 128002 state_ref 143490 // mission depot de tour zone depart
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 160 51 2000 969 709
end
pseudostatecanvas 128130 pseudostate_ref 181890 // initial
   xyz 337 111 2005
end
statecanvas 128258 state_ref 180226 // way point initial
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 214 166 2005 265 131
end
pseudostatecanvas 128514 pseudostate_ref 182018 // exit_point
   xyz 680 666 3005 label_xy 675 685
end
statecanvas 128642 state_ref 180354 // depot des deux tour
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 344 356 2005 187 81
end
statecanvas 128770 state_ref 180482 // depot une tour
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 735 353 2005 189 71
end
statecanvas 128898 state_ref 180610 // avance
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 553 197 2005 189 63
end
pseudostatecanvas 129154 pseudostate_ref 182146 // choice
   xyz 623 325 2005
end
statecanvas 129666 state_ref 180738 // recule
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 591 457 2005 157 67
end
statecanvas 129794 state_ref 180866 // sortie
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 653 578 2005 53 33
end
transitioncanvas 128386 transition_ref 211330 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129026 transition_ref 211458 // <transition>
  
  from ref 128258 z 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129282 transition_ref 211586 // <transition>
  
  from ref 128898 z 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129410 transition_ref 211714 // <transition>
  
  from ref 129154 z 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129538 transition_ref 211842 // <transition>
  
  from ref 129154 z 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129922 transition_ref 211970 // <transition>
  
  from ref 129666 z 2006 to ref 129794
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130050 transition_ref 212098 // <transition>
  
  from ref 129794 z 3006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130178 transition_ref 212226 // <transition>
  
  from ref 128642 z 2006 to ref 129666
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 212354 // <transition>
  
  from ref 128770 z 2006 to ref 129666
  write_horizontally default show_definition default drawing_language default
end
end
