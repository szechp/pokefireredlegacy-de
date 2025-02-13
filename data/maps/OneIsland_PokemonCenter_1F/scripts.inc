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
	setflag FLAG_CELEBI
# 121 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SPAWN_CELEBI
# 122 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 123 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 124 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 125 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 126 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp::
# 127 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
# 128 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 129 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 130 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp::
# 131 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
# 132 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 133 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 134 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage::
# 135 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 136 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 137 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
# 138 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 139 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 140 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 141 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 142 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 143 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap::
# 144 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 145 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 146 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_OBTAIN_KEY_ITEM
# 147 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 148 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 149 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio::
# 150 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 151 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 152 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 153 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 154 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 155 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 156 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 157 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 158 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 159 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 160 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio::
# 161 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 162 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 163 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 164 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 165 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 166 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 167 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 168 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 169 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 170 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 171 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 172 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkUp:
# 173 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 174 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 175 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 176 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 177 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft::
# 178 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 179 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 180 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 181 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 182 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Nurse::
# 183 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 184 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 185 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 186 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 187 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 188 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 189 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Bill::
# 190 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 191 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll
# 192 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
# 193 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 194 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 195 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 196 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll::
# 197 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_FacePlayer
# 198 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 199 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
# 200 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 201 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 202 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 203 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio::
# 204 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 205 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 206 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7, OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
# 207 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire
# 208 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
# 209 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 210 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
# 211 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby
# 212 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 213 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby
# 214 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3, OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex
# 215 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
# 216 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 217 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FaceOriginalDirection
# 218 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 219 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 220 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 221 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 222 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
# 223 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
# 224 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	random 3
# 225 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, OneIsland_PokemonCenter_1F_EventScript_BillFact1
# 226 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, OneIsland_PokemonCenter_1F_EventScript_BillFact2
# 227 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 5
# 228 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
# 229 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 230 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 231 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 232 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact1::
# 233 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 3
# 234 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
# 235 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 236 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 237 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 238 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact2::
# 239 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 4
# 240 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
# 241 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 242 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 243 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 244 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire::
# 245 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
# 246 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 247 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 248 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 249 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
# 250 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 251 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 252 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
# 253 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 254 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 255 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 256 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_SAPPHIRE
# 257 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
# 258 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 259 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 260 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 261 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 262 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 263 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 264 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
# 265 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 266 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 60
# 267 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 268 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 269 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 270 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 271 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 272 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 40
# 273 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PC_ON
# 274 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 275 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 276 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
# 277 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 278 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 279 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
# 280 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special SetPostgameFlags
# 281 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_CAN_LINK_WITH_RS
# 282 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_SEVIIGUYS
# 283 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_JOHTO_LEADERS
# 284 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
# 285 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 286 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_GIOVANNI_ONE
# 287 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_GIOVANNI4
# 288 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 289 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special InitRoamer
# 290 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 291 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 292 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 293 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass::
# 294 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
# 295 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 296 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 297 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 298 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
# 299 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
# 300 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 301 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 302 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
# 303 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 304 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 305 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 306 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 307 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 308 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 309 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 310 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 311 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 312 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 313 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 314 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 315 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
# 316 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 317 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 318 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 319 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 320 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio::
# 321 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
# 322 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 323 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 324 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 325 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 326 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass::
# 327 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
# 328 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_RUBY
# 329 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_TRI_PASS
# 330 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 331 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_RAINBOW_PASS
# 332 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_4567
# 333 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 334 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 335 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
# 336 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 337 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 338 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 339 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
# 340 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 341 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 342 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 343 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 344 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 345 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 346 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby::
# 347 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
# 348 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 349 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 350 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 351 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby::
# 352 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
# 353 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 354 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 355 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
# 356 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 357 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 358 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
# 359 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
# 360 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 361 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 362 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 363 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 364 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex::
# 365 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
# 366 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 367 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 368 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 369 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine::
# 370 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 371 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 372 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 373 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 374 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 375 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine::
# 376 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 377 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 378 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 379 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 380 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 381 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 382 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 383 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
# 384 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
# 385 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 386 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 387 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Hiker::
# 388 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
# 389 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 390 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 391 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
# 392 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 393 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 394 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked
# 395 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
# 396 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 397 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 398 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 399 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked::
# 400 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
# 401 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 402 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 403 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 404 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
# 405 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 406 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn
# 407 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto
# 408 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
# 409 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 410 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 411 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 412 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto::
# 413 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
# 414 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 415 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 416 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 417 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn::
# 418 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
# 419 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 420 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 421 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 422 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
# 423 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 424 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 425 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 426 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 427 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 428 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
# 429 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 430 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 431 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 432 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 433 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 434 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
# 435 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 436 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 437 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 438 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 439 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 440 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
# 441 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 442 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 4
# 443 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 444 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 445 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 446 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
# 447 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 448 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 449 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_ExclamationMark
# 450 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 451 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
# 452 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 453 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop
# 454 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop
# 455 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom
# 456 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom
# 457 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 458 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
# 459 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 460 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 461 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
# 462 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 463 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 464 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 465 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 466 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
# 467 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
# 468 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 469 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterLeft
# 470 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 471 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 472 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 473 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 474 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 475 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
# 476 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 477 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 478 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 479 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 480 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 481 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 482 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 483 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 484 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
# 485 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 486 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 25
# 487 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerExit
# 488 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, OneIsland_PokemonCenter_1F_Movement_BillExit
# 489 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 490 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 491 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
# 492 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
# 493 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 494 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
# 495 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 496 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
# 497 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto EventScript_SetSail
# 498 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 499 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 500 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop::
# 501 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop
# 502 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 503 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 504 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 505 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop::
# 506 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop
# 507 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 508 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 509 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 510 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom::
# 511 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom
# 512 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 513 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 514 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 515 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom::
# 516 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom
# 517 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 518 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 519 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 520 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop::
# 521 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 522 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 523 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 524 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 525 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 526 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop::
# 527 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 528 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 529 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 530 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom::
# 531 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 532 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 533 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 534 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 535 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 536 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom::
# 537 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 538 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 539 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 540 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 541 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 542 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 543 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 544 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_DelayWalkInPlaceLeft::
# 545 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 546 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 547 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_4
# 548 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_left
# 549 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 550 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 551 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 552 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkInPlaceDown::
# 553 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_fast_down
# 554 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 555 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 556 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerExit::
# 557 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 558 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 559 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 560 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 561 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 562 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 563 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 564 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 565 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillExit::
# 566 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 567 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 568 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 569 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 570 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 571 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 572 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
