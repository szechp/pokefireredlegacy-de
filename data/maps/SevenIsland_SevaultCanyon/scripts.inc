# 1 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"

# 2 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
SevenIsland_SevaultCanyon_MapScripts::
# 3 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	.byte 0
# 4 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"

# 5 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
SevenIsland_SevaultCanyon_EventScript_RouteSign::
# 6 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_Text_RouteSign, MSGBOX_SIGN
# 7 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	end
# 8 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"

# 9 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
SevenIsland_SevaultCanyon_EventScript_Chuck::
# 10 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	goto_if_set FLAG_GET_MYSTIC, SevenIsland_SevaultCanyon_EventScript_RematchChuck
# 11 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	goto_if_set FLAG_CHUCK_DEFEATED, SevenIsland_SevaultCanyon_EventScript_CantRematchChuck
# 12 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_Text_Chuck, MSGBOX_YESNO
# 13 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_SevaultCanyon_EventScript_NoChuck
# 14 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	trainerbattle_single TRAINER_CHUCK, SevenIsland_SevaultCanyon_Text_YesChuck, SevenIsland_SevaultCanyon_Text_ChuckDefeat, SevenIsland_SevaultCanyon_EventScript_PostChuck, NO_MUSIC
# 15 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	release
# 16 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	end
# 17 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"

# 18 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
SevenIsland_SevaultCanyon_EventScript_PostChuck::
# 19 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_Text_ChuckPostBattle
# 20 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	setflag FLAG_CHUCK_DEFEATED
# 21 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	release
# 22 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	end
# 23 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"

# 24 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
SevenIsland_SevaultCanyon_EventScript_CantRematchChuck::
# 25 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_Text_ChuckPostBattle
# 26 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	release
# 27 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	end
# 28 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"

# 29 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
SevenIsland_SevaultCanyon_EventScript_NoChuck::
# 30 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_Text_NoChuck
# 31 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	release
# 32 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	end
# 33 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"

# 34 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
SevenIsland_SevaultCanyon_EventScript_RematchChuck::
# 35 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_Text_RematchChuck, MSGBOX_YESNO
# 36 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_SevaultCanyon_EventScript_NoChuck
# 37 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	trainerbattle_single TRAINER_CHUCK, SevenIsland_SevaultCanyon_Text_YesRematchChuck, SevenIsland_SevaultCanyon_Text_RematchChuckDefeat, SevenIsland_SevaultCanyon_EventScript_PostRematchChuck, NO_MUSIC
# 38 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	release
# 39 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	end
# 40 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"

# 41 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
SevenIsland_SevaultCanyon_EventScript_PostRematchChuck::
# 42 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_Text_RematchChuckDefeat
# 43 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	cleartrainerflag TRAINER_CHUCK
# 44 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	release
# 45 "data/maps/SevenIsland_SevaultCanyon/scripts.pory"
	end
