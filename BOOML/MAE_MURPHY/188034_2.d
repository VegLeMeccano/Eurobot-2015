format 76

statecanvas 128002 state_ref 159234 // faire chier en zizagant
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 100 82 2000 1057 805
end
pseudostatecanvas 128130 pseudostate_ref 223362 // initial
   xyz 580 194 2005
end
pseudostatecanvas 128258 pseudostate_ref 223490 // exit_point
   xyz 810 645 3005 label_xy 806 664
end
statecanvas 128514 state_ref 263554 // to escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 235 455 2005 345 145
end
statecanvas 128642 state_ref 263682 // to estrade
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 723 467 2005 77 33
end
statecanvas 128770 state_ref 263810 // deboit les cines adverses
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 794 551 2005 163 33
end
pseudostatecanvas 129410 pseudostate_ref 271618 // choice
   xyz 576 206 2005
end
statecanvas 129666 state_ref 263938 // chieur stop
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 201 335 2005 83 33
end
statecanvas 129794 state_ref 264066 // chieur faible
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 543 335 2005 89 33
end
statecanvas 129922 state_ref 264194 // chieur plus
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 908 327 2011 83 33
end
transitioncanvas 129026 transition_ref 332546 // <transition>
  
  from ref 128514 z 2006 label "assFini" xyz 632 487 2006 to ref 128642
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129154 transition_ref 332674 // <transition>
  
  from ref 128642 z 2006 to ref 128770
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129282 transition_ref 332802 // <transition>
  
  from ref 128770 z 3006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129538 transition_ref 333314 // <transition>
  
  from ref 128130 z 2006 to ref 129410
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130178 transition_ref 333442 // <transition>
  
  from ref 129410 z 2006 label "[master->get_gestionnaire()->get_mission_zone_ennemie()->mode_chieur()==0]" xyz 132 258 2006 to ref 129666
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 333570 // <transition>
  
  from ref 129410 z 2006 label "[master->get_gestionnaire()->get_mission_zone_ennemie()->mode_chieur()==1]" xyz 396 307 2006 to ref 129794
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130434 transition_ref 333698 // <transition>
  
  from ref 129410 z 2012 label "[master->get_gestionnaire()->get_mission_zone_ennemie()->mode_chieur()==2]" xyz 649 244 2012 to ref 129922
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130562 transition_ref 333826 // <transition>
  
  from ref 129666 z 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130690 transition_ref 333954 // <transition>
  
  from ref 129794 z 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130818 transition_ref 334082 // <transition>
  
  from ref 129922 z 2012 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
end
