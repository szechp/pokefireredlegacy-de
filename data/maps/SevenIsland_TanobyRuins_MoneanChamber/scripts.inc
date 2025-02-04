# 1 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"

# 2 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
SevenIsland_TanobyRuins_MoneanChamber_MapScripts::
# 3 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TanobyRuins_MoneanChamber_OnTransition
# 4 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	.byte 0
# 5 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"

# 6 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
SevenIsland_TanobyRuins_MoneanChamber_OnTransition::
# 7 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER
# 8 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	call EventScript_TryDarkenRuins
# 9 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	end
# 10 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"

# 11 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
SevenIsland_TanobyRuins_MoneanChamber_EventScript_Armstrong::
# 12 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	goto_if_set FLAG_ARMSTRONG_DEFEATED, SevenIsland_TanobyRuins_MoneanChamber_EventScript_RematchArmstrong
# 13 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	msgbox SevenIsland_TanobyRuins_MoneanChamber_Text_Armstrong, MSGBOX_YESNO
# 14 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_TanobyRuins_MoneanChamber_EventScript_NoArmstrong
# 15 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	trainerbattle_single TRAINER_ARMSTRONG, SevenIsland_TanobyRuins_MoneanChamber_Text_YesArmstrong, SevenIsland_TanobyRuins_MoneanChamber_Text_ArmstrongDefeat, SevenIsland_TanobyRuins_MoneanChamber_EventScript_PostArmstrong, NO_MUSIC
# 16 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	release
# 17 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	end
# 18 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"

# 19 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
SevenIsland_TanobyRuins_MoneanChamber_EventScript_PostArmstrong::
# 20 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	msgbox SevenIsland_TanobyRuins_MoneanChamber_Text_ArmstrongPostBattle
# 21 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	setflag FLAG_ARMSTRONG_DEFEATED
# 22 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	release
# 23 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	end
# 24 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"

# 25 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
SevenIsland_TanobyRuins_MoneanChamber_EventScript_CantRematchArmstrong::
# 26 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	msgbox SevenIsland_TanobyRuins_MoneanChamber_Text_ArmstrongPostBattle
# 27 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	release
# 28 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	end
# 29 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"

# 30 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
SevenIsland_TanobyRuins_MoneanChamber_EventScript_NoArmstrong::
# 31 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	msgbox SevenIsland_TanobyRuins_MoneanChamber_Text_NoArmstrong
# 32 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	release
# 33 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	end
# 34 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"

# 35 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
SevenIsland_TanobyRuins_MoneanChamber_EventScript_RematchArmstrong::
# 36 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	msgbox SevenIsland_TanobyRuins_MoneanChamber_Text_RematchArmstrong, MSGBOX_YESNO
# 37 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_TanobyRuins_MoneanChamber_EventScript_NoArmstrong
# 38 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	trainerbattle_single TRAINER_ARMSTRONG, SevenIsland_TanobyRuins_MoneanChamber_Text_YesRematchArmstrong, SevenIsland_TanobyRuins_MoneanChamber_Text_RematchArmstrongDefeat, SevenIsland_TanobyRuins_MoneanChamber_EventScript_PostRematchArmstrong, NO_MUSIC
# 39 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	release
# 40 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	end
# 41 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"

# 42 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
SevenIsland_TanobyRuins_MoneanChamber_EventScript_PostRematchArmstrong::
# 43 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	msgbox SevenIsland_TanobyRuins_MoneanChamber_Text_RematchArmstrongDefeat
# 44 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	cleartrainerflag TRAINER_ARMSTRONG
# 45 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	release
# 46 "data/maps/SevenIsland_TanobyRuins_MoneanChamber/scripts.pory"
	end
