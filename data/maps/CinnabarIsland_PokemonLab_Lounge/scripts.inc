# 1 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 2 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 3 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
.equ CHECKED_MUSHROOMS,  FLAG_TEMP_1
# 4 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
.equ HAS_BIG_MUSHROOM,   FLAG_TEMP_2
# 5 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
.equ HAS_TINY_MUSHROOMS, FLAG_TEMP_3
# 6 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
.equ HAS_BOTH_MUSHROOMS, FLAG_TEMP_4
# 7 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 8 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_MapScripts::
# 9 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	.byte 0
# 10 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 11 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Scientist::
# 12 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_FoundFossilInMtMoon, MSGBOX_NPC
# 13 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 14 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 15 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton::
# 16 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	lock
# 17 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	faceplayer
# 18 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ELECTRODE
# 19 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 20 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set FLAG_DID_ESPHERE_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonAlreadyTraded
# 21 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 22 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
# 23 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 24 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
# 25 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 26 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonNotRequestedMon
# 27 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_DoInGameTrade
# 28 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_Thanks
# 29 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag FLAG_DID_ESPHERE_TRADE
# 30 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 31 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 32 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 33 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade::
# 34 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 35 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 36 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 37 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 38 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonNotRequestedMon::
# 39 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 40 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 41 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 42 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 43 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 44 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonAlreadyTraded::
# 45 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_HasTradedMonGrownStronger
# 46 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 47 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 48 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 49 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma::
# 50 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	lock
# 51 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	faceplayer
# 52 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TANGELA
# 53 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 54 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 55 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 56 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set FLAG_DID_TANGENY_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaAlreadyTraded
# 57 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWantToTradeForMon, MSGBOX_YESNO
# 58 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
# 59 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special ChoosePartyMon
# 60 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitstate
# 61 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 62 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
# 63 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 64 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 65 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 66 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaNotRequestedMon
# 67 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 68 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 69 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special CreateInGameTradePokemon
# 70 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special DoInGameTradeScene
# 71 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitstate
# 72 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThanksYoureAPal
# 73 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag FLAG_DID_TANGENY_TRADE
# 74 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 75 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 76 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 77 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade::
# 78 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThatsTooBad
# 79 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 80 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 81 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 82 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NormaNotRequestedMon::
# 83 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 84 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThisIsNoMon
# 85 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 86 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 87 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 88 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NormaAlreadyTraded::
# 89 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_HowIsMyOldMon
# 90 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 91 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 92 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 93 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_MoveManiac::
# 94 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 95 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special QuestLog_CutRecording
# 96 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	lock
# 97 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	faceplayer
# 98 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 99 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	clearflag HAS_TINY_MUSHROOMS
# 100 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	clearflag HAS_BOTH_MUSHROOMS
# 101 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, CinnabarIsland_PokemonLab_Lounge_EventScript_CheckPlayerHasMushrooms
# 102 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_TeachMonMoveForMushroom
# 103 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 104 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CheckPlayerHasMushrooms
# 105 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 106 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 107 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CheckPlayerHasMushrooms::
# 108 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 109 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasBigMushroom
# 110 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 1
# 111 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasTinyMushrooms
# 112 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, CinnabarIsland_PokemonLab_Lounge_EventScript_CheckAlsoHasTinyMushrooms
# 113 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, CinnabarIsland_PokemonLab_Lounge_EventScript_CheckAlsoHasBigMushroom
# 114 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove
# 115 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 116 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 117 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CheckAlsoHasTinyMushrooms::
# 118 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call_if_set HAS_TINY_MUSHROOMS, CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasBothMushrooms
# 119 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_AskTutorMon
# 120 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 121 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 122 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CheckAlsoHasBigMushroom::
# 123 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call_if_set HAS_BIG_MUSHROOM, CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasBothMushrooms
# 124 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_AskTutorMon
# 125 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 126 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 127 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_AskTutorMon::
# 128 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_WantMeToTeachMove, MSGBOX_YESNO
# 129 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove
# 130 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMonToTutor
# 131 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 132 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 133 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMonToTutor::
# 134 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_TutorWhichMon
# 135 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special ChooseMonForMoveRelearner
# 136 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitstate
# 137 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove
# 138 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special IsSelectedMonEgg
# 139 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_Lounge_EventScript_CantTutorEgg
# 140 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_0x8005, 0, CinnabarIsland_PokemonLab_Lounge_EventScript_NoMoveToTutorMon
# 141 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMoveToTeach
# 142 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 143 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 144 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMoveToTeach::
# 145 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_TeachWhichMove
# 146 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special TeachMoveRelearnerMove
# 147 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitstate
# 148 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_0x8004, 0, CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMonToTutor
# 149 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set HAS_BOTH_MUSHROOMS, CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMushroom
# 150 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, CinnabarIsland_PokemonLab_Lounge_EventScript_GiveBigMushroom
# 151 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, CinnabarIsland_PokemonLab_Lounge_EventScript_GiveTinyMushrooms
# 152 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 153 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 154 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_GiveBigMushroom::
# 155 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 156 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 157 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_HandedOverOneBigMushroom
# 158 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_RestorePrevTextColor
# 159 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove
# 160 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 161 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 162 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_GiveTinyMushrooms::
# 163 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 1
# 164 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 165 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_HandedOverTwoTinyMushrooms
# 166 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_RestorePrevTextColor
# 167 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove
# 168 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 169 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 170 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMushroom::
# 171 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	message CinnabarIsland_PokemonLab_Lounge_Text_IllNeedMushroomOrTwo
# 172 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitmessage
# 173 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	multichoice 0, 0, MULTICHOICE_MUSHROOMS, TRUE
# 174 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	switch VAR_RESULT
# 175 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_Lounge_EventScript_GiveTinyMushrooms
# 176 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_Lounge_EventScript_GiveBigMushroom
# 177 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 178 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 179 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NoMoveToTutorMon::
# 180 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_NoMoveICanTeachThatMon
# 181 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMonToTutor
# 182 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 183 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 184 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CantTutorEgg::
# 185 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_CantTeachAnEgg
# 186 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMonToTutor
# 187 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 188 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 189 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove::
# 190 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_NeedMushroomOrTwoToLearnMove
# 191 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 192 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 193 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 194 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasBigMushroom::
# 195 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag HAS_BIG_MUSHROOM
# 196 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	return
# 197 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 198 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasTinyMushrooms::
# 199 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag HAS_TINY_MUSHROOMS
# 200 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	return
# 201 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 202 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasBothMushrooms::
# 203 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag HAS_BOTH_MUSHROOMS
# 204 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	return
