# 1 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 2 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_MapScripts::
# 3 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	.byte 0
# 4 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 5 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_BerryForestSign::
# 6 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_BerryForestAhead, MSGBOX_SIGN
# 7 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 8 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 9 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_BondBridgeSign::
# 10 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_BondBridgeSign, MSGBOX_SIGN
# 11 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 12 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 13 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_Morty::
# 14 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	goto_if_set FLAG_MORTY_DEFEATED, ThreeIsland_BondBridge_EventScript_RematchMorty
# 15 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_Morty, MSGBOX_YESNO
# 16 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_BondBridge_EventScript_NoMorty
# 17 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	trainerbattle_single TRAINER_MORTY, ThreeIsland_BondBridge_Text_YesMorty, ThreeIsland_BondBridge_Text_MortyDefeat, ThreeIsland_BondBridge_EventScript_PostMorty, NO_MUSIC
# 18 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	release
# 19 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 20 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 21 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_PostMorty::
# 22 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_MortyPostBattle
# 23 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	setflag FLAG_MORTY_DEFEATED
# 24 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	release
# 25 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 26 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 27 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_CantRematchMorty::
# 28 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_MortyPostBattle
# 29 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	release
# 30 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 31 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 32 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_NoMorty::
# 33 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_NoMorty
# 34 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	release
# 35 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 36 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 37 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_RematchMorty::
# 38 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_RematchMorty, MSGBOX_YESNO
# 39 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_BondBridge_EventScript_NoMorty
# 40 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	trainerbattle_single TRAINER_MORTY, ThreeIsland_BondBridge_Text_YesRematchMorty, ThreeIsland_BondBridge_Text_RematchMortyDefeat, ThreeIsland_BondBridge_EventScript_PostRematchMorty, NO_MUSIC
# 41 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	release
# 42 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 43 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 44 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_PostRematchMorty::
# 45 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_RematchMortyDefeat
# 46 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	cleartrainerflag TRAINER_MORTY
# 47 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	release
# 48 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
