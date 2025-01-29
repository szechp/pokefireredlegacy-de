# 1 "data/maps/ThreeIsland_House1/scripts.pory"

# 2 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_MapScripts::
# 3 "data/maps/ThreeIsland_House1/scripts.pory"
	.byte 0
# 4 "data/maps/ThreeIsland_House1/scripts.pory"

# 5 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_EventScript_Lostelle::
# 6 "data/maps/ThreeIsland_House1/scripts.pory"
	lock
# 7 "data/maps/ThreeIsland_House1/scripts.pory"
	faceplayer
# 8 "data/maps/ThreeIsland_House1/scripts.pory"
	special BufferBigGuyOrBigGirlString
# 9 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox ThreeIsland_House1_Text_YoureAlwaysSoCool
# 10 "data/maps/ThreeIsland_House1/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 11 "data/maps/ThreeIsland_House1/scripts.pory"
	waitmessage
# 12 "data/maps/ThreeIsland_House1/scripts.pory"
	pokemart ThreeIsland_House1_MartBerries
# 13 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox Text_PleaseComeAgain
# 14 "data/maps/ThreeIsland_House1/scripts.pory"
	release
# 15 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 16 "data/maps/ThreeIsland_House1/scripts.pory"

# 17 "data/maps/ThreeIsland_House1/scripts.pory"
	.align 2
# 18 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_MartBerries::
# 19 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 20 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 21 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 22 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 23 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 24 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 25 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 26 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 27 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 28 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 29 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 30 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 31 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 32 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 33 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 34 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 35 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_NONE
# 36 "data/maps/ThreeIsland_House1/scripts.pory"
	release
# 37 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 38 "data/maps/ThreeIsland_House1/scripts.pory"

# 39 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_EventScript_DisplayCase::
# 40 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox ThreeIsland_House1_Text_RareRocksGemsDisplayed, MSGBOX_SIGN
# 41 "data/maps/ThreeIsland_House1/scripts.pory"
	end
