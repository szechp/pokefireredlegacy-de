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
	map_script MAP_SCRIPT_ON_LOAD, OneIsland_PokemonCenter_1F_OnLoad
# 8 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_PokemonCenter_1F_OnFrame
# 9 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 10 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnLoad::
# 12 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 13 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 14 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 15 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile::
# 17 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 13, 4, METATILE_PokemonCenter_NetworkMachine_Ruby, 1
# 18 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 19 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile::
# 21 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 16, 4, METATILE_PokemonCenter_NetworkMachine_Sapphire, 1
# 22 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 23 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn::
# 25 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 26 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 14, 4, METATILE_PokemonCenter_NetworkMachine_ScreenLeft_On, 1
# 27 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 15, 4, METATILE_PokemonCenter_NetworkMachine_ScreenRight_On, 1
# 28 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 29 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition::
# 31 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_ONE_ISLAND
# 32 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone
# 33 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos
# 34 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos
# 35 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone::
# 38 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
# 39 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 40 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos::
# 42 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_BILL, 9, 8
# 43 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_UP
# 44 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 15, 6
# 45 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 47 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos::
# 49 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_BILL, 14, 7
# 50 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_LEFT
# 51 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 14, 8
# 52 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_LEFT
# 53 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 54 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnFrame::
# 56 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene
# 57 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	.2byte 0
# 58 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 59 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene::
# 60 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 61 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 62 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio
# 63 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio
# 64 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio
# 66 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 67 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 69 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_ExclamationMark
# 70 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 72 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_Delay48
# 74 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 75 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut
# 76 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing
# 77 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 78 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 79 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 80 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio
# 81 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 84 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 85 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp
# 86 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp
# 87 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 88 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive
# 90 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed
# 91 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 92 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours
# 94 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 95 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterUp
# 96 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 97 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou
# 98 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 99 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 100 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 101 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 102 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer
# 103 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgreceiveditem OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill, ITEM_METEORITE, 1, MUS_OBTAIN_KEY_ITEM
# 104 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_METEORITE
# 105 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 106 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis
# 108 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ObtainedTriPass, ITEM_TRI_PASS, 1, MUS_OBTAIN_KEY_ITEM
# 109 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands
# 110 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage
# 111 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap
# 112 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_123
# 113 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCatchYouLater
# 114 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 115 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterUp
# 116 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 118 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 119 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_PC_STORAGE_DISABLED
# 120 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_SEVIIGUYS
# 121 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_JOHTO_LEADERS
# 122 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_CELEBI
# 123 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SPAWN_CELEBI
# 124 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 125 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 126 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 127 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 128 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp::
# 129 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
# 130 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 131 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 132 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp::
# 133 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
# 134 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 135 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 136 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage::
# 137 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 138 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 139 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
# 140 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 141 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 142 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 143 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 144 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 145 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap::
# 146 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 147 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 148 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_OBTAIN_KEY_ITEM
# 149 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 150 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 151 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio::
# 152 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 153 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 154 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 155 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 156 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 157 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 158 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 159 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 160 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 161 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 162 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio::
# 163 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 164 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 165 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 166 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 167 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 168 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 169 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 170 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 171 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 172 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 173 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 174 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkUp:
# 175 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 176 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 177 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 178 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 179 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft::
# 180 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 181 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 182 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 183 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 184 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Nurse::
# 185 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 186 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 187 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 188 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 189 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 190 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 191 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Bill::
# 192 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 193 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll
# 194 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
# 195 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 196 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 197 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 198 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll::
# 199 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_FacePlayer
# 200 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 201 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
# 202 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 203 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 204 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 205 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio::
# 206 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 207 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 208 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7, OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
# 209 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire
# 210 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
# 211 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 212 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
# 213 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby
# 214 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 215 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby
# 216 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3, OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex
# 217 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
# 218 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 219 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FaceOriginalDirection
# 220 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 221 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 222 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 223 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 224 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
# 225 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
# 226 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	random 3
# 227 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, OneIsland_PokemonCenter_1F_EventScript_BillFact1
# 228 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, OneIsland_PokemonCenter_1F_EventScript_BillFact2
# 229 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 5
# 230 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
# 231 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 232 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 233 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 234 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact1::
# 235 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 3
# 236 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
# 237 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 238 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 239 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 240 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact2::
# 241 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 4
# 242 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
# 243 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 244 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 245 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 246 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire::
# 247 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
# 248 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 249 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 250 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 251 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
# 252 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 253 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 254 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
# 255 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 256 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 257 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 258 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_SAPPHIRE
# 259 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
# 260 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 261 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 262 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 263 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 264 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 265 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 266 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
# 267 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 268 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 60
# 269 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 270 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 271 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 272 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 273 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 274 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 40
# 275 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PC_ON
# 276 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 277 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 278 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
# 279 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 280 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 281 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
# 282 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special SetPostgameFlags
# 283 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_CAN_LINK_WITH_RS
# 284 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_SEVIIGUYS
# 285 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_JOHTO_LEADERS
# 286 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
# 287 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 288 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_GIOVANNI_ONE
# 289 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_GIOVANNI4
# 290 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 291 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special InitRoamer
# 292 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 293 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 294 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 295 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass::
# 296 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
# 297 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 298 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 299 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 300 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
# 301 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
# 302 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 303 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 304 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
# 305 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 306 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 307 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 308 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 309 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 310 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 311 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 312 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 313 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 314 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 315 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 316 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 317 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
# 318 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 319 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 320 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 321 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 322 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio::
# 323 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
# 324 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 325 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 326 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 327 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 328 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass::
# 329 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
# 330 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_RUBY
# 331 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_TRI_PASS
# 332 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 333 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_RAINBOW_PASS
# 334 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_4567
# 335 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 336 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 337 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
# 338 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 339 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 340 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 341 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
# 342 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 343 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 344 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 345 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 346 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 347 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 348 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby::
# 349 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
# 350 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 351 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 352 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 353 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby::
# 354 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
# 355 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 356 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 357 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
# 358 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 359 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 360 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
# 361 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
# 362 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 363 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 364 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 365 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 366 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex::
# 367 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
# 368 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 369 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 370 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 371 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine::
# 372 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 373 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 374 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 375 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 376 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 377 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine::
# 378 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 379 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 380 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 381 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 382 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 383 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 384 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 385 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
# 386 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
# 387 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 388 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 389 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Hiker::
# 390 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
# 391 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 392 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 393 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
# 394 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 395 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 396 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked
# 397 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
# 398 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 399 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 400 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 401 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked::
# 402 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
# 403 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 404 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 405 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 406 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
# 407 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 408 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn
# 409 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto
# 410 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
# 411 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 412 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 413 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 414 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto::
# 415 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
# 416 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 417 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 418 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 419 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn::
# 420 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
# 421 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 422 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 423 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 424 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
# 425 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 426 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 427 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 428 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 429 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 430 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
# 431 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 432 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 433 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 434 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 435 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 436 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
# 437 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 438 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 439 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 440 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 441 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 442 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
# 443 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 444 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 4
# 445 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 446 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 447 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 448 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
# 449 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 450 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 451 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_ExclamationMark
# 452 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 453 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
# 454 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 455 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop
# 456 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop
# 457 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom
# 458 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom
# 459 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 460 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
# 461 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 462 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 463 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
# 464 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 465 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 466 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 467 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 468 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
# 469 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
# 470 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 471 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterLeft
# 472 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 473 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 474 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 475 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 476 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 477 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
# 478 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 479 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 480 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 481 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 482 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 483 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 484 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 485 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 486 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
# 487 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 488 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 25
# 489 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerExit
# 490 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, OneIsland_PokemonCenter_1F_Movement_BillExit
# 491 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 492 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 493 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
# 494 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
# 495 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 496 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
# 497 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 498 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
# 499 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto EventScript_SetSail
# 500 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 501 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 502 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop::
# 503 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop
# 504 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 505 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 506 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 507 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop::
# 508 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop
# 509 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 510 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 511 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 512 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom::
# 513 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom
# 514 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 515 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 516 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 517 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom::
# 518 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom
# 519 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 520 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 521 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 522 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop::
# 523 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 524 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 525 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 526 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 527 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 528 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop::
# 529 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 530 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 531 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 532 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom::
# 533 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 534 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 535 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 536 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 537 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 538 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom::
# 539 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 540 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 541 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 542 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 543 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 544 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 545 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 546 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_DelayWalkInPlaceLeft::
# 547 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 548 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 549 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_4
# 550 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_left
# 551 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 552 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 553 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 554 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkInPlaceDown::
# 555 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_fast_down
# 556 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 557 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 558 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerExit::
# 559 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 560 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 561 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 562 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 563 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 564 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 565 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 566 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 567 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillExit::
# 568 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 569 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 570 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 571 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 572 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 573 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 574 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
