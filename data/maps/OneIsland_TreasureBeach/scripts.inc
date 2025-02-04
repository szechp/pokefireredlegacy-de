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
	goto_if_set FLAG_JASMINE_DEFEATED, OneIsland_TreasureBeach_EventScript_RematchJasmine
# 11 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_Jasmine, MSGBOX_YESNO
# 12 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_TreasureBeach_EventScript_NoJasmine
# 13 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, OneIsland_TreasureBeach_Text_YesJasmine, OneIsland_TreasureBeach_Text_JasmineDefeat, OneIsland_TreasureBeach_EventScript_PostJasmine, NO_MUSIC
# 14 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 15 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 16 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 17 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_PostJasmine::
# 18 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_JasminePostBattle
# 19 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	setflag FLAG_JASMINE_DEFEATED
# 20 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 21 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 22 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 23 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_CantRematchJasmine::
# 24 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_JasminePostBattle
# 25 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 26 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 27 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 28 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_NoJasmine::
# 29 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_NoJasmine
# 30 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 31 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 32 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 33 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_RematchJasmine::
# 34 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_RematchJasmine, MSGBOX_YESNO
# 35 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_TreasureBeach_EventScript_NoJasmine
# 36 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, OneIsland_TreasureBeach_Text_YesRematchJasmine, OneIsland_TreasureBeach_Text_RematchJasmineDefeat, OneIsland_TreasureBeach_EventScript_PostRematchJasmine, NO_MUSIC
# 37 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 38 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 39 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 40 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_PostRematchJasmine::
# 41 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_RematchJasmineDefeat
# 42 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	cleartrainerflag TRAINER_JASMINE
# 43 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 44 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
