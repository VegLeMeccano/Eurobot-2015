format 76

statecanvas 128002 state_ref 157570 // chope du stand sur la route
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 136 84 2000 681 565
end
statecanvas 128130 state_ref 224130 // BF cap
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 248 162 2005 55 33
end
statecanvas 128258 state_ref 224258 // BF droite
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 244 322 2005 69 33
end
statecanvas 128386 state_ref 224386 // ouverture de pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 165 231 2005 321 61
end
statecanvas 128514 state_ref 224514 // chope
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 245 411 2005 55 33
end
pseudostatecanvas 128642 pseudostate_ref 216450 // initial
   xyz 266 140 2005
end
statecanvas 128770 state_ref 224642 // BF cap vers cinema
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 537 161 2005 127 33
end
statecanvas 128898 state_ref 224770 // BF droite sur cinema
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 573 247 2005 135 33
end
statecanvas 129026 state_ref 224898 // BF cap sur le coin
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 556 340 2005 117 33
end
statecanvas 129154 state_ref 225026 // BF droite sur le coin
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 552 460 2005 131 33
end
pseudostatecanvas 129282 pseudostate_ref 243586 // exit_point
   xyz 641 549 3005 label_xy 622 568
end
transitioncanvas 129410 transition_ref 294658 // <transition>
  
  from ref 128642 z 2006 to ref 128130
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129538 transition_ref 294786 // <transition>
  
  from ref 128130 z 2006 to point 287 191
  line 130562 z 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129666 transition_ref 294914 // <transition>
  
  from ref 128386 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129794 transition_ref 295042 // <transition>
  
  from ref 128258 z 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129922 transition_ref 295170 // <transition>
  
  from ref 128514 z 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130050 transition_ref 295298 // <transition>
  
  from ref 128770 z 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130178 transition_ref 295426 // <transition>
  
  from ref 128898 z 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 295554 // <transition>
  
  from ref 129026 z 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130434 transition_ref 295682 // <transition>
  
  from ref 129154 z 3006 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
end
