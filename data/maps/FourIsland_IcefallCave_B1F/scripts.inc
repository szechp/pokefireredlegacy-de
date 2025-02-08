# 1 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 2 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_MapScripts::
# 3 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 5 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_KSI::
# 6 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	lock
# 7 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	faceplayer
# 8 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	goto_if_set FLAG_KSI_DEFEATED, FourIsland_IcefallCave_B1F_EventScript_RematchKSI
# 9 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_KSI, MSGBOX_YESNO
# 10 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FourIsland_IcefallCave_B1F_EventScript_NoKSI
# 11 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_KSI, FourIsland_IcefallCave_B1F_Text_YesKSI, FourIsland_IcefallCave_B1F_Text_KSIDefeat, FourIsland_IcefallCave_B1F_EventScript_PostKSI, NO_MUSIC
# 12 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 13 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
# 14 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 15 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_PostKSI::
# 16 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_KSIPostBattle
# 17 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	setflag FLAG_KSI_DEFEATED
# 18 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 19 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
# 20 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 21 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_CantRematchKSI::
# 22 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_KSIPostBattle
# 23 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 24 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
# 25 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 26 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_NoKSI::
# 27 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_NoKSI
# 28 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 29 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
# 30 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 31 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_RematchKSI::
# 32 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_RematchKSI, MSGBOX_YESNO
# 33 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FourIsland_IcefallCave_B1F_EventScript_NoKSI
# 34 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_KSI, FourIsland_IcefallCave_B1F_Text_YesRematchKSI, FourIsland_IcefallCave_B1F_Text_RematchKSIDefeat, FourIsland_IcefallCave_B1F_EventScript_PostRematchKSI, NO_MUSIC
# 35 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 36 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
# 37 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"

# 38 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
FourIsland_IcefallCave_B1F_EventScript_PostRematchKSI::
# 39 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	msgbox FourIsland_IcefallCave_B1F_Text_RematchKSIDefeat
# 40 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	cleartrainerflag TRAINER_KSI
# 41 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	release
# 42 "data/maps/FourIsland_IcefallCave_B1F/scripts.pory"
	end
