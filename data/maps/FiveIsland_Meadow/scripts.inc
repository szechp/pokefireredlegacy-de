# 1 "data/maps/FiveIsland_Meadow/scripts.pory"

# 2 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_MapScripts::
# 3 "data/maps/FiveIsland_Meadow/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
# 4 "data/maps/FiveIsland_Meadow/scripts.pory"
	.byte 0
# 5 "data/maps/FiveIsland_Meadow/scripts.pory"

# 6 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_OnLoad::
# 7 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 8 "data/maps/FiveIsland_Meadow/scripts.pory"
	special CheckBeatSeviiChamps
# 9 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_Meadow_EventScript_ShowClerk
# 10 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 11 "data/maps/FiveIsland_Meadow/scripts.pory"

# 12 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoor::
# 13 "data/maps/FiveIsland_Meadow/scripts.pory"
	lockall
# 14 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
# 15 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_OpenWarehouseDoor
# 16 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
# 17 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 18 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 19 "data/maps/FiveIsland_Meadow/scripts.pory"

# 20 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_OpenWarehouseDoor::
# 21 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
# 22 "data/maps/FiveIsland_Meadow/scripts.pory"
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
# 23 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitmessage
# 24 "data/maps/FiveIsland_Meadow/scripts.pory"
	delay 60
# 25 "data/maps/FiveIsland_Meadow/scripts.pory"
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 26 "data/maps/FiveIsland_Meadow/scripts.pory"
	special DrawWholeMapView
# 27 "data/maps/FiveIsland_Meadow/scripts.pory"
	playse SE_PIN
# 28 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitse
# 29 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 30 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 31 "data/maps/FiveIsland_Meadow/scripts.pory"

# 32 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen::
# 33 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
# 34 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 35 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 36 "data/maps/FiveIsland_Meadow/scripts.pory"

# 37 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked::
# 38 "data/maps/FiveIsland_Meadow/scripts.pory"
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
# 39 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 40 "data/maps/FiveIsland_Meadow/scripts.pory"

# 41 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket1::
# 42 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
# 43 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 45 "data/maps/FiveIsland_Meadow/scripts.pory"

# 46 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket2::
# 47 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
# 48 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 50 "data/maps/FiveIsland_Meadow/scripts.pory"

# 51 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket3::
# 52 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
# 53 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 55 "data/maps/FiveIsland_Meadow/scripts.pory"

# 56 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_ShowClerk::
# 57 "data/maps/FiveIsland_Meadow/scripts.pory"
	clearflag FLAG_SHOPCHAMP
# 58 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 59 "data/maps/FiveIsland_Meadow/scripts.pory"

# 60 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Clerk::
# 61 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 62 "data/maps/FiveIsland_Meadow/scripts.pory"
	lock
# 63 "data/maps/FiveIsland_Meadow/scripts.pory"
	faceplayer
# 64 "data/maps/FiveIsland_Meadow/scripts.pory"
	message Text_MayIHelpYou
# 65 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitmessage
# 66 "data/maps/FiveIsland_Meadow/scripts.pory"
	pokemart FiveIsland_Meadow_Items
# 67 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox Text_PleaseComeAgain
# 68 "data/maps/FiveIsland_Meadow/scripts.pory"
	release
# 69 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 70 "data/maps/FiveIsland_Meadow/scripts.pory"

# 71 "data/maps/FiveIsland_Meadow/scripts.pory"
	.align 2
# 72 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Items::
# 73 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 74 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 75 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 76 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_EVERSTONE
# 77 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 78 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 79 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 80 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 81 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 82 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 83 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 84 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 85 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 86 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_PP_UP
# 87 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 88 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 89 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_NONE
# 90 "data/maps/FiveIsland_Meadow/scripts.pory"
	release
# 91 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 92 "data/maps/FiveIsland_Meadow/scripts.pory"

# 93 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Beast::
# 94 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Beasts, MSGBOX_NPC
# 95 "data/maps/FiveIsland_Meadow/scripts.pory"
	special RoamingBeasts
# 96 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_Meadow_EventScript_GiveTicket
# 97 "data/maps/FiveIsland_Meadow/scripts.pory"
	release
# 98 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 99 "data/maps/FiveIsland_Meadow/scripts.pory"

# 100 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_GiveTicket::
# 101 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Beasts2, 
# 102 "data/maps/FiveIsland_Meadow/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 103 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
# 104 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 105 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
