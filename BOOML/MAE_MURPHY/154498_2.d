format 76

statecanvas 128002 state_ref 158722 // mission zone ennemie
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 83.1 73.2 2000 1536 856
end
pseudostatecanvas 128130 pseudostate_ref 154882 // initial
   xyz 184.3 143.2 2005
end
statecanvas 128258 state_ref 158850 // waypoint initial
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 180.6 196.2 2005 149 61
end
statecanvas 128514 state_ref 158978 // claps central
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 174.8 609.1 2005 165 77
end
statecanvas 128642 state_ref 159106 // depot gobelet
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 984.1 710.4 2005 167 69
end
statecanvas 128770 state_ref 159234 // faire chier en zizagant
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1088.6 155.7 2005 479 123
end
pseudostatecanvas 129026 pseudostate_ref 182274 // choice
   xyz 244.2 308.2 2005
end
pseudostatecanvas 129794 pseudostate_ref 257282 // exit_point
   xyz 1407.2 478.5 3005 label_xy 1403 498
end
pseudostatecanvas 129922 pseudostate_ref 257410 // choice
   xyz 675.7 306.6 2005
end
pseudostatecanvas 130818 pseudostate_ref 257666 // exit_point
   xyz 328.7 670.7 3005 label_xy 324 688
end
pseudostatecanvas 131074 pseudostate_ref 223746 // exit_point
   xyz 1141.3 721 3005 label_xy 1137 740
end
pseudostatecanvas 131586 pseudostate_ref 223490 // exit_point
   xyz 1298.7 267.1 3005 label_xy 1294 286
end
pseudostatecanvas 131970 pseudostate_ref 271490 // choice
   xyz 872 512 2005
end
pseudostatecanvas 132482 pseudostate_ref 271234 // exit_point
   xyz 289 247 3005 label_xy 285 266
end
transitioncanvas 128898 transition_ref 192130 // <transition>
  
  from ref 128130 z 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129282 transition_ref 212610 // <transition>
  
  from ref 129026 z 2006 label "[!master->get_gestionnaire()->get_mission_zone_ennemie()->is_claps_done()]" xyz 118 457 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130050 transition_ref 313218 // <transition>
  
  from ref 129026 z 2006 label "[master->get_gestionnaire()->get_mission_zone_ennemie()->is_claps_done()]" xyz 283 310 2006 to ref 129922
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 313474 // <transition>
  
  from ref 129922 z 2006 label "[master->get_gestionnaire()->get_mission_zone_ennemie()->is_depot_gobelet_done()]" xyz 685 279 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131202 transition_ref 314754 // <transition>
  
  from ref 131074 z 3006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131458 transition_ref 314882 // <transition>
  
  from ref 130818 z 3006 to ref 129922
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131714 transition_ref 315010 // <transition>
  
  from ref 131586 z 3006 to ref 129794
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132098 transition_ref 332930 // <transition>
  
  from ref 131970 z 2006 label "[!master->get_gestionnaire()->get_element_robot()->gobelet_present()]" xyz 860 386 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132226 transition_ref 333058 // <transition>
  
  from ref 131970 z 2006 label "[master->get_gestionnaire()->get_element_robot()->gobelet_present()]" xyz 712 654 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132354 transition_ref 333186 // <transition>
  
  from ref 129922 z 2006 label "[!master->get_gestionnaire()->get_mission_zone_ennemie()->is_depot_gobelet_done()]" xyz 574 421 2006 to ref 131970
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132610 transition_ref 374914 // <transition>
  
  from ref 132482 z 3006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
end
