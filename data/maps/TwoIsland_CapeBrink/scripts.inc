# 1 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 2 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_MapScripts::
# 3 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	.byte 0
# 4 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 5 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_Clair::
# 6 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_set FLAG_GET_MYSTIC, TwoIsland_CapeBrink_EventScript_RematchClair
# 7 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_set FLAG_CLAIR_DEFEATED, TwoIsland_CapeBrink_EventScript_CantRematchClair
# 8 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_Clair, MSGBOX_YESNO
# 9 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoClair
# 10 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CLAIR, TwoIsland_CapeBrink_Text_YesClair, TwoIsland_CapeBrink_Text_ClairDefeat, TwoIsland_CapeBrink_EventScript_PostClair, NO_MUSIC
# 11 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 12 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 13 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 14 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostClair::
# 15 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_ClairPostBattle
# 16 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	setflag FLAG_CLAIR_DEFEATED
# 17 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 18 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 19 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 20 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_CantRematchClair::
# 21 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_ClairPostBattle
# 22 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 23 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 24 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 25 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_NoClair::
# 26 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_NoClair
# 27 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 28 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 29 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 30 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_RematchClair::
# 31 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchClair, MSGBOX_YESNO
# 32 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoClair
# 33 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CLAIR, TwoIsland_CapeBrink_Text_YesRematchClair, TwoIsland_CapeBrink_Text_RematchClairDefeat, TwoIsland_CapeBrink_EventScript_PostRematchClair, NO_MUSIC
# 34 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 35 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 36 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 37 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostRematchClair::
# 38 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchClairDefeat
# 39 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CLAIR
# 40 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 41 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 42 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 43 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_Caseno::
# 44 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_set FLAG_GET_AURORA, TwoIsland_CapeBrink_EventScript_RematchCaseno
# 45 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_set FLAG_CASENO_DEFEATED, TwoIsland_CapeBrink_EventScript_CantRematchCaseno
# 46 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_Caseno, MSGBOX_YESNO
# 47 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoCaseno
# 48 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CASENO, TwoIsland_CapeBrink_Text_YesCaseno, TwoIsland_CapeBrink_Text_CasenoDefeat, TwoIsland_CapeBrink_EventScript_PostCaseno, NO_MUSIC
# 49 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 50 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 51 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 52 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostCaseno::
# 53 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_CasenoPostBattle
# 54 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	setflag FLAG_CASENO_DEFEATED
# 55 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 56 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 57 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 58 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_CantRematchCaseno::
# 59 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_CasenoPostBattle
# 60 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 61 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 62 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 63 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_NoCaseno::
# 64 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_NoCaseno
# 65 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 66 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 67 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 68 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_RematchCaseno::
# 69 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchCaseno, MSGBOX_YESNO
# 70 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoCaseno
# 71 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CASENO, TwoIsland_CapeBrink_Text_YesRematchCaseno, TwoIsland_CapeBrink_Text_RematchCasenoDefeat, TwoIsland_CapeBrink_EventScript_PostRematchCaseno, NO_MUSIC
# 72 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 73 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 74 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 75 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostRematchCaseno::
# 76 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchCasenoDefeat
# 77 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CASENO
# 78 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 79 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
