format 76

statecanvas 128002 state_ref 142850 // mission pillage distrib
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 98 38 2000 1243 839
end
pseudostatecanvas 128130 pseudostate_ref 147970 // initial
   xyz 622 109 2005
end
statecanvas 128514 state_ref 150146 // capture de gobelet escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 117 328 2005 281 77
end
pseudostatecanvas 128770 pseudostate_ref 148226 // exit_point
   xyz 383 386 3005 label_xy 340 405
end
statecanvas 128898 state_ref 150658 // capture stands cote escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 855 330 2005 237 71
end
statecanvas 129026 state_ref 150786 // capture stand bordure
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 869 488 2005 207 85
end
statecanvas 129154 state_ref 150914 // vidage distributeur
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 875 636 2005 193 83
end
statecanvas 129282 state_ref 172546 // point de depart mission
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 432 166 2010 403 103
end
pseudostatecanvas 129922 pseudostate_ref 174722 // choice
   xyz 621 348 2005
end
pseudostatecanvas 130690 pseudostate_ref 174850 // exit_point
   xyz 623 638 3005 label_xy 530 641
end
statecanvas 130946 state_ref 172674 // sortie zone
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 831 754 2005 289 75
end
pseudostatecanvas 131202 pseudostate_ref 174978 // choice
   xyz 620 465 2005
end
transitioncanvas 129410 transition_ref 200834 // <transition>
  
  from ref 128130 z 2011 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130050 transition_ref 201090 // <transition>
  decenter_end 518
  
  from ref 129282 z 2011 label "AssFini" xyz 596 300 2011 to ref 129922
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130178 transition_ref 201218 // <transition>
  decenter_begin 513
  
  from ref 129922 z 2006 label "[gobelet_Escalier_fait == false]" xyz 432 351 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 201346 // <transition>
  
  from ref 129922 z 2006 label "[gobelet_Escalier_fait == true]" xyz 677 349 2006 to ref 128898
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
  
  from ref 131202 z 2006 label "[vidange_faite == false]" xyz 712 455 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131586 transition_ref 202242 // <transition>
  
  from ref 131202 z 3006 label "[vidange_faite == true]" xyz 517 567 3006 to ref 130690
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131842 transition_ref 202370 // <transition>
  
  from ref 129154 z 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131970 transition_ref 202498 // <transition>
  
  from ref 130946 z 3006 to ref 130690
  write_horizontally default show_definition default drawing_language default
end
end
