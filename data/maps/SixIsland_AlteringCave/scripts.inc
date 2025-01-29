# 1 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 2 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_MapScripts::
# 3 "data/maps/SixIsland_AlteringCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_AlteringCave_OnTransition
# 4 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.byte 0
# 5 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 6 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_OnTransition::
# 7 "data/maps/SixIsland_AlteringCave/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_ALTERING_CAVE
# 8 "data/maps/SixIsland_AlteringCave/scripts.pory"
	call SixIsland_OutcastIsland_UpdateAlteringCaveMewtwo
# 9 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 10 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 11 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_Spike::
# 12 "data/maps/SixIsland_AlteringCave/scripts.pory"
	goto_if_set FLAG_GET_AURORA, SixIsland_AlteringCave_EventScript_RematchSpike
# 13 "data/maps/SixIsland_AlteringCave/scripts.pory"
	goto_if_set FLAG_SPIKE_DEFEATED, SixIsland_AlteringCave_EventScript_CantRematchSpike
# 14 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_Spike, MSGBOX_YESNO
# 15 "data/maps/SixIsland_AlteringCave/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_AlteringCave_EventScript_NoSpike
# 16 "data/maps/SixIsland_AlteringCave/scripts.pory"
	trainerbattle_single TRAINER_SPIKE, SixIsland_AlteringCave_Text_YesSpike, SixIsland_AlteringCave_Text_SpikeDefeat, SixIsland_AlteringCave_EventScript_PostSpike, NO_MUSIC
# 17 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 18 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 19 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 20 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_PostSpike::
# 21 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_SpikePostBattle
# 22 "data/maps/SixIsland_AlteringCave/scripts.pory"
	setflag FLAG_SPIKE_DEFEATED
# 23 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 24 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 25 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 26 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_CantRematchSpike::
# 27 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_SpikePostBattle
# 28 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 29 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 30 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 31 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_NoSpike::
# 32 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_NoSpike
# 33 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 34 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 35 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 36 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_RematchSpike::
# 37 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_RematchSpike, MSGBOX_YESNO
# 38 "data/maps/SixIsland_AlteringCave/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_AlteringCave_EventScript_NoSpike
# 39 "data/maps/SixIsland_AlteringCave/scripts.pory"
	trainerbattle_single TRAINER_SPIKE, SixIsland_AlteringCave_Text_YesRematchSpike, SixIsland_AlteringCave_Text_RematchSpikeDefeat, SixIsland_AlteringCave_EventScript_PostRematchSpike, NO_MUSIC
# 40 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 41 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 42 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 43 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_PostRematchSpike::
# 44 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_RematchSpikeDefeat
# 45 "data/maps/SixIsland_AlteringCave/scripts.pory"
	cleartrainerflag TRAINER_SPIKE
# 46 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 47 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
