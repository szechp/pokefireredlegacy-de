# 1 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
.equ LOCALID_MOM, 1
# 3 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 4 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_MapScripts::
# 5 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_PlayersHouse_1F_OnFrame
# 6 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.byte 0
# 7 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 8 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_OnFrame::
# 9 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_1F, 0, PalletTown_PlayersHouse_1F_EventScript_MomShoes
# 10 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.2byte 0
# 11 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 12 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomShoes::
# 13 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 14 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 15 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 16 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 18 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_Delay48
# 20 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	delay 25
# 22 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PalletTown_PlayersHouse_1F_Movement_RivalApproach
# 23 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MomShoes
# 25 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 26 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	message PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide
# 27 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 28 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 29 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide2
# 30 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	special DisableMsgBoxWalkaway
# 31 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	signmsg
# 32 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 33 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PalletTown_PlayersHouse_1F_Movement_RivalExit
# 34 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 36 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 37 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	delay 35
# 38 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_1F, 1
# 39 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 40 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 41 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 42 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_Movement_RivalApproach::
# 43 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 44 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 45 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 46 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	step_end
# 47 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 48 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_Movement_RivalExit::
# 49 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 50 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 51 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 52 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	step_end
# 53 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 54 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom::
# 55 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lock
# 56 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 57 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 58 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 59 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 60 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 61 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 62 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceOriginalDirection
# 63 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 65 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 66 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 67 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 68 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
# 69 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 70 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 71 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 72 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
# 73 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 74 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 75 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 76 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 77 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 78 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 79 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 80 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 81 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 82 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 83 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
@ Displays special text if interacted with from side or back (which are normally inaccessible)
# 84 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 85 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 86 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 87 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 88 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 89 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 90 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 91 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 92 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 93 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 94 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 95 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 96 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 97 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 98 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 99 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 100 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 101 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 102 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 103 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 104 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
