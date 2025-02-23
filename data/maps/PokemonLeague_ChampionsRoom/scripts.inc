# 1 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 2 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
.equ LOCALID_RIVAL,    1
# 3 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
.equ LOCALID_PROF_OAK, 2
# 4 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 5 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_MapScripts::
# 6 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_ChampionsRoom_OnWarp
# 7 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_ChampionsRoom_OnResume
# 8 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_ChampionsRoom_OnFrame
# 9 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	.byte 0
# 10 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 11 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_OnResume::
# 12 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setvar VAR_0x8004, 4
# 13 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 14 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerSquirtle
# 15 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerBulbasaur
# 16 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerCharmander
# 17 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	end
# 18 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 19 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerSquirtle::
# 20 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 21 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 22 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 23 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 24 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerBulbasaur::
# 25 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 26 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 27 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 28 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 29 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerCharmander::
# 30 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 31 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 32 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 33 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 34 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger::
# 35 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 37 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 38 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_OnWarp::
# 39 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_TurnPlayerNorth
# 40 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	.2byte 0
# 41 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 42 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_TurnPlayerNorth::
# 43 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 44 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	end
# 45 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 46 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_OnFrame::
# 47 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_EnterRoom
# 48 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	.2byte 0
# 49 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 50 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom::
# 51 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	lockall
# 52 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 53 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 54 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerEnter
# 55 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 56 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay 20
# 57 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_Intro
# 58 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_RematchIntro
# 59 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_questlog PokemonLeague_ChampionsRoom_EventScript_QuestLogEnd
# 60 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 61 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 62 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	savebgm MUS_VICTORY_GYM_LEADER
# 63 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_Battle
# 64 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_Rematch
# 65 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_TEMP_4
# 66 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 67 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_DEFEATED_CHAMP
# 68 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_TEMP_4
# 69 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_PostBattle
# 70 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_PostBattle2
# 71 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	playbgm MUS_SLOW_PALLET, 0
# 72 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	addobject LOCALID_PROF_OAK
# 73 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayer
# 74 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	closemessage
# 75 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerWatchOakEnter
# 76 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, PokemonLeague_ChampionsRoom_Movement_RivalWatchOakEnter
# 77 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakEnter
# 78 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 79 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay 25
# 80 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	specialvar VAR_RESULT, GetStarterSpecies
# 81 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_RESULT
# 82 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakCongratulations
# 83 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakCongratulations2
# 84 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterRight
# 85 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 86 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 87 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakImDisappointedRival
# 88 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakImDisappointedRival2
# 89 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	closemessage
# 90 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 92 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay 20
# 93 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakPlayerComeWithMe
# 94 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakPlayerComeWithMe2
# 95 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	closemessage
# 96 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay 13
# 97 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakExit
# 98 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerExit
# 99 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 100 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	playse SE_EXIT
# 101 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerExit2
# 102 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 103 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 104 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	warp MAP_POKEMON_LEAGUE_HALL_OF_FAME, 5, 12
# 105 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitstate
# 106 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	releaseall
# 107 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	end
# 108 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 109 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_QuestLogEnd::
# 110 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 111 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	releaseall
# 112 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	end
# 113 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 114 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakPlayerComeWithMe::
# 115 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe
# 116 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 117 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 118 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakPlayerComeWithMe2::
# 119 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe2
# 120 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 121 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 122 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakImDisappointedRival::
# 123 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival
# 124 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 125 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 126 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakImDisappointedRival2::
# 127 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival2
# 128 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 129 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 130 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakCongratulations::
# 131 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakCongratulations
# 132 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 133 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 134 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakCongratulations2::
# 135 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakCongratulations2
# 136 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 137 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 138 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_PostBattle::
# 139 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_PostBattle
# 140 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 141 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 142 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_PostBattle2::
# 143 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_PostBattle2
# 144 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 145 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 146 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Battle::
# 147 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonLeague_ChampionsRoom_EventScript_BattleSquirtle
# 148 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonLeague_ChampionsRoom_EventScript_BattleBulbasaur
# 149 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonLeague_ChampionsRoom_EventScript_BattleCharmander
# 150 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 151 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 152 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Rematch::
# 153 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonLeague_ChampionsRoom_EventScript_RematchSquirtle
# 154 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonLeague_ChampionsRoom_EventScript_RematchBulbasaur
# 155 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonLeague_ChampionsRoom_EventScript_RematchCharmander
# 156 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 157 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 158 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Intro::
# 159 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_Intro
# 160 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 161 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 162 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchIntro::
# 163 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_RematchIntro
# 164 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 165 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 166 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleSquirtle::
# 167 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat
# 168 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 169 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 170 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleBulbasaur::
# 171 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat
# 172 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 173 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 174 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleCharmander::
# 175 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat
# 176 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 177 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 178 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchSquirtle::
# 179 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat2
# 180 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 181 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 182 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchBulbasaur::
# 183 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat2
# 184 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 185 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 186 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchCharmander::
# 187 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat2
# 188 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 189 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 190 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerEnter::
# 191 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 192 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 193 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 194 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 195 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 196 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 197 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 198 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 199 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 200 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 201 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 202 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 203 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerExit::
# 204 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 205 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_left
# 206 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 207 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 208 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 209 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_right
# 210 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 211 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 212 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 213 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerExit2::
# 214 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 215 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 216 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_8
# 217 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	set_invisible
# 218 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 219 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 220 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerWatchOakEnter::
# 221 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_8
# 222 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 223 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 224 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 225 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 226 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 227 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 228 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 229 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 230 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 231 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 232 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 233 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakEnter::
# 234 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 235 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 236 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 237 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 238 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 239 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 240 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 241 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_left
# 242 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 243 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 244 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 245 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 246 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 247 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 248 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakExit::
# 249 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 250 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 251 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_right
# 252 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 253 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 254 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 255 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 256 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_8
# 257 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	set_invisible
# 258 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 259 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 260 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_RivalWatchOakEnter::
# 261 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 262 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 263 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 264 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 265 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 266 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 267 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 268 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 269 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 270 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 271 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
