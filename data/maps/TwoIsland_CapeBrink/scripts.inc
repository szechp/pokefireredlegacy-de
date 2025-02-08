# 1 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 2 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_MapScripts::
# 3 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	.byte 0
# 4 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 5 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_Clair::
# 6 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	lock
# 7 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	faceplayer
# 8 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_set FLAG_CLAIR_DEFEATED, TwoIsland_CapeBrink_EventScript_RematchClair
# 9 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_Clair, MSGBOX_YESNO
# 10 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoClair
# 11 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CLAIR, TwoIsland_CapeBrink_Text_YesClair, TwoIsland_CapeBrink_Text_ClairDefeat, TwoIsland_CapeBrink_EventScript_PostClair, NO_MUSIC
# 12 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 13 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 14 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 15 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostClair::
# 16 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_ClairPostBattle
# 17 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	setflag FLAG_CLAIR_DEFEATED
# 18 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 19 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 20 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 21 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_CantRematchClair::
# 22 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_ClairPostBattle
# 23 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 24 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 25 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 26 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_NoClair::
# 27 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_NoClair
# 28 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 29 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 30 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 31 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_RematchClair::
# 32 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchClair, MSGBOX_YESNO
# 33 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoClair
# 34 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CLAIR, TwoIsland_CapeBrink_Text_YesRematchClair, TwoIsland_CapeBrink_Text_RematchClairDefeat, TwoIsland_CapeBrink_EventScript_PostRematchClair, NO_MUSIC
# 35 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 36 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 37 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 38 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostRematchClair::
# 39 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchClairDefeat
# 40 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CLAIR
# 41 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 42 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 43 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 44 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_Caseno::
# 45 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	lock
# 46 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	faceplayer
# 47 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_set FLAG_CASENO_DEFEATED, TwoIsland_CapeBrink_EventScript_RematchCaseno
# 48 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_Caseno, MSGBOX_YESNO
# 49 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoCaseno
# 50 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CASENO, TwoIsland_CapeBrink_Text_YesCaseno, TwoIsland_CapeBrink_Text_CasenoDefeat, TwoIsland_CapeBrink_EventScript_PostCaseno, NO_MUSIC
# 51 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 52 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 53 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 54 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostCaseno::
# 55 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_CasenoPostBattle
# 56 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	setflag FLAG_CASENO_DEFEATED
# 57 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 58 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 59 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 60 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_CantRematchCaseno::
# 61 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_CasenoPostBattle
# 62 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 63 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 64 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 65 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_NoCaseno::
# 66 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_NoCaseno
# 67 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 68 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 69 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 70 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_RematchCaseno::
# 71 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchCaseno, MSGBOX_YESNO
# 72 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoCaseno
# 73 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CASENO, TwoIsland_CapeBrink_Text_YesRematchCaseno, TwoIsland_CapeBrink_Text_RematchCasenoDefeat, TwoIsland_CapeBrink_EventScript_PostRematchCaseno, NO_MUSIC
# 74 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 75 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 76 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 77 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostRematchCaseno::
# 78 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchCasenoDefeat
# 79 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CASENO
# 80 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 81 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
