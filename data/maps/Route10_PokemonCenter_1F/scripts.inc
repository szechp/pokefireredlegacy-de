# 1 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
.equ REQUIRED_OWNED_MONS, 20
# 3 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_OnTransition
# 6 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_OnTransition::
# 10 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
# 11 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_ROUTE10
# 12 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	lock
# 16 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	faceplayer
# 17 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, Route10_PokemonCenter_1F_BattleNurse
# 18 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 19 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

<<<<<<< Updated upstream
Route10_PokemonCenter_1F_EventScript_FatMan::
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_EventScript_Gentleman::
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_EventScript_Youngster::
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_EventScript_Aide::
	lock
	faceplayer
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
	goto_if_set FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE, Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone
	msgbox Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetPokedexCount
	buffernumberstring STR_VAR_3, VAR_0x8006
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
	goto_if_lt VAR_0x8006, REQUIRED_OWNED_MONS, Aide_EventScript_HaventCaughtEnough
	msgbox Route10_PokemonCenter_1F_Text_GreatHereYouGo
	checkitemspace ITEM_HM06
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
	giveitem_msg Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide, ITEM_HM06
	setflag FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
	release
	end

Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone::
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
	release
	end

Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo::
	buffernumberstring STR_VAR_1, REQUIRED_OWNED_MONS
	bufferitemname STR_VAR_2, ITEM_HM06
=======
# 22 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_BattleNurse::
# 23 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_NURSE_JOY, Route10_PokemonCenter_1F_EventScript_RematchNurse
# 24 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_Nurse, MSGBOX_YESNO
# 25 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route10_PokemonCenter_1F_EventScript_NoNurse
# 26 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_NURSE_JOY, Route10_PokemonCenter_1F_Text_YesNurse, Route10_PokemonCenter_1F_Text_NurseDefeat, Route10_PokemonCenter_1F_EventScript_PostNurse, NO_MUSIC
# 27 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 28 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_PostNurse::
# 31 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NursePostBattle
# 32 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DEFEATED_NURSE_JOY
# 33 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_NURSE_JOY
# 34 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 35 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_NoNurse::
# 37 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NoNurse
# 38 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 39 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_RematchNurse::
# 41 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_RematchNurse, MSGBOX_YESNO
# 42 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route10_PokemonCenter_1F_EventScript_NoNurse
# 43 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_NURSE_JOY, Route10_PokemonCenter_1F_Text_YesNurse, Route10_PokemonCenter_1F_Text_RematchNurseDefeat, Route10_PokemonCenter_1F_EventScript_PostRematchNurse, NO_MUSIC
# 44 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return	
# 45 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_PostRematchNurse::
# 47 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_PostRematchNurse
# 48 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_NURSE_JOY
# 49 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 50 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_FatMan::
# 53 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
# 54 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 55 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Gentleman::
# 57 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
# 58 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 59 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Youngster::
# 61 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
# 62 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 63 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide::
# 65 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	lock
# 66 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	faceplayer
# 67 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 68 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE, Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone
# 69 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons, MSGBOX_YESNO
# 70 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 71 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 72 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 73 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 74 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 75 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_lt VAR_0x8006, REQUIRED_OWNED_MONS, Aide_EventScript_HaventCaughtEnough
# 76 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GreatHereYouGo
# 77 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	checkitemspace ITEM_HM06
# 78 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 79 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	giveitem_msg Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide, ITEM_HM06
# 80 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setflag FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
# 81 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
# 82 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
# 83 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 84 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 85 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone::
# 86 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
# 87 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
# 88 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 89 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 90 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo::
# 91 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_OWNED_MONS
# 92 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HM06
# 93 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
>>>>>>> Stashed changes
	return
