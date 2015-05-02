format 76

statecanvas 128002 state_ref 150146 // capture de gobelet escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 118 94 2000 849 901
end
pseudostatecanvas 128130 pseudostate_ref 148098 // initial
   xyz 311 150 2005
end
statecanvas 128258 state_ref 150274 // deplacement cible
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 149 177 2005 345 159
end
statecanvas 128514 state_ref 150402 // capture
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 146 392 2005 513 145
end
pseudostatecanvas 128770 pseudostate_ref 148226 // exit_point
   xyz 569 914 3005 label_xy 526 933
end
statecanvas 129154 state_ref 150530 // BF cap vers la zone de distrib
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 411 697 2005 343 159
end
statecanvas 129538 state_ref 217218 // recule
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 580 581 2005 335 61
end
transitioncanvas 128386 transition_ref 157570 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 128642 transition_ref 157698 // <transition>
  
  from ref 128258 z 2006 label "assFini" xyz 343 356 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129410 transition_ref 158082 // <transition>
  decenter_begin 652
  
  from ref 129154 z 3006 label "assFini" xyz 592 876 3006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129666 transition_ref 258818 // <transition>
  
  from ref 128514 z 2006 label "time_out" xyz 605 551 2006 to ref 129538
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129794 transition_ref 258946 // <transition>
  
  from ref 129538 z 2006 label "assFini" xyz 668 661 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
end
