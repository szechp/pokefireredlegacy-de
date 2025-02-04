# 1 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
FiveIsland_LostCave_Room12_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"

# 5 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
FiveIsland_LostCave_Room12_EventScript_Owl::
# 6 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	goto_if_set FLAG_OWL_DEFEATED, FiveIsland_LostCave_Room12_EventScript_RematchOwl
# 7 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	msgbox FiveIsland_LostCave_Room12_Text_Owl, MSGBOX_YESNO
# 8 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_LostCave_Room12_EventScript_NoOwl
# 9 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	trainerbattle_single TRAINER_OWL, FiveIsland_LostCave_Room12_Text_YesOwl, FiveIsland_LostCave_Room12_Text_OwlDefeat, FiveIsland_LostCave_Room12_EventScript_PostOwl, NO_MUSIC
# 10 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	release
# 11 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	end
# 12 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"

# 13 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
FiveIsland_LostCave_Room12_EventScript_PostOwl::
# 14 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	msgbox FiveIsland_LostCave_Room12_Text_OwlPostBattle
# 15 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	setflag FLAG_OWL_DEFEATED
# 16 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	release
# 17 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	end
# 18 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"

# 19 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
FiveIsland_LostCave_Room12_EventScript_CantRematchOwl::
# 20 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	msgbox FiveIsland_LostCave_Room12_Text_OwlPostBattle
# 21 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	release
# 22 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	end
# 23 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"

# 24 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
FiveIsland_LostCave_Room12_EventScript_NoOwl::
# 25 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	msgbox FiveIsland_LostCave_Room12_Text_NoOwl
# 26 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	release
# 27 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	end
# 28 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"

# 29 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
FiveIsland_LostCave_Room12_EventScript_RematchOwl::
# 30 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	msgbox FiveIsland_LostCave_Room12_Text_RematchOwl, MSGBOX_YESNO
# 31 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_LostCave_Room12_EventScript_NoOwl
# 32 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	trainerbattle_single TRAINER_OWL, FiveIsland_LostCave_Room12_Text_YesRematchOwl, FiveIsland_LostCave_Room12_Text_RematchOwlDefeat, FiveIsland_LostCave_Room12_EventScript_PostRematchOwl, NO_MUSIC
# 33 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	release
# 34 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	end
# 35 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"

# 36 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
FiveIsland_LostCave_Room12_EventScript_PostRematchOwl::
# 37 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	msgbox FiveIsland_LostCave_Room12_Text_RematchOwlDefeat
# 38 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	cleartrainerflag TRAINER_OWL
# 39 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	release
# 40 "data/maps/FiveIsland_LostCave_Room12/scripts.pory"
	end
