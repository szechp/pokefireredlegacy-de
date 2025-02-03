# 1 "data/maps/PokemonMansion_B1F/scripts.pory"

# 2 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_MapScripts::
# 3 "data/maps/PokemonMansion_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_B1F_OnLoad
# 4 "data/maps/PokemonMansion_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonMansion_B1F_OnTransition
# 5 "data/maps/PokemonMansion_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/PokemonMansion_B1F/scripts.pory"

# 7 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_OnLoad::
# 8 "data/maps/PokemonMansion_B1F/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_B1F
# 9 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 10 "data/maps/PokemonMansion_B1F/scripts.pory"

# 11 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_OnResume::
# 12 "data/maps/PokemonMansion_B1F/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, PokemonMansion_B1F_EventScript_TryRemoveMew
# 13 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 14 "data/maps/PokemonMansion_B1F/scripts.pory"

# 15 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_TryRemoveMew::
# 16 "data/maps/PokemonMansion_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 18 "data/maps/PokemonMansion_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 19 "data/maps/PokemonMansion_B1F/scripts.pory"
	return
# 20 "data/maps/PokemonMansion_B1F/scripts.pory"

# 21 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_OnTransition::
# 22 "data/maps/PokemonMansion_B1F/scripts.pory"
	special CheckGotAllItems
# 23 "data/maps/PokemonMansion_B1F/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, PokemonMansion_B1F_YesItem
# 24 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 25 "data/maps/PokemonMansion_B1F/scripts.pory"

# 26 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_YesItem::
# 27 "data/maps/PokemonMansion_B1F/scripts.pory"
	call_if_unset FLAG_FOUGHT_MEW, PokemonMansion_B1F_EventScript_ShowMew
# 28 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 29 "data/maps/PokemonMansion_B1F/scripts.pory"

# 30 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_ShowMew::
# 31 "data/maps/PokemonMansion_B1F/scripts.pory"
	clearflag FLAG_HIDE_MEW
# 32 "data/maps/PokemonMansion_B1F/scripts.pory"
	return
# 33 "data/maps/PokemonMansion_B1F/scripts.pory"

# 34 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_Mew::
# 35 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 36 "data/maps/PokemonMansion_B1F/scripts.pory"
	special QuestLog_CutRecording
# 37 "data/maps/PokemonMansion_B1F/scripts.pory"
	lock
# 38 "data/maps/PokemonMansion_B1F/scripts.pory"
	faceplayer
# 39 "data/maps/PokemonMansion_B1F/scripts.pory"
	setwildbattle SPECIES_MEW, 50 
# 40 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitse
# 41 "data/maps/PokemonMansion_B1F/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 42 "data/maps/PokemonMansion_B1F/scripts.pory"
	message Text_Gyaoo
# 43 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitmessage
# 44 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitmoncry
# 45 "data/maps/PokemonMansion_B1F/scripts.pory"
	delay 10
# 46 "data/maps/PokemonMansion_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 47 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitbuttonpress
# 48 "data/maps/PokemonMansion_B1F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 49 "data/maps/PokemonMansion_B1F/scripts.pory"
	special StartLegendaryBattle
# 50 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitstate
# 51 "data/maps/PokemonMansion_B1F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 52 "data/maps/PokemonMansion_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 53 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PokemonMansion_B1F_EventScript_DefeatedMew
# 54 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PokemonMansion_B1F_EventScript_RanFromMew
# 55 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PokemonMansion_B1F_EventScript_RanFromMew
# 56 "data/maps/PokemonMansion_B1F/scripts.pory"
	setflag FLAG_FOUGHT_MEW
# 57 "data/maps/PokemonMansion_B1F/scripts.pory"
	release
# 58 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 59 "data/maps/PokemonMansion_B1F/scripts.pory"

# 60 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_DefeatedMew::
# 61 "data/maps/PokemonMansion_B1F/scripts.pory"
	setflag FLAG_FOUGHT_MEW
# 62 "data/maps/PokemonMansion_B1F/scripts.pory"
	clearflag FLAG_SPAWN_MEW
# 63 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 64 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 65 "data/maps/PokemonMansion_B1F/scripts.pory"

# 66 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_RanFromMew::
# 67 "data/maps/PokemonMansion_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEW
# 68 "data/maps/PokemonMansion_B1F/scripts.pory"
	setflag FLAG_SPAWN_MEW
# 69 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto EventScript_MonFlewAway
# 70 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 71 "data/maps/PokemonMansion_B1F/scripts.pory"

# 72 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_Statue::
# 73 "data/maps/PokemonMansion_B1F/scripts.pory"
	lockall
# 74 "data/maps/PokemonMansion_B1F/scripts.pory"
	setvar VAR_0x8004, 3
# 75 "data/maps/PokemonMansion_B1F/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 76 "data/maps/PokemonMansion_B1F/scripts.pory"
	playse SE_UNLOCK
# 77 "data/maps/PokemonMansion_B1F/scripts.pory"
	special DrawWholeMapView
# 78 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitse
# 79 "data/maps/PokemonMansion_B1F/scripts.pory"
	releaseall
# 80 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 81 "data/maps/PokemonMansion_B1F/scripts.pory"

# 82 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_DiarySep1st::
# 83 "data/maps/PokemonMansion_B1F/scripts.pory"
	msgbox PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful, MSGBOX_SIGN
# 84 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 85 "data/maps/PokemonMansion_B1F/scripts.pory"

# 86 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_Lewis::
# 87 "data/maps/PokemonMansion_B1F/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_LEWIS, PokemonMansion_B1F_Text_LewisIntro, PokemonMansion_B1F_Text_LewisDefeat
# 88 "data/maps/PokemonMansion_B1F/scripts.pory"
	msgbox PokemonMansion_B1F_Text_LewisPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 90 "data/maps/PokemonMansion_B1F/scripts.pory"

# 91 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_Ivan::
# 92 "data/maps/PokemonMansion_B1F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_IVAN, PokemonMansion_B1F_Text_IvanIntro, PokemonMansion_B1F_Text_IvanDefeat
# 93 "data/maps/PokemonMansion_B1F/scripts.pory"
	msgbox PokemonMansion_B1F_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
