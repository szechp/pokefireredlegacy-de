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
	call_if_unset FLAG_SHOPJOHTO, ThreeIsland_House1_Berry2
# 13 "data/maps/ThreeIsland_House1/scripts.pory"
	pokemart ThreeIsland_House1_MartBerries
# 14 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox Text_PleaseComeAgain
# 15 "data/maps/ThreeIsland_House1/scripts.pory"
	release
# 16 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 17 "data/maps/ThreeIsland_House1/scripts.pory"

# 18 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_Berry2::
# 19 "data/maps/ThreeIsland_House1/scripts.pory"
	pokemart ThreeIsland_House1_MartBerries2
# 20 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox Text_PleaseComeAgain
# 21 "data/maps/ThreeIsland_House1/scripts.pory"
	release
# 22 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 23 "data/maps/ThreeIsland_House1/scripts.pory"

# 24 "data/maps/ThreeIsland_House1/scripts.pory"
	.align 2
# 25 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_MartBerries::
# 26 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 27 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 28 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 29 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 30 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 31 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 32 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 33 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 34 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 35 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 36 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 37 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 38 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 39 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 40 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 41 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 42 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_NONE
# 43 "data/maps/ThreeIsland_House1/scripts.pory"
	release
# 44 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 45 "data/maps/ThreeIsland_House1/scripts.pory"

# 46 "data/maps/ThreeIsland_House1/scripts.pory"
	.align 2
# 47 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_MartBerries2::
# 48 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 49 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 50 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 51 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 52 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 53 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 54 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 55 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 56 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 57 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 58 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 59 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 60 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 61 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 62 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 63 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 64 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 65 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 66 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 67 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 68 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 69 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 70 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 71 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_NONE
# 72 "data/maps/ThreeIsland_House1/scripts.pory"
	release
# 73 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 74 "data/maps/ThreeIsland_House1/scripts.pory"

# 75 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_EventScript_DisplayCase::
# 76 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox ThreeIsland_House1_Text_RareRocksGemsDisplayed, MSGBOX_SIGN
# 77 "data/maps/ThreeIsland_House1/scripts.pory"
	end
