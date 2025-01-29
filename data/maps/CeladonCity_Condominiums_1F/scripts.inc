# 1 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_MapScripts::
# 3 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 5 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman::
# 6 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 7 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 8 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_set FLAG_TALKED_TO_TEA_LADY_AFTER_HOF, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
# 9 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy
# 10 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_set FLAG_GOT_TEA, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
# 11 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead
# 12 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	setflag FLAG_GOT_TEA
# 13 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	setflag FLAG_GUARD_TEA
# 14 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	giveitem ITEM_TEA
# 15 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 16 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea
# 17 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 18 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 19 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 20 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea::
# 21 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany
# 22 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 23 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmessage
# 24 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	pokemart CeladonCity_Condominiums_1F_Herbs
# 25 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 26 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 27 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 28 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 29 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.align 2
# 30 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_Herbs::
# 31 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 32 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 33 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 34 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 35 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_NONE
# 36 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 37 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 38 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 39 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 40 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy::
# 41 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	famechecker FAMECHECKER_DAISY, 4
# 42 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	setflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
# 43 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea
# 44 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 45 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 46 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 47 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Meowth::
# 48 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 49 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 50 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitse
# 51 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 52 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Meowth
# 53 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmoncry
# 54 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 55 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 56 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 57 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Clefairy::
# 58 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 59 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 60 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitse
# 61 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 62 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
# 63 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmoncry
# 64 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 65 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 66 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 67 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Nidoran::
# 68 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 69 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 70 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitse
# 71 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
# 72 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
# 73 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmoncry
# 74 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 75 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 76 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 77 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_SuiteSign::
# 78 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_ManagersSuite, MSGBOX_SIGN
# 79 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
