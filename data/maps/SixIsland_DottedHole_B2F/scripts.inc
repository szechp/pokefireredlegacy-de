# 1 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"

# 2 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
SixIsland_DottedHole_B2F_MapScripts::
# 3 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"

# 5 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
SixIsland_DottedHole_B2F_EventScript_Speedy::
# 6 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	lock
# 7 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	faceplayer
# 8 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	goto_if_set FLAG_SPEEDY_DEFEATED, SixIsland_DottedHole_B2F_EventScript_RematchSpeedy
# 9 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	msgbox SixIsland_DottedHole_B2F_Text_Speedy, MSGBOX_YESNO
# 10 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_DottedHole_B2F_EventScript_NoSpeedy
# 11 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	trainerbattle_single TRAINER_SPEEDY, SixIsland_DottedHole_B2F_Text_YesSpeedy, SixIsland_DottedHole_B2F_Text_SpeedyDefeat, SixIsland_DottedHole_B2F_EventScript_PostSpeedy, NO_MUSIC
# 12 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	release
# 13 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	end
# 14 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"

# 15 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
SixIsland_DottedHole_B2F_EventScript_PostSpeedy::
# 16 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	msgbox SixIsland_DottedHole_B2F_Text_SpeedyPostBattle
# 17 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	setflag FLAG_SPEEDY_DEFEATED
# 18 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	release
# 19 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	end
# 20 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"

# 21 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
SixIsland_DottedHole_B2F_EventScript_CantRematchSpeedy::
# 22 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	msgbox SixIsland_DottedHole_B2F_Text_SpeedyPostBattle
# 23 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	release
# 24 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	end
# 25 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"

# 26 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
SixIsland_DottedHole_B2F_EventScript_NoSpeedy::
# 27 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	msgbox SixIsland_DottedHole_B2F_Text_NoSpeedy
# 28 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	release
# 29 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	end
# 30 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"

# 31 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
SixIsland_DottedHole_B2F_EventScript_RematchSpeedy::
# 32 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	msgbox SixIsland_DottedHole_B2F_Text_RematchSpeedy, MSGBOX_YESNO
# 33 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_DottedHole_B2F_EventScript_NoSpeedy
# 34 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	trainerbattle_single TRAINER_SPEEDY, SixIsland_DottedHole_B2F_Text_YesRematchSpeedy, SixIsland_DottedHole_B2F_Text_RematchSpeedyDefeat, SixIsland_DottedHole_B2F_EventScript_PostRematchSpeedy, NO_MUSIC
# 35 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	release
# 36 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	end
# 37 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"

# 38 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
SixIsland_DottedHole_B2F_EventScript_PostRematchSpeedy::
# 39 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	msgbox SixIsland_DottedHole_B2F_Text_RematchSpeedyDefeat
# 40 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	cleartrainerflag TRAINER_SPEEDY
# 41 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	release
# 42 "data/maps/SixIsland_DottedHole_B2F/scripts.pory"
	end
