# 1 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 2 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_MapScripts::
# 3 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 5 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_KSI::
# 6 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	goto_if_set FLAG_KSI_DEFEATED, FourIsland_IcefallCave_B1F_EventScript_RematchKSI
# 7 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_KSI, MSGBOX_YESNO
# 8 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FourIsland_IcefallCave_B1F_EventScript_NoKSI
# 9 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_KSI, FourIsland_IcefallCave_B1F_Text_YesKSI, FourIsland_IcefallCave_B1F_Text_KSIDefeat, FourIsland_IcefallCave_B1F_EventScript_PostKSI, NO_MUSIC
# 10 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 11 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
# 12 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 13 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_PostKSI::
# 14 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_KSIPostBattle
# 15 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	setflag FLAG_KSI_DEFEATED
# 16 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 17 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
# 18 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 19 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_CantRematchKSI::
# 20 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_KSIPostBattle
# 21 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 22 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
# 23 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 24 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_NoKSI::
# 25 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_NoKSI
# 26 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 27 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
# 28 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 29 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_RematchKSI::
# 30 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_RematchKSI, MSGBOX_YESNO
# 31 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FourIsland_IcefallCave_B1F_EventScript_NoKSI
# 32 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_KSI, FourIsland_IcefallCave_B1F_Text_YesRematchKSI, FourIsland_IcefallCave_B1F_Text_RematchKSIDefeat, FourIsland_IcefallCave_B1F_EventScript_PostRematchKSI, NO_MUSIC
# 33 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 34 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
# 35 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 36 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_PostRematchKSI::
# 37 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_RematchKSIDefeat
# 38 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	cleartrainerflag TRAINER_KSI
# 39 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 40 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
