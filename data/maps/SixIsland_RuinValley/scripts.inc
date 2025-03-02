# 1 "data/maps/SixIsland_RuinValley/scripts.pory"

# 2 "data/maps/SixIsland_RuinValley/scripts.pory"
.set LOCALID_SCIENTIST, 1
# 3 "data/maps/SixIsland_RuinValley/scripts.pory"

# 4 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_MapScripts::
# 5 "data/maps/SixIsland_RuinValley/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_OnLoad
# 6 "data/maps/SixIsland_RuinValley/scripts.pory"
	.byte 0
# 7 "data/maps/SixIsland_RuinValley/scripts.pory"

# 8 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_OnLoad::
# 9 "data/maps/SixIsland_RuinValley/scripts.pory"
	call_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_OpenDottedHoleDoor
# 10 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 11 "data/maps/SixIsland_RuinValley/scripts.pory"

# 12 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_OpenDottedHoleDoor::
# 13 "data/maps/SixIsland_RuinValley/scripts.pory"
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
# 14 "data/maps/SixIsland_RuinValley/scripts.pory"
	return
# 15 "data/maps/SixIsland_RuinValley/scripts.pory"

# 16 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Scientist::
# 17 "data/maps/SixIsland_RuinValley/scripts.pory"
	lock
# 18 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
# 19 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_FacePlayer
# 20 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 21 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
# 22 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_FaceOriginalDirection
# 23 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 24 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 25 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 26 "data/maps/SixIsland_RuinValley/scripts.pory"

# 27 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoor::
# 28 "data/maps/SixIsland_RuinValley/scripts.pory"
	lockall
# 29 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoorOpen
# 30 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
# 31 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor
# 32 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
# 33 "data/maps/SixIsland_RuinValley/scripts.pory"
	braillemessage Braille_Text_Cut
# 34 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitbuttonpress
# 35 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 36 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 37 "data/maps/SixIsland_RuinValley/scripts.pory"

# 38 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoorOpen::
# 39 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
# 40 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 41 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 42 "data/maps/SixIsland_RuinValley/scripts.pory"

# 43 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor::
# 44 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
# 45 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 46 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 47 "data/maps/SixIsland_RuinValley/scripts.pory"

# 48 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Giovanni::
# 49 "data/maps/SixIsland_RuinValley/scripts.pory"
	lock
# 50 "data/maps/SixIsland_RuinValley/scripts.pory"
	faceplayer
# 51 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_Giovanni, MSGBOX_YESNO
# 52 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_GiovanniNo
# 53 "data/maps/SixIsland_RuinValley/scripts.pory"
	trainerbattle_single TRAINER_JACKO, SixIsland_PatternBush_Text_GiovanniYes, SixIsland_PatternBush_Text_GiovanniDefeat, SixIsland_RuinValley_EventScript_PostGiovanni, NO_MUSIC
# 54 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 55 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 56 "data/maps/SixIsland_RuinValley/scripts.pory"

# 57 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_PostGiovanni::
# 58 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GiovanniPost
# 59 "data/maps/SixIsland_RuinValley/scripts.pory"
	setflag FLAG_GIOVANNI4
# 60 "data/maps/SixIsland_RuinValley/scripts.pory"
	removeobject 18
# 61 "data/maps/SixIsland_RuinValley/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/SixIsland_RuinValley/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 63 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 64 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 65 "data/maps/SixIsland_RuinValley/scripts.pory"

# 66 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_GiovanniNo::
# 67 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GiovanniNo
# 68 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 69 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 70 "data/maps/SixIsland_RuinValley/scripts.pory"

# 71 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Gym1::
# 72 "data/maps/SixIsland_RuinValley/scripts.pory"
	trainerbattle_single TRAINER_EXPERT_M, SixIsland_RuinValley_Text_Rocket1Intro, SixIsland_RuinValley_Text_Rocket1Defeat
# 73 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 75 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket1Intro::
# 76 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "Hey, have you seen our Leader\n"
# 77 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "here Somewhere$"
# 78 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket1Defeat::
# 79 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "Please Help Us!$"
# 80 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket1PostBattle::
# 81 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "Our Leader went in the cave\n"
# 82 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "and he hasn't came out! It's\l"
# 83 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "been 2 hours!$"
# 84 "data/maps/SixIsland_RuinValley/scripts.pory"

# 85 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Gym2::
# 86 "data/maps/SixIsland_RuinValley/scripts.pory"
	trainerbattle_single TRAINER_EXPERT_F, SixIsland_RuinValley_Text_Rocket2Intro, SixIsland_RuinValley_Text_Rocket2Defeat
# 87 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 89 "data/maps/SixIsland_RuinValley/scripts.pory"

# 90 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket2Intro::
# 91 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "IVE BEEN STANDING HERE FOR\n"
# 92 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "2 HOURS$"
# 93 "data/maps/SixIsland_RuinValley/scripts.pory"

# 94 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket2Defeat::
# 95 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "WAHHH!$"
# 96 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket2PostBattle::
# 97 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "I can't take this anymore...$"
