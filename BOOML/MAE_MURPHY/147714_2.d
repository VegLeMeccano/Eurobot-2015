format 76

statecanvas 128002 state_ref 142850 // mission pillage distrib
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh -28.7295 35.4066 2000 1610 993
end
pseudostatecanvas 128130 pseudostate_ref 147970 // initial
   xyz 698.519 105.129 2005
end
statecanvas 128514 state_ref 150146 // capture de gobelet escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh -12.453 587.874 2005 281 75
end
pseudostatecanvas 128770 pseudostate_ref 148226 // exit_point
   xyz 252.264 648.878 3005 label_xy 209 668
end
statecanvas 128898 state_ref 150658 // capture stands cote escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1253.41 284.925 2005 236 145
end
statecanvas 129026 state_ref 150786 // capture stand bordure
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1246.83 490.183 2005 235 131
end
statecanvas 129154 state_ref 150914 // vidage distributeur
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1242.84 706.081 2005 259 89
end
statecanvas 129282 state_ref 172546 // rejoindre le point de depart mission
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 508.979 158.077 2010 400 100
end
pseudostatecanvas 129922 pseudostate_ref 174722 // choice
   xyz 696.979 337.955 2005
end
pseudostatecanvas 130690 pseudostate_ref 174850 // exit_point
   xyz 445.147 831.322 3005 label_xy 352 835
end
statecanvas 130946 state_ref 172674 // sortie zone
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 665.494 666.267 2005 463 145
end
pseudostatecanvas 131202 pseudostate_ref 174978 // choice
   xyz 809.284 434.618 2005
end
pseudostatecanvas 132098 pseudostate_ref 195842 // choice
   xyz 189.684 334.31 2005
end
pseudostatecanvas 133890 pseudostate_ref 202498 // exit_point
   xyz 700.92 248.886 3005 label_xy 696 267
end
pseudostatecanvas 134274 pseudostate_ref 209282 // exit_point
   xyz 1458.24 414.56 3005 label_xy 1397 429
end
pseudostatecanvas 134530 pseudostate_ref 209538 // exit_point
   xyz 1384.6 609.6 3005 label_xy 1344 624
end
transitioncanvas 129410 transition_ref 200834 // <transition>
  
  from ref 128130 z 2011 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 201346 // <transition>
  
  from ref 129922 z 2006 label "[master->get_gestionnaire_mission()->mission_distrib()->is_capture_gobelet_done()]" xyz 783 332 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131330 transition_ref 201986 // <transition>
  
  from ref 128770 z 3006 to ref 131202
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131458 transition_ref 202114 // <transition>
  
  from ref 131202 z 2006 label "[!master->get_gestionnaire_mission()->mission_distrib()->is_netoyage_zone_done() ]" xyz 808 406 2006 to ref 128898
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
  decenter_end 405
  
  from ref 129922 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_distrib()->is_capture_gobelet_done() ]" xyz 238 330 2006 to ref 132098
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132482 transition_ref 227586 // <transition>
  decenter_begin 458
  
  from ref 132098 z 2006 label "[!master->get_gestionnaire_mission()->get_element_robot()->gobelet_present()]" xyz 83 500 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133250 transition_ref 227970 // <transition>
  
  from ref 131202 z 2006 label "[master->get_gestionnaire_mission()->mission_distrib()->is_netoyage_zone_done() ]" xyz 646 560 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134018 transition_ref 242434 // <transition>
  
  from ref 133890 z 3006 to ref 129922
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134146 transition_ref 255874 // <transition>
  
  from ref 132098 z 2006 label "[master->get_gestionnaire_mission()->get_element_robot()->gobelet_present()]" xyz 324 402 2006 to ref 131202
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134402 transition_ref 257410 // <transition>
  
  from ref 134274 z 3006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134658 transition_ref 258434 // <transition>
  
  from ref 134530 z 3006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
end
