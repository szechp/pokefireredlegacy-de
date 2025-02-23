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
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, TwoIsland_House_TMGUYScript2
# 10 "data/maps/TwoIsland_House/scripts.pory"
	message TwoIsland_House_Text_TmGuy
# 11 "data/maps/TwoIsland_House/scripts.pory"
	waitmessage
# 12 "data/maps/TwoIsland_House/scripts.pory"
	pokemart TwoIsland_TMS
# 13 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Text_PleaseComeAgain
# 14 "data/maps/TwoIsland_House/scripts.pory"
	release
# 15 "data/maps/TwoIsland_House/scripts.pory"
	end
# 16 "data/maps/TwoIsland_House/scripts.pory"

# 17 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_TMGUYScript2::
# 18 "data/maps/TwoIsland_House/scripts.pory"
	message TwoIsland_House_Text_TmGuy2
# 19 "data/maps/TwoIsland_House/scripts.pory"
	pokemart TwoIsland_TMS2
# 20 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Text_PleaseComeAgain
# 21 "data/maps/TwoIsland_House/scripts.pory"
	release
# 22 "data/maps/TwoIsland_House/scripts.pory"
	end
# 23 "data/maps/TwoIsland_House/scripts.pory"

# 24 "data/maps/TwoIsland_House/scripts.pory"
	.align 2
# 25 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_TMS::	
# 26 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM03
# 27 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM05
# 28 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM03
# 29 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM09
# 30 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM12
# 31 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM15
# 32 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM16
# 33 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM17
# 34 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM20
# 35 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM21
# 36 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM27
# 37 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM33
# 38 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM34
# 39 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM39
# 40 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM40
# 41 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM41
# 42 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM42
# 43 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM44
# 44 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM47
# 45 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_NONE
# 46 "data/maps/TwoIsland_House/scripts.pory"
	release
# 47 "data/maps/TwoIsland_House/scripts.pory"
	end
# 48 "data/maps/TwoIsland_House/scripts.pory"

# 49 "data/maps/TwoIsland_House/scripts.pory"

# 50 "data/maps/TwoIsland_House/scripts.pory"

# 51 "data/maps/TwoIsland_House/scripts.pory"
	.align 2
# 52 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_TMS2::
# 53 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM01
# 54 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM02
# 55 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM03
# 56 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM05
# 57 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM06
# 58 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM07
# 59 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM08
# 60 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM09
# 61 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM10
# 62 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM11
# 63 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM12
# 64 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM13
# 65 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM14
# 66 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM15
# 67 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM16
# 68 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM17
# 69 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM18
# 70 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM19
# 71 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM20
# 72 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM21
# 73 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM22
# 74 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM23
# 75 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM24
# 76 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM25
# 77 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM26
# 78 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM27
# 79 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM28
# 80 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM29
# 81 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM30
# 82 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM31
# 83 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM32
# 84 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM33
# 85 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM34
# 86 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM35
# 87 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM36
# 88 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM37
# 89 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM38
# 90 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM39
# 91 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM40
# 92 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM41
# 93 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM42
# 94 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM43
# 95 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM44
# 96 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM45
# 97 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM46
# 98 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM47
# 99 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM48
# 100 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM49
# 101 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_TM50
# 102 "data/maps/TwoIsland_House/scripts.pory"
	.2byte ITEM_NONE
# 103 "data/maps/TwoIsland_House/scripts.pory"
	release
# 104 "data/maps/TwoIsland_House/scripts.pory"
	end
