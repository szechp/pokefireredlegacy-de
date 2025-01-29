# 1 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 2 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_MapScripts::
# 3 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	.byte 0
# 4 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 5 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_Boy::
# 6 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_GoodThingsWashUpOnBeach, MSGBOX_NPC
# 7 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 8 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 9 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_Jasmine::
# 10 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	goto_if_set FLAG_GET_MYSTIC, OneIsland_TreasureBeach_EventScript_RematchJasmine
# 11 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	goto_if_set FLAG_JASMINE_DEFEATED, OneIsland_TreasureBeach_EventScript_CantRematchJasmine
# 12 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_Jasmine, MSGBOX_YESNO
# 13 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_TreasureBeach_EventScript_NoJasmine
# 14 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, OneIsland_TreasureBeach_Text_YesJasmine, OneIsland_TreasureBeach_Text_JasmineDefeat, OneIsland_TreasureBeach_EventScript_PostJasmine, NO_MUSIC
# 15 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 16 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 17 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 18 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_PostJasmine::
# 19 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_JasminePostBattle
# 20 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	setflag FLAG_JASMINE_DEFEATED
# 21 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 22 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 23 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 24 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_CantRematchJasmine::
# 25 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_JasminePostBattle
# 26 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 27 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 28 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 29 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_NoJasmine::
# 30 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_NoJasmine
# 31 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 32 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 33 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 34 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_RematchJasmine::
# 35 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_RematchJasmine, MSGBOX_YESNO
# 36 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_TreasureBeach_EventScript_NoJasmine
# 37 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, OneIsland_TreasureBeach_Text_YesRematchJasmine, OneIsland_TreasureBeach_Text_RematchJasmineDefeat, OneIsland_TreasureBeach_EventScript_PostRematchJasmine, NO_MUSIC
# 38 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 39 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 40 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 41 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_PostRematchJasmine::
# 42 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_RematchJasmineDefeat
# 43 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	cleartrainerflag TRAINER_JASMINE
# 44 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 45 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
