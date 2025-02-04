# 1 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 2 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_MapScripts::
# 3 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	.byte 0
# 4 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 5 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_Clair::
# 6 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_set FLAG_CLAIR_DEFEATED, TwoIsland_CapeBrink_EventScript_RematchClair
# 7 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_Clair, MSGBOX_YESNO
# 8 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoClair
# 9 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CLAIR, TwoIsland_CapeBrink_Text_YesClair, TwoIsland_CapeBrink_Text_ClairDefeat, TwoIsland_CapeBrink_EventScript_PostClair, NO_MUSIC
# 10 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 11 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 12 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 13 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostClair::
# 14 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_ClairPostBattle
# 15 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	setflag FLAG_CLAIR_DEFEATED
# 16 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 17 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 18 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 19 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_CantRematchClair::
# 20 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_ClairPostBattle
# 21 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 22 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 23 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 24 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_NoClair::
# 25 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_NoClair
# 26 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 27 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 28 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 29 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_RematchClair::
# 30 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchClair, MSGBOX_YESNO
# 31 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoClair
# 32 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CLAIR, TwoIsland_CapeBrink_Text_YesRematchClair, TwoIsland_CapeBrink_Text_RematchClairDefeat, TwoIsland_CapeBrink_EventScript_PostRematchClair, NO_MUSIC
# 33 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 34 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 35 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 36 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostRematchClair::
# 37 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchClairDefeat
# 38 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CLAIR
# 39 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 40 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 41 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 42 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_Caseno::
# 43 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_set FLAG_CASENO_DEFEATED, TwoIsland_CapeBrink_EventScript_RematchCaseno
# 44 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_Caseno, MSGBOX_YESNO
# 45 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoCaseno
# 46 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CASENO, TwoIsland_CapeBrink_Text_YesCaseno, TwoIsland_CapeBrink_Text_CasenoDefeat, TwoIsland_CapeBrink_EventScript_PostCaseno, NO_MUSIC
# 47 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 48 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 49 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 50 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostCaseno::
# 51 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_CasenoPostBattle
# 52 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	setflag FLAG_CASENO_DEFEATED
# 53 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 54 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 55 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 56 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_CantRematchCaseno::
# 57 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_CasenoPostBattle
# 58 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 59 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 60 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 61 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_NoCaseno::
# 62 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_NoCaseno
# 63 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 64 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 65 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 66 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_RematchCaseno::
# 67 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchCaseno, MSGBOX_YESNO
# 68 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoCaseno
# 69 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CASENO, TwoIsland_CapeBrink_Text_YesRematchCaseno, TwoIsland_CapeBrink_Text_RematchCasenoDefeat, TwoIsland_CapeBrink_EventScript_PostRematchCaseno, NO_MUSIC
# 70 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 71 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 72 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 73 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostRematchCaseno::
# 74 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchCasenoDefeat
# 75 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CASENO
# 76 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 77 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
