# 1 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 2 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_PROF_OAK,        4
# 3 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_BULBASAUR_BALL,  5
# 4 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_SQUIRTLE_BALL,   6
# 5 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_CHARMANDER_BALL, 7
# 6 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_RIVAL,           8
# 7 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_POKEDEX_1,       9
# 8 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_POKEDEX_2,       10
# 9 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 10 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
# 11 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 12 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
# 13 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
# 14 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 15 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ SHOWED_OAK_COMPLETE_DEX, FLAG_TEMP_2
# 16 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 17 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_MapScripts::
# 18 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 19 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_OnWarp
# 20 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_OnFrame
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.byte 0
# 22 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition::
# 24 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 25 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 26 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 27 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 28 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
# 29 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 30 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 31 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 32 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 34 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 35 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 36 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 37 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 38 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 39 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 40 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 11
# 41 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 42 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_OAK
# 43 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 44 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 45 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 11
# 47 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 49 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 50 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnWarp::
# 51 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
# 52 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 53 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 54 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 55 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 56 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 57 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 58 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnFrame::
# 59 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 60 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
# 61 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 62 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 63 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene:: @ 8169002 
# 64 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 65 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 66 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 67 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 68 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 69 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 70 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 3
# 71 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 72 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 73 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 74 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 75 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 76 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 77 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 79 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 80 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 81 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 82 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 83 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 84 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 85 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 86 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 88 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 89 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 90 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 91 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 92 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 93 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 94 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 96 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 98 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 99 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special EnableNationalPokedex
# 117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 3
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide2
# 238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special DisableMsgBoxWalkaway
# 239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	signmsg
# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_PressB
# 243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceDown
# 276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceDown
# 316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 359 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 387 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 399 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 401 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 402 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 404 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 408 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 417 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 418 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 419 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 420 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 422 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 423 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 424 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 425 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 427 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 432 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 449 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 455 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 457 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 461 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 462 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 463 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 465 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 468 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 469 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 470 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 471 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 472 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 474 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 475 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 476 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 477 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 478 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 479 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 480 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 481 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 482 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 483 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 484 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 487 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 488 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 489 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 490 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 491 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 492 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 495 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 496 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 497 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 498 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 500 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 501 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 502 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 507 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 509 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 512 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 514 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 515 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 523 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 526 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 530 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 531 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 533 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 537 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 538 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 539 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 540 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 543 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 544 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 545 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 546 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 550 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 551 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 552 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 553 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 554 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 556 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 557 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 564 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 575 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 588 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 593 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 594 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 597 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 598 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 599 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 602 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 603 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 606 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 607 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 608 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 611 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 612 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 613 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 614 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 616 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 617 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 618 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 620 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 621 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 622 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 625 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 626 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 627 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 628 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 629 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 632 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 634 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 635 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 637 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 638 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_ExclamationMark
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 640 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_Delay48
# 641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 642 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 643 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 644 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 647 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 648 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 649 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 650 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 652 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 653 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 654 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 655 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 656 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 657 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 658 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 661 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 662 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 663 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 667 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 668 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 669 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_GAME_CLEAR_OLD
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 746 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 748 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 749 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 750 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 751 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 752 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 754 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 756 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 757 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 758 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 759 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 760 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 762 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 763 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 764 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 765 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 766 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 768 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 769 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 770 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 771 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 772 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 774 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 776 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 777 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 778 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 781 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 782 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 784 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 787 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 788 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 790 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 791 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 795 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 796 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 798 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 801 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 802 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 803 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 804 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 805 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 806 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 808 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 809 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 810 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 811 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 812 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 813 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 814 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 815 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 816 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 817 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 818 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 820 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 821 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 822 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 823 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 824 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality2
# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_HIS_LAB
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 4
# 827 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 828 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 830 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 831 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 832 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 834 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 835 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 840 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 841 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 842 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 848 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 849 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 851 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 852 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 854 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 856 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 859 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 861 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 862 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 865 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 866 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 867 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 868 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 869 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 872 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 877 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 878 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 883 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 884 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 885 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 886 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 888 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 889 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 891 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 892 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 893 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 894 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 896 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 897 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 898 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 899 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 900 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 901 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 902 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 903 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 904 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 905 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 906 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 908 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 909 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 910 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 911 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 912 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 913 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 914 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 916 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 917 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 921 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 922 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 923 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 926 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 927 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 5, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 933 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 937 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 943 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special QuestLog_CutRecording
# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 947 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 951 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 952 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 953 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 956 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 957 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 958 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 959 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 965 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 966 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 967 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 968 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 971 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 972 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 973 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 979 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 980 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 981 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 982 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 987 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 988 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 993 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 994 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 995 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 996 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 997 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 999 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 1000 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1001 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1002 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 1008 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1010 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1011 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1019 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1020 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1021 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1022 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1024 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1025 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1026 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1027 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1028 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1029 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1030 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1035 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1036 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1037 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1038 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1039 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1041 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1042 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1043 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1044 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1047 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1048 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1049 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1050 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1051 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1052 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1055 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1056 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1057 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1058 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1059 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1062 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1063 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1064 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1065 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1066 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1069 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1070 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1071 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1072 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1073 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1076 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1077 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1078 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1079 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1080 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1082 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1083 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1084 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1085 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1086 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1087 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1089 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1090 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1091 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1092 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1093 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1095 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1096 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 1097 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 1098 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 1099 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceRight
# 1108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 1110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 5
# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 1148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 1154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
EventScript_GiveNicknameToStarter::
# 1159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_ChangePokemonNickname
# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 1206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 1242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 1243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 1254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 1256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
