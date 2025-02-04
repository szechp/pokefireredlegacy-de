# 1 "data/maps/CinnabarIsland/scripts.pory"

# 2 "data/maps/CinnabarIsland/scripts.pory"
.equ LOCALID_BILL, 3
# 3 "data/maps/CinnabarIsland/scripts.pory"
.equ LOCALID_SEAGALLOP, 4
# 4 "data/maps/CinnabarIsland/scripts.pory"

# 5 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_MapScripts::
# 6 "data/maps/CinnabarIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
# 7 "data/maps/CinnabarIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_OnFrame
# 8 "data/maps/CinnabarIsland/scripts.pory"
	.byte 0
# 9 "data/maps/CinnabarIsland/scripts.pory"

# 10 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_OnTransition::
# 11 "data/maps/CinnabarIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 12 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_CheckUnlockGym
# 13 "data/maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland
# 14 "data/maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands
# 15 "data/maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter
# 16 "data/maps/CinnabarIsland/scripts.pory"
	end
# 17 "data/maps/CinnabarIsland/scripts.pory"

# 18 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter::
# 19 "data/maps/CinnabarIsland/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 20 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_TEMP_2
# 21 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_BILL, 15, 12
# 22 "data/maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_LEFT
# 23 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_SEAGALLOP, 30, 12
# 24 "data/maps/CinnabarIsland/scripts.pory"
	return
# 25 "data/maps/CinnabarIsland/scripts.pory"

# 26 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland::
# 27 "data/maps/CinnabarIsland/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 28 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_ge VAR_0x8004, 18, CinnabarIsland_EventScript_MoveSeagallopDown
# 29 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_TEMP_2
# 30 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_BILL, 18, 12
# 31 "data/maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_SEAGALLOP, 34, 7
# 33 "data/maps/CinnabarIsland/scripts.pory"
	return
# 34 "data/maps/CinnabarIsland/scripts.pory"

# 35 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_MoveSeagallopDown::
# 36 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_SEAGALLOP, 34, 7
# 37 "data/maps/CinnabarIsland/scripts.pory"
	return
# 38 "data/maps/CinnabarIsland/scripts.pory"

# 39 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands::
# 40 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_BILL, 25, 7
# 41 "data/maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_UP
# 42 "data/maps/CinnabarIsland/scripts.pory"
	return
# 43 "data/maps/CinnabarIsland/scripts.pory"

# 44 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_CheckUnlockGym::
# 45 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_set FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY, CinnabarIsland_EventScript_UnlockGym
# 46 "data/maps/CinnabarIsland/scripts.pory"
	return
# 47 "data/maps/CinnabarIsland/scripts.pory"

# 48 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_UnlockGym::
# 49 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 50 "data/maps/CinnabarIsland/scripts.pory"
	return
# 51 "data/maps/CinnabarIsland/scripts.pory"

# 52 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_OnFrame::
# 53 "data/maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ExitPokeCenterForOneIsland
# 54 "data/maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_BillScene
# 55 "data/maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReturnFromSeviiIslands
# 56 "data/maps/CinnabarIsland/scripts.pory"
	.2byte 0
# 57 "data/maps/CinnabarIsland/scripts.pory"

# 58 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ExitPokeCenterForOneIsland::
# 59 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 60 "data/maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 61 "data/maps/CinnabarIsland/scripts.pory"
	savebgm MUS_DUMMY
# 62 "data/maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 63 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 2
# 64 "data/maps/CinnabarIsland/scripts.pory"
	delay 20
# 65 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 66 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 67 "data/maps/CinnabarIsland/scripts.pory"
	end
# 68 "data/maps/CinnabarIsland/scripts.pory"

# 69 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReturnFromSeviiIslands::
# 70 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 71 "data/maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 72 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain
# 73 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 74 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillExit
# 75 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 76 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_BILL
# 77 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 4
# 78 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 79 "data/maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_HIDE_LOSTELLE_IN_HER_HOME
# 80 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 81 "data/maps/CinnabarIsland/scripts.pory"
	end
# 82 "data/maps/CinnabarIsland/scripts.pory"

# 83 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillExit::
# 84 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 85 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 86 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 87 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 88 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 89 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 90 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 91 "data/maps/CinnabarIsland/scripts.pory"

# 92 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillScene::
# 93 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 94 "data/maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 95 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillFacePlayer1
# 96 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillFacePlayer2
# 97 "data/maps/CinnabarIsland/scripts.pory"
	playse SE_PIN
# 98 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_ExclamationMark
# 99 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 100 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_Delay48
# 101 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 102 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillApproachPlayer1
# 103 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillApproachPlayer2
# 104 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_HeyIfItIsntPlayer
# 105 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ComeWithMeToOneIsland, MSGBOX_YESNO
# 106 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_EventScript_AgreeSailToOneIsland
# 107 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_EventScript_DeclineSailToOneIsland
# 108 "data/maps/CinnabarIsland/scripts.pory"
	end
# 109 "data/maps/CinnabarIsland/scripts.pory"

# 110 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer1::
# 111 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterUp
# 112 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 113 "data/maps/CinnabarIsland/scripts.pory"
	return
# 114 "data/maps/CinnabarIsland/scripts.pory"

# 115 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer2::
# 116 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterLeft
# 117 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 118 "data/maps/CinnabarIsland/scripts.pory"
	return
# 119 "data/maps/CinnabarIsland/scripts.pory"

# 120 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer1::
# 121 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillApproachPlayer1
# 122 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 123 "data/maps/CinnabarIsland/scripts.pory"
	return
# 124 "data/maps/CinnabarIsland/scripts.pory"

# 125 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer2::
# 126 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillApproachPlayer2
# 127 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 128 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 129 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 130 "data/maps/CinnabarIsland/scripts.pory"
	return
# 131 "data/maps/CinnabarIsland/scripts.pory"

# 132 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_AgreeSailToOneIsland::
# 133 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_AllRightLetsGo
# 134 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 135 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 136 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 137 "data/maps/CinnabarIsland/scripts.pory"
	end
# 138 "data/maps/CinnabarIsland/scripts.pory"

# 139 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_DeclineSailToOneIsland::
# 140 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IllBeWaitingInPokeCenter
# 141 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 142 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillExitToPokeCenter
# 143 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillReturnToPokeCenter
# 144 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_BILL
# 145 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 146 "data/maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 147 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 148 "data/maps/CinnabarIsland/scripts.pory"
	end
# 149 "data/maps/CinnabarIsland/scripts.pory"

# 150 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillExitToPokeCenter::
# 151 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillExitToPokeCenter
# 152 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 153 "data/maps/CinnabarIsland/scripts.pory"
	return
# 154 "data/maps/CinnabarIsland/scripts.pory"

# 155 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillExitToPokeCenter::
# 156 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 157 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 158 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 159 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 160 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 161 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 162 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 163 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 164 "data/maps/CinnabarIsland/scripts.pory"

# 165 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillReturnToPokeCenter::
# 166 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_PlayerWatchBillExit
# 167 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillApproachDoor
# 168 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 169 "data/maps/CinnabarIsland/scripts.pory"
	opendoor 14, 11
# 170 "data/maps/CinnabarIsland/scripts.pory"
	waitdooranim
# 171 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillReEnterPokeCenter
# 172 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 173 "data/maps/CinnabarIsland/scripts.pory"
	closedoor 14, 11
# 174 "data/maps/CinnabarIsland/scripts.pory"
	waitdooranim
# 175 "data/maps/CinnabarIsland/scripts.pory"
	return
# 176 "data/maps/CinnabarIsland/scripts.pory"

# 177 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerWatchBillExit::
# 178 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 179 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 180 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 181 "data/maps/CinnabarIsland/scripts.pory"

# 182 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachDoor::
# 183 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 184 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 185 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_up
# 186 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 187 "data/maps/CinnabarIsland/scripts.pory"

# 188 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillReEnterPokeCenter::
# 189 "data/maps/CinnabarIsland/scripts.pory"
	walk_up
# 190 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 191 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 192 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 193 "data/maps/CinnabarIsland/scripts.pory"

# 194 "data/maps/CinnabarIsland/scripts.pory"
@ Can be triggered outside, or after talking to Bill in the poke center
# 195 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland::
# 196 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_ApproachShore
# 197 "data/maps/CinnabarIsland/scripts.pory"
	addobject LOCALID_SEAGALLOP
# 198 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArrive
# 199 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArriveExitedPokeCenter
# 200 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_MyPalsBoatArrived
# 201 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 202 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoat
# 203 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoatExitedPokeCenter
# 204 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 205 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_BILL
# 206 "data/maps/CinnabarIsland/scripts.pory"
	delay 40
# 207 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_SEAGALLOP
# 208 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1
# 209 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_CINNABAR_ISLAND
# 210 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 211 "data/maps/CinnabarIsland/scripts.pory"
	goto EventScript_SetSail
# 212 "data/maps/CinnabarIsland/scripts.pory"
	end
# 213 "data/maps/CinnabarIsland/scripts.pory"

# 214 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ApproachShore::
# 215 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_ApproachShore
# 216 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_ApproachShore
# 217 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 218 "data/maps/CinnabarIsland/scripts.pory"
	return
# 219 "data/maps/CinnabarIsland/scripts.pory"

# 220 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoatArrive::
# 221 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillFaceBoat
# 222 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 223 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 224 "data/maps/CinnabarIsland/scripts.pory"
	return
# 225 "data/maps/CinnabarIsland/scripts.pory"

# 226 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoatArriveExitedPokeCenter::
# 227 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 228 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 229 "data/maps/CinnabarIsland/scripts.pory"
	return
# 230 "data/maps/CinnabarIsland/scripts.pory"

# 231 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoardBoat::
# 232 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillBoardBoat
# 233 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoat
# 234 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 235 "data/maps/CinnabarIsland/scripts.pory"
	return
# 236 "data/maps/CinnabarIsland/scripts.pory"

# 237 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoardBoatExitedPokeCenter::
# 238 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillBoardBoatFromShore
# 239 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoatFromShore
# 240 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 241 "data/maps/CinnabarIsland/scripts.pory"
	return
# 242 "data/maps/CinnabarIsland/scripts.pory"

# 243 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Fisherman::
# 244 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_FishermanCheckFishingRod
# 245 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_FishermanCheckPokeballs
# 246 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_Fishing, MSGBOX_NPC
# 247 "data/maps/CinnabarIsland/scripts.pory"
	release
# 248 "data/maps/CinnabarIsland/scripts.pory"
	end
# 249 "data/maps/CinnabarIsland/scripts.pory"

# 250 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_FishermanCheckFishingRod::
# 251 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_OLD_ROD
# 252 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 253 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_GOOD_ROD
# 254 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 255 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_SUPER_ROD
# 256 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 257 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_NoFishingRod, MSGBOX_DEFAULT
# 258 "data/maps/CinnabarIsland/scripts.pory"
	giveitem ITEM_OLD_ROD
# 259 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_GOT_OLD_ROD
# 260 "data/maps/CinnabarIsland/scripts.pory"
	return
# 261 "data/maps/CinnabarIsland/scripts.pory"

# 262 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_FishermanCheckPokeballs::
# 263 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_MASTER_BALL
# 264 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 265 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_ULTRA_BALL
# 266 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 267 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_GREAT_BALL
# 268 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 269 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_POKE_BALL
# 270 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 271 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_NET_BALL
# 272 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 273 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_DIVE_BALL
# 274 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 275 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_NEST_BALL
# 276 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 277 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_REPEAT_BALL
# 278 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 279 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_TIMER_BALL
# 280 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 281 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 282 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 283 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_PREMIER_BALL
# 284 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 285 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_NoPokeballs, MSGBOX_DEFAULT
# 286 "data/maps/CinnabarIsland/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 287 "data/maps/CinnabarIsland/scripts.pory"

# 288 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Return::
# 289 "data/maps/CinnabarIsland/scripts.pory"
	return
# 290 "data/maps/CinnabarIsland/scripts.pory"

# 291 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BoatArrive::
# 292 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 293 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 294 "data/maps/CinnabarIsland/scripts.pory"
	walk_fast_left
# 295 "data/maps/CinnabarIsland/scripts.pory"
	walk_fast_left
# 296 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 297 "data/maps/CinnabarIsland/scripts.pory"
	walk_slower_left
# 298 "data/maps/CinnabarIsland/scripts.pory"
	walk_slower_left
# 299 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 300 "data/maps/CinnabarIsland/scripts.pory"

# 301 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillBoardBoat::
# 302 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 303 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 304 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 305 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 306 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 307 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 308 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 309 "data/maps/CinnabarIsland/scripts.pory"

# 310 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer1::
# 311 "data/maps/CinnabarIsland/scripts.pory"
	walk_up
# 312 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 313 "data/maps/CinnabarIsland/scripts.pory"

# 314 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer2::
# 315 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 316 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 317 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 318 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 319 "data/maps/CinnabarIsland/scripts.pory"

# 320 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillFaceBoat::
# 321 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 322 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 323 "data/maps/CinnabarIsland/scripts.pory"
	delay_8
# 324 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 325 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 326 "data/maps/CinnabarIsland/scripts.pory"

# 327 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_ApproachShore::
# 328 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 329 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 330 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 331 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 332 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 333 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 334 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 335 "data/maps/CinnabarIsland/scripts.pory"

# 336 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillBoardBoatFromShore::
# 337 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 338 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 339 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 340 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 341 "data/maps/CinnabarIsland/scripts.pory"

# 342 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoat::
# 343 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 344 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 345 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 346 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 347 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 348 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 349 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 350 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 351 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 352 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 353 "data/maps/CinnabarIsland/scripts.pory"

# 354 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoatFromShore::
# 355 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 356 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 357 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 358 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 359 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 360 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 361 "data/maps/CinnabarIsland/scripts.pory"

# 362 "data/maps/CinnabarIsland/scripts.pory"
@ Triggered when VAR_TEMP_1 is 0
# 363 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_GymDoorLocked::
# 364 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 365 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 366 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 367 "data/maps/CinnabarIsland/scripts.pory"
	delay 20
# 368 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_DoorIsLocked
# 369 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 370 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_ForcePlayerFromDoor
# 371 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 372 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 373 "data/maps/CinnabarIsland/scripts.pory"
	end
# 374 "data/maps/CinnabarIsland/scripts.pory"

# 375 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_ForcePlayerFromDoor::
# 376 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 377 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 378 "data/maps/CinnabarIsland/scripts.pory"

# 379 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Woman::
# 380 "data/maps/CinnabarIsland/scripts.pory"
	lock
# 381 "data/maps/CinnabarIsland/scripts.pory"
	faceplayer
# 382 "data/maps/CinnabarIsland/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 3
# 383 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab
# 384 "data/maps/CinnabarIsland/scripts.pory"
	release
# 385 "data/maps/CinnabarIsland/scripts.pory"
	end
# 386 "data/maps/CinnabarIsland/scripts.pory"

# 387 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_OldMan::
# 388 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistsExperimentInMansion, MSGBOX_NPC
# 389 "data/maps/CinnabarIsland/scripts.pory"
	end
# 390 "data/maps/CinnabarIsland/scripts.pory"

# 391 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Scientist::
# 392 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistVolcano, MSGBOX_NPC
# 393 "data/maps/CinnabarIsland/scripts.pory"
	end	
# 394 "data/maps/CinnabarIsland/scripts.pory"

# 395 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_IslandSign::
# 396 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IslandSign, MSGBOX_SIGN
# 397 "data/maps/CinnabarIsland/scripts.pory"
	end
# 398 "data/maps/CinnabarIsland/scripts.pory"

# 399 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_PokemonLabSign::
# 400 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_PokemonLab, MSGBOX_SIGN
# 401 "data/maps/CinnabarIsland/scripts.pory"
	end
# 402 "data/maps/CinnabarIsland/scripts.pory"

# 403 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_GymSign::
# 404 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 405 "data/maps/CinnabarIsland/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 0
# 406 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_GymSign
# 407 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 408 "data/maps/CinnabarIsland/scripts.pory"
	end
