format 76

statecanvas 128002 state_ref 142850 // mission pillage distrib
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 73.0612 32.7039 2000 1307 936
end
pseudostatecanvas 128130 pseudostate_ref 147970 // initial
   xyz 698.179 102.581 2005
end
statecanvas 128514 state_ref 150146 // capture de gobelet escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 299.523 418.74 2005 281 76
end
pseudostatecanvas 128770 pseudostate_ref 148226 // exit_point
   xyz 568.062 443.924 3005 label_xy 525 462
end
statecanvas 128898 state_ref 150658 // capture stands cote escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1032.76 285.94 2005 236 145
end
statecanvas 129026 state_ref 150786 // capture stand bordure
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1036.46 456.461 2005 235 131
end
statecanvas 129154 state_ref 150914 // vidage distributeur
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1028.67 627.381 2005 259 89
end
statecanvas 129282 state_ref 172546 // point de depart mission
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 507.589 156.73 2010 403 103
end
pseudostatecanvas 129922 pseudostate_ref 174722 // choice
   xyz 696.589 337.21 2005
end
pseudostatecanvas 130690 pseudostate_ref 174850 // exit_point
   xyz 433.773 845.794 3005 label_xy 340 848
end
statecanvas 130946 state_ref 172674 // sortie zone
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 89.4973 597.096 2005 289 145
end
pseudostatecanvas 131202 pseudostate_ref 174978 // choice
   xyz 809.245 434.024 2005
end
pseudostatecanvas 132098 pseudostate_ref 195842 // choice
   xyz 215.777 334.715 2005
end
transitioncanvas 129410 transition_ref 200834 // <transition>
  
  from ref 128130 z 2011 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130050 transition_ref 201090 // <transition>
  decenter_end 518
  
  from ref 129282 z 2011 label "AssFini" xyz 669 283 2011 to ref 129922
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 201346 // <transition>
  
  from ref 129922 z 2006 label "[mission_distrib.is_capture_gobelet_done() ]" xyz 763 338 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130434 transition_ref 201474 // <transition>
  
  from ref 128898 z 2006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130562 transition_ref 201602 // <transition>
  
  from ref 129026 z 2006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131330 transition_ref 201986 // <transition>
  
  from ref 128770 z 3006 to ref 131202
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131458 transition_ref 202114 // <transition>
  
  from ref 131202 z 2006 label "[!mission_distrib.is_netoyage_zone_done() ]" xyz 756 393 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131842 transition_ref 202370 // <transition>
  
  from ref 129154 z 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131970 transition_ref 202498 // <transition>
  decenter_begin 888
  
  from ref 130946 z 3006 to ref 130690
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132226 transition_ref 227330 // <transition>
  decenter_end 565
  
  from ref 129922 z 2006 label "[!mission_distrib.is_capture_gobelet_done() ]" xyz 360 336 2006 to ref 132098
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132482 transition_ref 227586 // <transition>
  decenter_begin 458
  
  from ref 132098 z 2006 label "[!element_robot.gobelet_present()]" xyz 315 375 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133250 transition_ref 227970 // <transition>
  
  from ref 131202 z 2006 label "[mission_distrib.is_netoyage_zone_done() ]" xyz 534 559 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133762 transition_ref 228098 // <transition>
  
  from ref 132098 z 2006 label "[element_robot.gobelet_present()]" xyz 119 450 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
end
