format 76

statecanvas 128002 state_ref 150146 // capture de gobelet escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 117 93 2000 759 687
end
pseudostatecanvas 128130 pseudostate_ref 148098 // initial
   xyz 311 149 2005
end
statecanvas 128258 state_ref 150274 // deplacement cible
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 149 177 2005 343 159
end
statecanvas 128514 state_ref 150402 // capture
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 146 392 2005 427 109
end
pseudostatecanvas 128770 pseudostate_ref 148226 // exit_point
   xyz 699 248 3005 label_xy 656 267
end
statecanvas 129154 state_ref 150530 // BF cap vers la zone de distrib
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 389 585 2005 343 159
end
transitioncanvas 128386 transition_ref 157570 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 128642 transition_ref 157698 // <transition>
  
  from ref 128258 z 2006 label "assFini" xyz 323 356 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 128898 transition_ref 157826 // <transition>
  
  from ref 128258 z 3006 label "adversaire" xyz 568 249 3006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129282 transition_ref 157954 // <transition>
  
  from ref 128514 z 2006 label "time_out" xyz 427 534 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129410 transition_ref 158082 // <transition>
  decenter_begin 652
  
  from ref 129154 z 3006 label "assFini" xyz 641 418 3006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
end
