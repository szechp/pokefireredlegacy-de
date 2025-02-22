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
	setflag FLAG_JANINE
# 118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_HIS_LAB
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 3
# 217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide
# 237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide2
# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special DisableMsgBoxWalkaway
# 241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	signmsg
# 242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_PressB
# 245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
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
	walk_up
# 266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceDown
# 278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceDown
# 318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 359 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 387 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 399 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 401 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 402 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 404 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 408 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 417 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 418 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 419 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 420 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 422 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 423 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 424 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 425 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 427 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 432 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 449 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 455 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 457 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 461 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 462 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 463 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 465 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 468 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 469 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 470 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 471 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 472 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 474 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 475 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 476 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 477 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 478 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 479 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 480 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 481 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 482 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 483 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 484 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 487 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 488 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 489 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 490 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 491 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 492 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 495 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 496 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 497 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 498 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 500 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 501 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 502 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 507 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 509 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 512 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 514 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 515 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 523 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 526 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 530 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 531 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 533 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 537 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 538 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 539 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 540 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 543 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 544 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 545 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 546 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 550 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 551 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 552 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 553 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 554 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 556 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 557 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 564 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 575 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 588 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 593 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 594 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 597 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 598 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 599 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 602 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 603 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 606 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 607 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 608 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 611 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 612 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 613 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 614 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 616 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 617 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 618 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 620 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 621 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 622 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 625 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 626 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 627 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 628 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 629 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 632 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 634 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 635 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 637 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 638 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 640 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_ExclamationMark
# 641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 642 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_Delay48
# 643 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 644 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 647 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 648 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 649 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 650 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 652 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 653 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 654 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 655 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 656 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 657 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 658 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 661 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 662 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 663 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 667 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 668 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 669 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_GAME_CLEAR_OLD
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 746 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 748 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 749 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 750 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 751 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 752 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 754 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 756 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 757 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 758 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 759 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 760 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 762 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 763 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 764 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 765 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 766 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 768 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 769 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 770 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 771 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 772 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 774 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 776 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 777 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 778 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 781 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 782 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 784 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 787 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 788 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 790 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 791 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 795 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 796 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 798 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 801 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 802 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 803 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 804 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 805 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 806 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 808 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 809 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 810 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 811 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 812 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 813 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 814 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 815 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 816 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 817 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 818 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 820 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 821 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 822 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 823 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 824 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality2
# 827 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_HIS_LAB
# 828 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 4
# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 830 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 831 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 832 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 834 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 835 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 840 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 841 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 842 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 848 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 849 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 851 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 852 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 854 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 856 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 859 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 861 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 862 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 865 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 866 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 867 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 868 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 869 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 872 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 877 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 878 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 883 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 884 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 885 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 886 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 888 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 889 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 891 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 892 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 893 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 894 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 896 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 897 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 898 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 899 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 900 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 901 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 902 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 903 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 904 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 905 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 906 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 908 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 909 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 910 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 911 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 912 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 913 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 914 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 916 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 917 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 921 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 922 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 923 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 926 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 927 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 933 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 5, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 937 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 943 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special QuestLog_CutRecording
# 947 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 951 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 952 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 953 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 956 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 957 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 958 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 959 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 965 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 966 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 967 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 968 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 971 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 972 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 973 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 979 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 980 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 981 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 982 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 987 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 988 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 993 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 994 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 995 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 996 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 997 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 999 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1000 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1001 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 1002 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1008 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 1010 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1011 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1019 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1020 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1021 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1022 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1024 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1025 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1026 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1027 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1028 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1029 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1030 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1035 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1036 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1037 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1038 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1039 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1041 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1042 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1043 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1044 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1047 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1048 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1049 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1050 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1051 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1052 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1055 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1056 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1057 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1058 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1059 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1062 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1063 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1064 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1065 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1066 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1069 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1070 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1071 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1072 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1073 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1076 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1077 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1078 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1079 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1080 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1082 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1083 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1084 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1085 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1086 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1087 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1089 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1090 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1091 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1092 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1093 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1095 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1096 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1097 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1098 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 1099 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceRight
# 1110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 5
# 1149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 1150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
EventScript_GiveNicknameToStarter::
# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_ChangePokemonNickname
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 1171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 1197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 1208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 1242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 1244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 1245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 1255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 1256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
