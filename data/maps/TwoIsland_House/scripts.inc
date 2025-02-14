# 1 "data/maps/TwoIsland_House/scripts.pory"

# 2 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_MapScripts::
# 3 "data/maps/TwoIsland_House/scripts.pory"
	.byte 0
# 4 "data/maps/TwoIsland_House/scripts.pory"

# 5 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_TMGUYScript::
# 6 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 7 "data/maps/TwoIsland_House/scripts.pory"
	lock
# 8 "data/maps/TwoIsland_House/scripts.pory"
	faceplayer
# 9 "data/maps/TwoIsland_House/scripts.pory"
	message TwoIsland_House_Text_TmGuy
# 10 "data/maps/TwoIsland_House/scripts.pory"
	waitmessage
# 11 "data/maps/TwoIsland_House/scripts.pory"
	pokemart TwoIsland_TMS
# 12 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Text_PleaseComeAgain
# 13 "data/maps/TwoIsland_House/scripts.pory"
	release
# 14 "data/maps/TwoIsland_House/scripts.pory"
	end
# 15 "data/maps/TwoIsland_House/scripts.pory"

# 16 "data/maps/TwoIsland_House/scripts.pory"
	.align 2
# 17 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_TMS::	
# 18 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM03
# 19 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM05
# 20 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM03
# 21 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM09
# 22 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM12
# 23 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM15
# 24 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM16
# 25 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM17
# 26 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM20
# 27 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM21
# 28 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM27
# 29 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM33
# 30 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM34
# 31 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM39
# 32 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM40
# 33 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM41
# 34 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM42
# 35 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM44
# 36 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM47
# 37 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_NONE
# 38 "data/maps/TwoIsland_House/scripts.pory"
	release
# 39 "data/maps/TwoIsland_House/scripts.pory"
	end
# 40 "data/maps/TwoIsland_House/scripts.pory"

# 41 "data/maps/TwoIsland_House/scripts.pory"

# 42 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_STONEGUYScript::
# 43 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 44 "data/maps/TwoIsland_House/scripts.pory"
	lock
# 45 "data/maps/TwoIsland_House/scripts.pory"
	faceplayer
# 46 "data/maps/TwoIsland_House/scripts.pory"
	message TwoIsland_House_Text_StoneGuy
# 47 "data/maps/TwoIsland_House/scripts.pory"
	waitmessage
# 48 "data/maps/TwoIsland_House/scripts.pory"
	pokemart TwoIsland_STONES
# 49 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Text_PleaseComeAgain
# 50 "data/maps/TwoIsland_House/scripts.pory"
	release
# 51 "data/maps/TwoIsland_House/scripts.pory"
	end
# 52 "data/maps/TwoIsland_House/scripts.pory"

# 53 "data/maps/TwoIsland_House/scripts.pory"
	.align 2
# 54 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_STONES::	
# 55 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 56 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_UP_GRADE
# 57 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 58 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_METAL_COAT
# 59 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 60 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_MOON_STONE
# 61 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_SUN_STONE
# 62 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_NONE
# 63 "data/maps/TwoIsland_House/scripts.pory"
	release
# 64 "data/maps/TwoIsland_House/scripts.pory"
	end
