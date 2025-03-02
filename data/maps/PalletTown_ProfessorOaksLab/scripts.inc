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
	setflag FLAG_HIDE_OAK_IN_HIS_LAB
# 129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_ADMIN
# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_ADMIN2
# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK
# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_JANINE
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 3
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide
# 241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide2
# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special DisableMsgBoxWalkaway
# 245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	signmsg
# 246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_PressB
# 249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceDown
# 282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceDown
# 322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 359 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 387 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 399 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 401 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 402 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 404 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 408 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 417 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 418 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 419 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 420 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 422 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 423 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 424 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 425 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 427 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 432 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 449 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 455 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 457 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 461 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 462 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 463 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 465 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 468 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 469 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 470 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 471 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 472 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 474 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 475 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 476 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 477 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 478 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 479 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
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
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 487 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 488 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 489 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 490 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 491 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 492 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 495 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 496 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 497 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 498 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 500 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 501 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 502 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 507 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 509 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 512 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 514 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 515 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 523 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 526 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 530 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 531 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 533 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 537 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 538 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 539 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 540 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 543 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 544 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 545 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 546 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 550 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 551 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 552 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 553 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 554 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 556 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 557 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 564 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 575 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 588 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 593 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 594 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 597 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 598 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 599 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 602 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 603 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 606 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 607 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 608 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 611 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 612 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 613 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 614 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 616 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 617 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 618 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 620 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 621 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 622 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 625 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 626 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 627 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 628 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 629 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 632 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 634 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 635 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 637 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 638 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 640 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 642 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 643 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 644 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_ExclamationMark
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_Delay48
# 647 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 648 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 649 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 650 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 652 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 653 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 654 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 655 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 656 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 657 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 658 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 661 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 662 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 663 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 667 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 668 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 669 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_GAME_CLEAR_OLD
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 746 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 748 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 749 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 750 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 751 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 752 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 754 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 756 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 757 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 758 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 759 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 760 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 762 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 763 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 764 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 765 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 766 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 768 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 769 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 770 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 771 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 772 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 774 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 776 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 777 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 778 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 781 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 782 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 784 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 787 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 788 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 790 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 791 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 795 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 796 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 798 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 801 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 802 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 803 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 804 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 805 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 806 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 808 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 809 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 810 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 811 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 812 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 813 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 814 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 815 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 816 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 817 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 818 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 820 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 821 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 822 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 823 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 824 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 827 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 828 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 830 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality2
# 831 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_HIS_LAB
# 832 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 4
# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 834 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 835 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 840 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 841 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 842 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 848 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 849 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 851 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 852 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 854 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 856 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 859 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 861 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 862 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 865 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 866 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 867 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 868 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 869 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 872 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 877 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 878 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 883 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 884 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 885 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 886 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 888 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 889 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 891 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 892 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 893 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 894 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 896 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 897 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 898 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 899 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 900 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 901 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 902 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 903 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 904 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 905 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 906 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 908 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 909 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 910 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 911 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 912 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 913 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 914 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 916 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 917 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 921 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 922 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 923 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 926 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 927 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 933 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 937 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 943 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 947 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special QuestLog_CutRecording
# 951 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 952 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 953 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 956 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 957 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 958 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 959 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 965 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 966 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 967 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 968 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 971 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 972 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 973 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 979 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 980 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 981 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 982 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 987 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 988 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 993 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 994 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 995 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 996 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 997 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 999 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 1000 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1001 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1002 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 1006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1008 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1010 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1011 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1019 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1020 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1021 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1022 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1024 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1025 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1026 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1027 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1028 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1029 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1030 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1035 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1036 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1037 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1038 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1039 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1041 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1042 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1043 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1044 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1047 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1048 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1049 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1050 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1051 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1052 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1055 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1056 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1057 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1058 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1059 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1062 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1063 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1064 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1065 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1066 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1069 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1070 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1071 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1072 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1073 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1076 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1077 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1078 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1079 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1080 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1082 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1083 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1084 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1085 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1086 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1087 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1089 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1090 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1091 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1092 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1093 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1095 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1096 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1097 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1098 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1099 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 1103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 1104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceRight
# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
# 1120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 5
# 1153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 1154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 1160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
EventScript_GiveNicknameToStarter::
# 1165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_ChangePokemonNickname
# 1167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 1199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 1212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 1248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 1249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 1262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
