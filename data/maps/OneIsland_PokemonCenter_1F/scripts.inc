# 1 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
.equ LOCALID_BILL,  2
# 3 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
.equ LOCALID_CELIO, 3
# 4 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 5 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_MapScripts::
# 6 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
# 7 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 8 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OneIsland_PokemonCenter_1F_OnLoad
# 9 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_PokemonCenter_1F_OnFrame
# 10 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 11 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnLoad::
# 13 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 14 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 15 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile::
# 18 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 13, 4, METATILE_PokemonCenter_NetworkMachine_Ruby, 1
# 19 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 20 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile::
# 22 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 16, 4, METATILE_PokemonCenter_NetworkMachine_Sapphire, 1
# 23 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 24 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn::
# 26 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 27 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 14, 4, METATILE_PokemonCenter_NetworkMachine_ScreenLeft_On, 1
# 28 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 15, 4, METATILE_PokemonCenter_NetworkMachine_ScreenRight_On, 1
# 29 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 30 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition::
# 32 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_ONE_ISLAND
# 33 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone
# 34 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos
# 35 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos
# 36 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 37 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone::
# 39 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
# 40 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 41 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos::
# 43 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_BILL, 9, 8
# 44 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 15, 6
# 46 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_UP
# 47 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 48 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos::
# 50 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_BILL, 14, 7
# 51 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_LEFT
# 52 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 14, 8
# 53 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_LEFT
# 54 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 55 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnFrame::
# 57 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene
# 58 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	.2byte 0
# 59 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene::
# 61 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 62 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 63 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio
# 64 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio
# 65 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 66 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio
# 67 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 68 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 70 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_ExclamationMark
# 71 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 72 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 73 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_Delay48
# 75 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 76 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut
# 77 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing
# 78 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 79 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 80 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 81 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio
# 82 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterRight
# 83 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 84 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 85 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp
# 87 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp
# 88 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 89 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 90 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive
# 91 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed
# 92 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 93 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours
# 95 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 96 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterUp
# 97 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou
# 99 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 100 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 102 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 103 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer
# 104 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgreceiveditem OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill, ITEM_METEORITE, 1, MUS_OBTAIN_KEY_ITEM
# 105 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_METEORITE
# 106 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 107 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 108 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis
# 109 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ObtainedTriPass, ITEM_TRI_PASS, 1, MUS_OBTAIN_KEY_ITEM
# 110 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands
# 111 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage
# 112 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap
# 113 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_123
# 114 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCatchYouLater
# 115 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 116 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterUp
# 117 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 118 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 119 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_PC_STORAGE_DISABLED
# 121 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_SEVIIGUYS
# 122 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_JOHTO_LEADERS
# 123 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_CELEBI
# 124 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SPAWN_CELEBI
# 125 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 126 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 127 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 128 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 129 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp::
# 130 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
# 131 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 132 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 133 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp::
# 134 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
# 135 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 136 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 137 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage::
# 138 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 139 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 140 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
# 141 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 142 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 143 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 144 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 145 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 146 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap::
# 147 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 148 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 149 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_OBTAIN_KEY_ITEM
# 150 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 151 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 152 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio::
# 153 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 154 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 155 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 156 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 157 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 158 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 159 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 160 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 161 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 162 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 163 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio::
# 164 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 165 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 166 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 167 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 168 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 169 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 170 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 171 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 172 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 173 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 174 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 175 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkUp:
# 176 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 177 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 178 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 179 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 180 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft::
# 181 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 182 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 183 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 184 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 185 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Nurse::
# 186 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 187 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 188 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 189 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 190 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 191 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 192 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Bill::
# 193 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 194 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll
# 195 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
# 196 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 197 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 198 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 199 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll::
# 200 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_FacePlayer
# 201 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 202 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
# 203 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 204 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 205 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 206 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio::
# 207 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 208 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 209 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7, OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
# 210 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire
# 211 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
# 212 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 213 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
# 214 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby
# 215 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 216 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby
# 217 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3, OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex
# 218 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
# 219 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 220 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FaceOriginalDirection
# 221 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 222 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 223 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 224 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 225 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
# 226 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
# 227 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	random 3
# 228 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, OneIsland_PokemonCenter_1F_EventScript_BillFact1
# 229 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, OneIsland_PokemonCenter_1F_EventScript_BillFact2
# 230 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 5
# 231 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
# 232 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 233 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 234 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 235 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact1::
# 236 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 3
# 237 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
# 238 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 239 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 240 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 241 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact2::
# 242 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 4
# 243 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
# 244 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 245 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 246 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 247 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire::
# 248 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
# 249 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 250 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 251 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 252 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
# 253 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 254 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 255 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
# 256 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 257 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 258 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 259 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_SAPPHIRE
# 260 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
# 261 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 262 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 263 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 264 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 265 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 266 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 267 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
# 268 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 269 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 60
# 270 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 271 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 272 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 273 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 274 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 275 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 40
# 276 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PC_ON
# 277 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 278 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 279 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
# 280 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 281 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 282 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
# 283 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special SetPostgameFlags
# 284 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_CAN_LINK_WITH_RS
# 285 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_SEVIIGUYS
# 286 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_JOHTO_LEADERS
# 287 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
# 288 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 289 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 290 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special InitRoamer
# 291 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 292 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 293 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 294 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass::
# 295 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
# 296 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 297 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 298 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 299 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
# 300 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
# 301 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 302 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 303 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
# 304 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 305 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 306 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 307 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 308 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 309 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 310 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 311 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 312 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 313 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 314 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 315 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 316 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
# 317 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 318 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 319 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 320 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 321 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio::
# 322 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
# 323 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 324 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 325 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 326 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 327 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass::
# 328 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
# 329 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_RUBY
# 330 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_TRI_PASS
# 331 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 332 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_RAINBOW_PASS
# 333 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_4567
# 334 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 335 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 336 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
# 337 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 338 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 339 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 340 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
# 341 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 342 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 343 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 344 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 345 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 346 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 347 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby::
# 348 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
# 349 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 350 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 351 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 352 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby::
# 353 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
# 354 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 355 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 356 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
# 357 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 358 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 359 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
# 360 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
# 361 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 362 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 363 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 364 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 365 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex::
# 366 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
# 367 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 368 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 369 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 370 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine::
# 371 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 372 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 373 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 374 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 375 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 376 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine::
# 377 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 378 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 379 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 380 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 381 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 382 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 383 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 384 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
# 385 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
# 386 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 387 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 388 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Hiker::
# 389 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
# 390 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 391 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 392 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
# 393 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 394 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 395 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked
# 396 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
# 397 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 398 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 399 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 400 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked::
# 401 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
# 402 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 403 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 404 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 405 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
# 406 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 407 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn
# 408 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto
# 409 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
# 410 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 411 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 412 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 413 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto::
# 414 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
# 415 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 416 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 417 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 418 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn::
# 419 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
# 420 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 421 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 422 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 423 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
# 424 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 425 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 426 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 427 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 428 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 429 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
# 430 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 431 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 432 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 433 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 434 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 435 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
# 436 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 437 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 438 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 439 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 440 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 441 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
# 442 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 443 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 4
# 444 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 445 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 446 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 447 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
# 448 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 449 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 450 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_ExclamationMark
# 451 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 452 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
# 453 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 454 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop
# 455 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop
# 456 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom
# 457 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom
# 458 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 459 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
# 460 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 461 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 462 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
# 463 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 464 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 465 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 466 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 467 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
# 468 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
# 469 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 470 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterLeft
# 471 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 472 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 473 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 474 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 475 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 476 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
# 477 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 478 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 479 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 480 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 481 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 482 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 483 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 484 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 485 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
# 486 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 487 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 25
# 488 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerExit
# 489 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, OneIsland_PokemonCenter_1F_Movement_BillExit
# 490 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 491 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 492 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
# 493 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
# 494 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 495 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
# 496 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 497 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
# 498 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto EventScript_SetSail
# 499 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 500 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 501 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop::
# 502 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop
# 503 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 504 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 505 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 506 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop::
# 507 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop
# 508 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 509 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 510 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 511 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom::
# 512 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom
# 513 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 514 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 515 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 516 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom::
# 517 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom
# 518 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 519 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 520 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 521 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop::
# 522 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 523 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 524 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 525 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 526 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 527 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop::
# 528 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 529 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 530 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 531 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom::
# 532 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 533 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 534 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 535 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 536 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 537 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom::
# 538 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 539 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 540 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 541 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 542 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 543 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 544 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 545 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_DelayWalkInPlaceLeft::
# 546 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 547 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 548 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_4
# 549 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_left
# 550 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 551 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 552 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 553 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkInPlaceDown::
# 554 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_fast_down
# 555 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 556 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 557 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerExit::
# 558 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 559 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 560 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 561 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 562 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 563 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 564 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 565 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 566 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillExit::
# 567 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 568 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 569 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 570 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 571 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 572 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 573 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
