# 1 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
.equ REQUIRED_OWNED_MONS, 20
# 3 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_OnTransition
# 6 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
# 10 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_ROUTE10
# 11 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	lock
# 15 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	faceplayer
# 16 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 17 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, Route10_PokemonCenter_1F_BattleNurse
# 18 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_BattleNurse::
# 22 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_BattleNurse
# 23 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	waitmessage
# 24 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 25 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_NURSE_JOY, Route10_PokemonCenter_1F_EventScript_RematchNurse
# 26 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_Nurse, MSGBOX_YESNO
# 27 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route10_PokemonCenter_1F_EventScript_NoNurse
# 28 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_NURSE_JOY, Route10_PokemonCenter_1F_Text_YesNurse, Route10_PokemonCenter_1F_Text_NurseDefeat, Route10_PokemonCenter_1F_EventScript_PostNurse, NO_MUSIC
# 29 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 30 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_PostNurse::
# 33 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NursePostBattle
# 34 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DEFEATED_NURSE_JOY
# 35 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_NURSE_JOY
# 36 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 37 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 38 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_NoNurse::
# 40 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NoNurse
# 41 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 42 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_RematchNurse::
# 44 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_RematchNurse, MSGBOX_YESNO
# 45 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route10_PokemonCenter_1F_EventScript_NoNurse
# 46 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	lock
# 47 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	faceplayer
# 48 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_NURSE_JOY, Route10_PokemonCenter_1F_Text_YesNurse, Route10_PokemonCenter_1F_Text_RematchNurseDefeat, Route10_PokemonCenter_1F_EventScript_PostRematchNurse, NO_MUSIC
# 49 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return	
# 50 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_PostRematchNurse::
# 52 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_PostRematchNurse
# 53 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_NURSE_JOY
# 54 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 55 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 56 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_FatMan::
# 59 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
# 60 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 61 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Gentleman::
# 63 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
# 64 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 65 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Youngster::
# 67 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
# 68 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 69 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 70 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide::
# 71 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	lock
# 72 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	faceplayer
# 73 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 74 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE, Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone
# 75 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons, MSGBOX_YESNO
# 76 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 77 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 78 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 79 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 80 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 81 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_lt VAR_0x8006, REQUIRED_OWNED_MONS, Aide_EventScript_HaventCaughtEnough
# 82 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GreatHereYouGo
# 83 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	checkitemspace ITEM_HM06
# 84 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 85 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	giveitem_msg Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide, ITEM_HM06
# 86 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setflag FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
# 87 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
# 88 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
# 89 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 90 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 91 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone::
# 92 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
# 93 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
# 94 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 95 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 96 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo::
# 97 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_OWNED_MONS
# 98 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HM06
# 99 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
