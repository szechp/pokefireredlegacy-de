# 1 "data/maps/PokemonMansion_2F/scripts.pory"

# 2 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_MapScripts::
# 3 "data/maps/PokemonMansion_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_OnLoad
# 4 "data/maps/PokemonMansion_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonMansion_2F_Transition
# 5 "data/maps/PokemonMansion_2F/scripts.pory"
	.byte 0
# 6 "data/maps/PokemonMansion_2F/scripts.pory"

# 7 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_OnLoad::
# 8 "data/maps/PokemonMansion_2F/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_2F
# 9 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 10 "data/maps/PokemonMansion_2F/scripts.pory"

# 11 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_Transition::
# 12 "data/maps/PokemonMansion_2F/scripts.pory"
	special MewStuff
# 13 "data/maps/PokemonMansion_2F/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, PokemonMansion_2F_ShowOak
# 14 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 15 "data/maps/PokemonMansion_2F/scripts.pory"

# 16 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_ShowOak::
# 17 "data/maps/PokemonMansion_2F/scripts.pory"
	clearflag FLAG_HIDE_OAK2
# 18 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 19 "data/maps/PokemonMansion_2F/scripts.pory"

# 20 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_Statue::
# 21 "data/maps/PokemonMansion_2F/scripts.pory"
	lockall
# 22 "data/maps/PokemonMansion_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 23 "data/maps/PokemonMansion_2F/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 24 "data/maps/PokemonMansion_2F/scripts.pory"
	playse SE_UNLOCK
# 25 "data/maps/PokemonMansion_2F/scripts.pory"
	special DrawWholeMapView
# 26 "data/maps/PokemonMansion_2F/scripts.pory"
	waitse
# 27 "data/maps/PokemonMansion_2F/scripts.pory"
	releaseall
# 28 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 29 "data/maps/PokemonMansion_2F/scripts.pory"

# 30 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_DiaryJuly5th::
# 31 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle, MSGBOX_SIGN
# 32 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 33 "data/maps/PokemonMansion_2F/scripts.pory"

# 34 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_DiaryJuly10th::
# 35 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_ChristenedDiscoveredMonMew, MSGBOX_SIGN
# 36 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 37 "data/maps/PokemonMansion_2F/scripts.pory"

# 38 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_Arnie::
# 39 "data/maps/PokemonMansion_2F/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_ARNIE, PokemonMansion_1F_Text_ArnieIntro, PokemonMansion_1F_Text_ArnieDefeat
# 40 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_ArniePostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 42 "data/maps/PokemonMansion_2F/scripts.pory"

# 43 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_Oak::
# 44 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_Oak, MSGBOX_YESNO
# 45 "data/maps/PokemonMansion_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PokemonMansion_2F_EventScript_NoOak
# 46 "data/maps/PokemonMansion_2F/scripts.pory"
	trainerbattle_single TRAINER_OAK2, PokemonMansion_1F_Text_YesOak, PokemonMansion_1F_Text_OakDefeat, PokemonMansion_2F_EventScript_PostOak, NO_MUSIC
# 47 "data/maps/PokemonMansion_2F/scripts.pory"
	release
# 48 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 49 "data/maps/PokemonMansion_2F/scripts.pory"

# 50 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_PostOak::
# 51 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_OakPostBattle
# 52 "data/maps/PokemonMansion_2F/scripts.pory"
	setflag FLAG_OAK2_DEFEATED
# 53 "data/maps/PokemonMansion_2F/scripts.pory"
	clearflag FLAG_HIDE_MEW
# 54 "data/maps/PokemonMansion_2F/scripts.pory"
	clearflag FLAG_HIDE_EASTER
# 55 "data/maps/PokemonMansion_2F/scripts.pory"
	setflag FLAG_HIDE_OAK2
# 56 "data/maps/PokemonMansion_2F/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 57 "data/maps/PokemonMansion_2F/scripts.pory"
	removeobject 5
# 58 "data/maps/PokemonMansion_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/PokemonMansion_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 60 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_Mew
# 61 "data/maps/PokemonMansion_2F/scripts.pory"
	release
# 62 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 63 "data/maps/PokemonMansion_2F/scripts.pory"

# 64 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_NoOak::
# 65 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_NoOak
# 66 "data/maps/PokemonMansion_2F/scripts.pory"
	release
# 67 "data/maps/PokemonMansion_2F/scripts.pory"
	end
