# 1 "data/maps/PalletTown/scripts.pory"

# 2 "data/maps/PalletTown/scripts.pory"
.equ LOCALID_SIGN_LADY, 1
# 3 "data/maps/PalletTown/scripts.pory"
.equ LOCALID_PROF_OAK,  3
# 4 "data/maps/PalletTown/scripts.pory"

# 5 "data/maps/PalletTown/scripts.pory"
.equ SIGN_LADY_READY, VAR_TEMP_2
# 6 "data/maps/PalletTown/scripts.pory"

# 7 "data/maps/PalletTown/scripts.pory"
PalletTown_MapScripts::
# 8 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 9 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_OnFrame
# 10 "data/maps/PalletTown/scripts.pory"
	.byte 0
# 11 "data/maps/PalletTown/scripts.pory"

# 12 "data/maps/PalletTown/scripts.pory"
PalletTown_OnTransition::
# 13 "data/maps/PalletTown/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 14 "data/maps/PalletTown/scripts.pory"
	call_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_TryReadySignLady
# 15 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0, PalletTown_EventScript_SetSignLadyPos
# 16 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SetSignLadyDone
# 17 "data/maps/PalletTown/scripts.pory"
	end
# 18 "data/maps/PalletTown/scripts.pory"

# 19 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TryReadySignLady::
# 20 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, EventScript_Return
# 21 "data/maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, EventScript_Return
# 22 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 23 "data/maps/PalletTown/scripts.pory"
	return
# 24 "data/maps/PalletTown/scripts.pory"

# 25 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyDone::
# 26 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
# 27 "data/maps/PalletTown/scripts.pory"
	return
# 28 "data/maps/PalletTown/scripts.pory"

# 29 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyPos::
# 30 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 31 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_SIGN_LADY, 5, 15
# 32 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/PalletTown/scripts.pory"
	return
# 34 "data/maps/PalletTown/scripts.pory"

# 35 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 36 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_SIGN_LADY, 12, 2
# 37 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 38 "data/maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, TRUE
# 39 "data/maps/PalletTown/scripts.pory"
	return
# 40 "data/maps/PalletTown/scripts.pory"

# 41 "data/maps/PalletTown/scripts.pory"
PalletTown_OnFrame::
# 42 "data/maps/PalletTown/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
# 43 "data/maps/PalletTown/scripts.pory"
	.2byte 0
# 44 "data/maps/PalletTown/scripts.pory"

# 45 "data/maps/PalletTown/scripts.pory"
@ Oak approaches player after exiting their house post Elite Four to check if they should receieve the National Dex
# 46 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakRatingScene::
# 47 "data/maps/PalletTown/scripts.pory"
	lockall
# 48 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 49 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 14, 14
# 50 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 51 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PROF_OAK
# 52 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 53 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
# 55 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 56 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 57 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 58 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_ADMIN
# 59 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_ADMIN2
# 60 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK
# 61 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 62 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 63 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 64 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 65 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 66 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 5, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 67 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 68 "data/maps/PalletTown/scripts.pory"
	closemessage
# 69 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 70 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 71 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 72 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 73 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 74 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 75 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
# 76 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 77 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 79 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 80 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 81 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 82 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 83 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 84 "data/maps/PalletTown/scripts.pory"
	waitstate
# 85 "data/maps/PalletTown/scripts.pory"
	releaseall
# 86 "data/maps/PalletTown/scripts.pory"
	end
# 87 "data/maps/PalletTown/scripts.pory"

# 88 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_EndOakRatingScene::
# 89 "data/maps/PalletTown/scripts.pory"
	closemessage
# 90 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakExit
# 91 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 92 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 93 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 94 "data/maps/PalletTown/scripts.pory"
	releaseall
# 95 "data/maps/PalletTown/scripts.pory"
	end
# 96 "data/maps/PalletTown/scripts.pory"

# 97 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 98 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 99 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 100 "data/maps/PalletTown/scripts.pory"
	end
# 101 "data/maps/PalletTown/scripts.pory"

# 102 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotBeenToOneIslandYet::
# 103 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 104 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 105 "data/maps/PalletTown/scripts.pory"
	end
# 106 "data/maps/PalletTown/scripts.pory"

# 107 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor::
# 108 "data/maps/PalletTown/scripts.pory"
	walk_left
# 109 "data/maps/PalletTown/scripts.pory"
	walk_left
# 110 "data/maps/PalletTown/scripts.pory"
	walk_left
# 111 "data/maps/PalletTown/scripts.pory"
	walk_up
# 112 "data/maps/PalletTown/scripts.pory"
	walk_up
# 113 "data/maps/PalletTown/scripts.pory"
	walk_up
# 114 "data/maps/PalletTown/scripts.pory"
	walk_up
# 115 "data/maps/PalletTown/scripts.pory"
	walk_up
# 116 "data/maps/PalletTown/scripts.pory"
	walk_left
# 117 "data/maps/PalletTown/scripts.pory"
	walk_left
# 118 "data/maps/PalletTown/scripts.pory"
	walk_left
# 119 "data/maps/PalletTown/scripts.pory"
	walk_left
# 120 "data/maps/PalletTown/scripts.pory"
	walk_left
# 121 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 122 "data/maps/PalletTown/scripts.pory"
	step_end
# 123 "data/maps/PalletTown/scripts.pory"

# 124 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit::
# 125 "data/maps/PalletTown/scripts.pory"
	walk_right
# 126 "data/maps/PalletTown/scripts.pory"
	walk_right
# 127 "data/maps/PalletTown/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown/scripts.pory"
	walk_right
# 130 "data/maps/PalletTown/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown/scripts.pory"
	walk_down
# 133 "data/maps/PalletTown/scripts.pory"
	walk_down
# 134 "data/maps/PalletTown/scripts.pory"
	walk_down
# 135 "data/maps/PalletTown/scripts.pory"
	walk_right
# 136 "data/maps/PalletTown/scripts.pory"
	walk_right
# 137 "data/maps/PalletTown/scripts.pory"
	walk_right
# 138 "data/maps/PalletTown/scripts.pory"
	step_end
# 139 "data/maps/PalletTown/scripts.pory"

# 140 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse::
# 141 "data/maps/PalletTown/scripts.pory"
	walk_right
# 142 "data/maps/PalletTown/scripts.pory"
	walk_right
# 143 "data/maps/PalletTown/scripts.pory"
	walk_right
# 144 "data/maps/PalletTown/scripts.pory"
	walk_right
# 145 "data/maps/PalletTown/scripts.pory"
	walk_right
# 146 "data/maps/PalletTown/scripts.pory"
	walk_down
# 147 "data/maps/PalletTown/scripts.pory"
	walk_down
# 148 "data/maps/PalletTown/scripts.pory"
	walk_down
# 149 "data/maps/PalletTown/scripts.pory"
	walk_down
# 150 "data/maps/PalletTown/scripts.pory"
	walk_down
# 151 "data/maps/PalletTown/scripts.pory"
	walk_right
# 152 "data/maps/PalletTown/scripts.pory"
	walk_right
# 153 "data/maps/PalletTown/scripts.pory"
	walk_right
# 154 "data/maps/PalletTown/scripts.pory"
	walk_right
# 155 "data/maps/PalletTown/scripts.pory"
	walk_right
# 156 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 157 "data/maps/PalletTown/scripts.pory"
	step_end
# 158 "data/maps/PalletTown/scripts.pory"

# 159 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse::
# 160 "data/maps/PalletTown/scripts.pory"
	walk_down
# 161 "data/maps/PalletTown/scripts.pory"
	walk_right
# 162 "data/maps/PalletTown/scripts.pory"
	walk_right
# 163 "data/maps/PalletTown/scripts.pory"
	walk_right
# 164 "data/maps/PalletTown/scripts.pory"
	walk_right
# 165 "data/maps/PalletTown/scripts.pory"
	walk_right
# 166 "data/maps/PalletTown/scripts.pory"
	walk_down
# 167 "data/maps/PalletTown/scripts.pory"
	walk_down
# 168 "data/maps/PalletTown/scripts.pory"
	walk_down
# 169 "data/maps/PalletTown/scripts.pory"
	walk_down
# 170 "data/maps/PalletTown/scripts.pory"
	walk_down
# 171 "data/maps/PalletTown/scripts.pory"
	walk_right
# 172 "data/maps/PalletTown/scripts.pory"
	walk_right
# 173 "data/maps/PalletTown/scripts.pory"
	walk_right
# 174 "data/maps/PalletTown/scripts.pory"
	walk_right
# 175 "data/maps/PalletTown/scripts.pory"
	step_end
# 176 "data/maps/PalletTown/scripts.pory"

# 177 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerLeft::
# 178 "data/maps/PalletTown/scripts.pory"
	lockall
# 179 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 180 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 181 "data/maps/PalletTown/scripts.pory"
	end
# 182 "data/maps/PalletTown/scripts.pory"

# 183 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerRight::
# 184 "data/maps/PalletTown/scripts.pory"
	lockall
# 185 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 186 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 187 "data/maps/PalletTown/scripts.pory"
	end
# 188 "data/maps/PalletTown/scripts.pory"

# 189 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTrigger::
# 190 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 191 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 192 "data/maps/PalletTown/scripts.pory"
	delay 30
# 193 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_OAK, 0
# 194 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 195 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 196 "data/maps/PalletTown/scripts.pory"
	delay 85
# 197 "data/maps/PalletTown/scripts.pory"
	closemessage
# 198 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 199 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 200 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 201 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 202 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 203 "data/maps/PalletTown/scripts.pory"
	delay 30
# 204 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PROF_OAK
# 205 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 206 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 207 "data/maps/PalletTown/scripts.pory"
	delay 30
# 208 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 209 "data/maps/PalletTown/scripts.pory"
	closemessage
# 210 "data/maps/PalletTown/scripts.pory"
	delay 30
# 211 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 212 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 213 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 214 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 215 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
# 216 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 217 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 218 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 219 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 220 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 221 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 222 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 223 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 224 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 225 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 226 "data/maps/PalletTown/scripts.pory"
	waitstate
# 227 "data/maps/PalletTown/scripts.pory"
	releaseall
# 228 "data/maps/PalletTown/scripts.pory"
	end
# 229 "data/maps/PalletTown/scripts.pory"

# 230 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterLeft::
# 231 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 232 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 233 "data/maps/PalletTown/scripts.pory"
	return
# 234 "data/maps/PalletTown/scripts.pory"

# 235 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterRight::
# 236 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterRight
# 237 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 238 "data/maps/PalletTown/scripts.pory"
	return
# 239 "data/maps/PalletTown/scripts.pory"

# 240 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 241 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 242 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 243 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 244 "data/maps/PalletTown/scripts.pory"
	return
# 245 "data/maps/PalletTown/scripts.pory"

# 246 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabRight::
# 247 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 248 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 249 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 250 "data/maps/PalletTown/scripts.pory"
	return
# 251 "data/maps/PalletTown/scripts.pory"

# 252 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft::
# 253 "data/maps/PalletTown/scripts.pory"
	walk_up
# 254 "data/maps/PalletTown/scripts.pory"
	walk_up
# 255 "data/maps/PalletTown/scripts.pory"
	walk_right
# 256 "data/maps/PalletTown/scripts.pory"
	walk_up
# 257 "data/maps/PalletTown/scripts.pory"
	walk_up
# 258 "data/maps/PalletTown/scripts.pory"
	walk_right
# 259 "data/maps/PalletTown/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown/scripts.pory"
	walk_up
# 261 "data/maps/PalletTown/scripts.pory"
	step_end
# 262 "data/maps/PalletTown/scripts.pory"

# 263 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 264 "data/maps/PalletTown/scripts.pory"
	walk_right
# 265 "data/maps/PalletTown/scripts.pory"
	walk_up
# 266 "data/maps/PalletTown/scripts.pory"
	walk_up
# 267 "data/maps/PalletTown/scripts.pory"
	walk_right
# 268 "data/maps/PalletTown/scripts.pory"
	walk_up
# 269 "data/maps/PalletTown/scripts.pory"
	walk_up
# 270 "data/maps/PalletTown/scripts.pory"
	walk_right
# 271 "data/maps/PalletTown/scripts.pory"
	walk_up
# 272 "data/maps/PalletTown/scripts.pory"
	walk_up
# 273 "data/maps/PalletTown/scripts.pory"
	step_end
# 274 "data/maps/PalletTown/scripts.pory"

# 275 "data/maps/PalletTown/scripts.pory"
	.macro walk_to_lab
# 276 "data/maps/PalletTown/scripts.pory"
	walk_left
# 277 "data/maps/PalletTown/scripts.pory"
	walk_down
# 278 "data/maps/PalletTown/scripts.pory"
	walk_down
# 279 "data/maps/PalletTown/scripts.pory"
	walk_down
# 280 "data/maps/PalletTown/scripts.pory"
	walk_down
# 281 "data/maps/PalletTown/scripts.pory"
	walk_down
# 282 "data/maps/PalletTown/scripts.pory"
	walk_down
# 283 "data/maps/PalletTown/scripts.pory"
	walk_down
# 284 "data/maps/PalletTown/scripts.pory"
	walk_down
# 285 "data/maps/PalletTown/scripts.pory"
	walk_down
# 286 "data/maps/PalletTown/scripts.pory"
	walk_down
# 287 "data/maps/PalletTown/scripts.pory"
	walk_down
# 288 "data/maps/PalletTown/scripts.pory"
	walk_right
# 289 "data/maps/PalletTown/scripts.pory"
	walk_right
# 290 "data/maps/PalletTown/scripts.pory"
	walk_right
# 291 "data/maps/PalletTown/scripts.pory"
	walk_right
# 292 "data/maps/PalletTown/scripts.pory"
	.endm
# 293 "data/maps/PalletTown/scripts.pory"

# 294 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 295 "data/maps/PalletTown/scripts.pory"
	walk_down
# 296 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 297 "data/maps/PalletTown/scripts.pory"
	walk_right
# 298 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 299 "data/maps/PalletTown/scripts.pory"
	step_end
# 300 "data/maps/PalletTown/scripts.pory"

# 301 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 302 "data/maps/PalletTown/scripts.pory"
	walk_down
# 303 "data/maps/PalletTown/scripts.pory"
	walk_left
# 304 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 305 "data/maps/PalletTown/scripts.pory"
	walk_right
# 306 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 307 "data/maps/PalletTown/scripts.pory"
	step_end
# 308 "data/maps/PalletTown/scripts.pory"

# 309 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab::
# 310 "data/maps/PalletTown/scripts.pory"
	walk_up
# 311 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 312 "data/maps/PalletTown/scripts.pory"
	step_end
# 313 "data/maps/PalletTown/scripts.pory"

# 314 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 315 "data/maps/PalletTown/scripts.pory"
	walk_down
# 316 "data/maps/PalletTown/scripts.pory"
	walk_down
# 317 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 318 "data/maps/PalletTown/scripts.pory"
	step_end
# 319 "data/maps/PalletTown/scripts.pory"

# 320 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 321 "data/maps/PalletTown/scripts.pory"
	walk_down
# 322 "data/maps/PalletTown/scripts.pory"
	walk_down
# 323 "data/maps/PalletTown/scripts.pory"
	walk_left
# 324 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 325 "data/maps/PalletTown/scripts.pory"
	step_end
# 326 "data/maps/PalletTown/scripts.pory"

# 327 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab::
# 328 "data/maps/PalletTown/scripts.pory"
	walk_right
# 329 "data/maps/PalletTown/scripts.pory"
	walk_up
# 330 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 331 "data/maps/PalletTown/scripts.pory"
	step_end
# 332 "data/maps/PalletTown/scripts.pory"

# 333 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLady::
# 334 "data/maps/PalletTown/scripts.pory"
	lock
# 335 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 336 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 337 "data/maps/PalletTown/scripts.pory"
	goto_if_eq SIGN_LADY_READY, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 338 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 339 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 340 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 341 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 343 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_ExclamationMark
# 344 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 345 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_Delay48
# 346 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 347 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 348 "data/maps/PalletTown/scripts.pory"
	closemessage
# 349 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 350 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 351 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm LOCALID_SIGN_LADY
# 352 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 353 "data/maps/PalletTown/scripts.pory"
	release
# 354 "data/maps/PalletTown/scripts.pory"
	end
# 355 "data/maps/PalletTown/scripts.pory"

# 356 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 357 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 358 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 359 "data/maps/PalletTown/scripts.pory"
	return
# 360 "data/maps/PalletTown/scripts.pory"

# 361 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 362 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 363 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 364 "data/maps/PalletTown/scripts.pory"
	return
# 365 "data/maps/PalletTown/scripts.pory"

# 366 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyDone::
# 367 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 368 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 369 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 370 "data/maps/PalletTown/scripts.pory"
	release
# 371 "data/maps/PalletTown/scripts.pory"
	end
# 372 "data/maps/PalletTown/scripts.pory"

# 373 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyGoReadSign::
# 374 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 375 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 376 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 377 "data/maps/PalletTown/scripts.pory"
	release
# 378 "data/maps/PalletTown/scripts.pory"
	end
# 379 "data/maps/PalletTown/scripts.pory"

# 380 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyJustShowedSign::
# 381 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 382 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 383 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 384 "data/maps/PalletTown/scripts.pory"
	release
# 385 "data/maps/PalletTown/scripts.pory"
	end
# 386 "data/maps/PalletTown/scripts.pory"

# 387 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight::
# 388 "data/maps/PalletTown/scripts.pory"
	walk_right
# 389 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 390 "data/maps/PalletTown/scripts.pory"
	step_end
# 391 "data/maps/PalletTown/scripts.pory"

# 392 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft::
# 393 "data/maps/PalletTown/scripts.pory"
	walk_left
# 394 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 395 "data/maps/PalletTown/scripts.pory"
	step_end
# 396 "data/maps/PalletTown/scripts.pory"

# 397 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_FatMan::
# 398 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 399 "data/maps/PalletTown/scripts.pory"
	end
# 400 "data/maps/PalletTown/scripts.pory"

# 401 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OaksLabSign::
# 402 "data/maps/PalletTown/scripts.pory"
	lockall
# 403 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 404 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 405 "data/maps/PalletTown/scripts.pory"
	releaseall
# 406 "data/maps/PalletTown/scripts.pory"
	end
# 407 "data/maps/PalletTown/scripts.pory"

# 408 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_PlayersHouseSign::
# 409 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
# 410 "data/maps/PalletTown/scripts.pory"
	end
# 411 "data/maps/PalletTown/scripts.pory"

# 412 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_RivalsHouseSign::
# 413 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
# 414 "data/maps/PalletTown/scripts.pory"
	end
# 415 "data/maps/PalletTown/scripts.pory"

# 416 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TownSign::
# 417 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
# 418 "data/maps/PalletTown/scripts.pory"
	end
# 419 "data/maps/PalletTown/scripts.pory"

# 420 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TrainerTips::
# 421 "data/maps/PalletTown/scripts.pory"
	lockall
# 422 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 423 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 424 "data/maps/PalletTown/scripts.pory"
	releaseall
# 425 "data/maps/PalletTown/scripts.pory"
	end
# 426 "data/maps/PalletTown/scripts.pory"

# 427 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyTrigger::
# 428 "data/maps/PalletTown/scripts.pory"
	lockall
# 429 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 430 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 431 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 432 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 433 "data/maps/PalletTown/scripts.pory"
	releaseall
# 434 "data/maps/PalletTown/scripts.pory"
	end
# 435 "data/maps/PalletTown/scripts.pory"

# 436 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyShowSign::
# 437 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 438 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 439 "data/maps/PalletTown/scripts.pory"
	closemessage
# 440 "data/maps/PalletTown/scripts.pory"
	delay 20
# 441 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 442 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 443 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 444 "data/maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, FALSE
# 445 "data/maps/PalletTown/scripts.pory"
	special SetWalkingIntoSignVars
# 446 "data/maps/PalletTown/scripts.pory"
	special DisableMsgBoxWalkaway
# 447 "data/maps/PalletTown/scripts.pory"
	signmsg
# 448 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 449 "data/maps/PalletTown/scripts.pory"
	normalmsg
# 450 "data/maps/PalletTown/scripts.pory"
	return
# 451 "data/maps/PalletTown/scripts.pory"

# 452 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyStartShowSign::
# 453 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 454 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 455 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 456 "data/maps/PalletTown/scripts.pory"
	release
# 457 "data/maps/PalletTown/scripts.pory"
	end
