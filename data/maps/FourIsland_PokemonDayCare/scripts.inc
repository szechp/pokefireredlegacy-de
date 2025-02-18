# 1 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 2 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
.set LOCALID_DAYCARE_WOMAN, 1
# 3 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 4 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_MapScripts::
# 5 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	.byte 0
# 6 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 7 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman::
# 8 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 9 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	lock
# 10 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	faceplayer
# 11 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 12 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_PokemonDayCare_EggWaiting
# 13 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_OneMonInDaycare
# 14 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_PokemonDayCare_TwoMonsInDaycare
# 15 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WouldYouLikeUsToRaiseMon, MSGBOX_YESNO
# 16 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 17 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_FineThenComeAgain
# 18 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 19 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 20 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 21 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise::
# 22 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 23 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FourIsland_PokemonDayCare_OnlyOneMonInParty
# 24 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WhichMonShouldWeRaise
# 25 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special ChooseSendDaycareMon
# 27 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 28 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FourIsland_PokemonDayCare_ComeAgain
# 29 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 30 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FourIsland_PokemonDayCare_OnlyOneAliveMonInParty
# 31 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 32 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitse
# 33 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
# 34 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WellRaiseYourMon
# 35 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmoncry
# 36 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 37 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 38 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 39 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CanRaiseOneMore
# 40 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 41 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 42 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 43 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_ComeAgain::
# 44 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 45 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 46 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 47 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 48 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_CanRaiseOneMore::
# 49 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 50 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 51 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 52 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 53 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 54 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneMonInParty::
# 55 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YouHaveJustOneMon
# 56 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 57 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 58 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 59 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneAliveMonInParty::
# 60 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WhatWillYouBattleWith
# 61 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 62 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 63 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 64 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EggWaiting::
# 65 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HusbandWasLookingForYou
# 66 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 67 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 68 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 69 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_MonHasGrownXLevels::
# 70 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YourMonHasGrownXLevels
# 71 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	return
# 72 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 73 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_DisplayLevelsGained::
# 74 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 75 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call_if_ne VAR_RESULT, 0, FourIsland_PokemonDayCare_MonHasGrownXLevels
# 76 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	return
# 77 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 78 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_OneMonInDaycare::
# 79 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 80 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 81 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 82 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 83 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 84 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 85 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 86 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 87 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 88 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 89 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon::
# 90 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 91 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FourIsland_PokemonDayCare_NoRoomInParty
# 92 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 93 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 94 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CostPrompt
# 95 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special ShowDaycareLevelMenu
# 96 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 97 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 98 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU, FourIsland_PokemonDayCare_ComeAgain
# 99 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_CostPrompt
# 100 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 101 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 102 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_CostPrompt::
# 103 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special GetDaycareCost
# 104 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ItWillCostX, MSGBOX_YESNO
# 105 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_CheckEnoughMoney
# 106 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 107 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 108 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 109 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_CheckEnoughMoney::
# 110 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 111 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FourIsland_PokemonDayCare_RetrieveMon
# 112 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_NotEnoughMoney
# 113 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 114 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 115 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 116 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_RetrieveMon::
# 117 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	applymovement LOCALID_DAYCARE_WOMAN, FourIsland_PokemonDayCare_Movement_RetrieveMon
# 118 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmovement 0
# 119 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 120 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 121 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	playse SE_RS_SHOP
# 122 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 123 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitse
# 124 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 125 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 126 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TookBackMon
# 127 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call EventScript_RestorePrevTextColor
# 128 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmoncry
# 129 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 130 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_AskRetrieveOtherMon
# 131 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 132 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 133 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 134 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_AskRetrieveOtherMon::
# 135 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 136 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 137 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 138 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 139 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 140 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_NoRoomInParty::
# 141 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YourPartyIsFull
# 142 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 143 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 144 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 145 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_MoveManiac::
# 146 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 147 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special QuestLog_CutRecording
# 148 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setflag FLAG_EGG_MOVES_TUTOR
# 149 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	lock
# 150 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	faceplayer
# 151 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 152 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	clearflag HAS_TINY_MUSHROOMS
# 153 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	clearflag HAS_BOTH_MUSHROOMS
# 154 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, FourIsland_PokemonDayCare_EventScript_CheckPlayerHasMushrooms
# 155 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_TeachMonMoveForMushroom
# 156 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 157 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_CheckPlayerHasMushrooms
# 158 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 159 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 160 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_CheckPlayerHasMushrooms::
# 161 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 162 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FourIsland_PokemonDayCare_EventScript_SetHasBigMushroom
# 163 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 1
# 164 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FourIsland_PokemonDayCare_EventScript_SetHasTinyMushrooms
# 165 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, FourIsland_PokemonDayCare_EventScript_CheckAlsoHasTinyMushrooms
# 166 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, FourIsland_PokemonDayCare_EventScript_CheckAlsoHasBigMushroom
# 167 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_EndTutorMove
# 168 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 169 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 170 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_CheckAlsoHasTinyMushrooms::
# 171 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call_if_set HAS_TINY_MUSHROOMS, FourIsland_PokemonDayCare_EventScript_SetHasBothMushrooms
# 172 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_AskTutorMon
# 173 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 174 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 175 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_CheckAlsoHasBigMushroom::
# 176 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call_if_set HAS_BIG_MUSHROOM, FourIsland_PokemonDayCare_EventScript_SetHasBothMushrooms
# 177 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_AskTutorMon
# 178 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 179 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 180 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_AskTutorMon::
# 181 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_WantMeToTeachMove, MSGBOX_YESNO
# 182 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FourIsland_PokemonDayCare_EventScript_EndTutorMove
# 183 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_ChooseMonToTutor
# 184 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 185 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 186 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_ChooseMonToTutor::
# 187 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_TutorWhichMon
# 188 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special ChooseMonForMoveRelearner
# 189 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 190 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FourIsland_PokemonDayCare_EventScript_EndTutorMove
# 191 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special IsSelectedMonEgg
# 192 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FourIsland_PokemonDayCare_EventScript_CantTutorEgg
# 193 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FourIsland_PokemonDayCare_EventScript_NoMoveToTutorMon
# 194 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_ChooseMoveToTeach
# 195 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 196 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 197 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_ChooseMoveToTeach::
# 198 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_TeachWhichMove
# 199 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special TeachMoveRelearnerMove
# 200 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 201 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FourIsland_PokemonDayCare_EventScript_ChooseMonToTutor
# 202 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_set HAS_BOTH_MUSHROOMS, FourIsland_PokemonDayCare_EventScript_ChooseMushroom
# 203 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, FourIsland_PokemonDayCare_EventScript_GiveBigMushroom
# 204 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, FourIsland_PokemonDayCare_EventScript_GiveTinyMushrooms
# 205 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 206 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 207 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_GiveBigMushroom::
# 208 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 209 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 210 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_HandedOverOneBigMushroom
# 211 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call EventScript_RestorePrevTextColor
# 212 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_EndTutorMove
# 213 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 214 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 215 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_GiveTinyMushrooms::
# 216 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 1
# 217 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 218 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_HandedOverTwoTinyMushrooms
# 219 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call EventScript_RestorePrevTextColor
# 220 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_EndTutorMove
# 221 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 222 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 223 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_ChooseMushroom::
# 224 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	message FourIsland_PokemonDayCare_Text_IllNeedMushroomOrTwo
# 225 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmessage
# 226 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	multichoice 0, 0, MULTICHOICE_MUSHROOMS, TRUE
# 227 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	switch VAR_RESULT
# 228 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	case 0, FourIsland_PokemonDayCare_EventScript_GiveTinyMushrooms
# 229 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	case 1, FourIsland_PokemonDayCare_EventScript_GiveBigMushroom
# 230 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 231 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 232 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_NoMoveToTutorMon::
# 233 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_NoMoveICanTeachThatMon
# 234 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_ChooseMonToTutor
# 235 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 236 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 237 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_CantTutorEgg::
# 238 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_CantTeachAnEgg
# 239 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_ChooseMonToTutor
# 240 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 241 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 242 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_EndTutorMove::
# 243 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_NeedMushroomOrTwoToLearnMove
# 244 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 245 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 246 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 247 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 248 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_SetHasBigMushroom::
# 249 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setflag HAS_BIG_MUSHROOM
# 250 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	return
# 251 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 252 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_SetHasTinyMushrooms::
# 253 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setflag HAS_TINY_MUSHROOMS
# 254 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	return
# 255 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 256 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_SetHasBothMushrooms::
# 257 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setflag HAS_BOTH_MUSHROOMS
# 258 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	return
# 259 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 260 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_TeachMonMoveForMushroom::
# 261 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "I'm the POKéMON MOVE MANIAC.\p"
# 262 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "I know every single move that\n"
# 263 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "POKéMON learn growing up.\p"
# 264 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "I'm also a mushroom maniac.\p"
# 265 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Bring me a TINYMUSHROOM,\n"
# 266 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "or a BIG MUSHROOM.\p"
# 267 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "If you do that for me, I'll teach\n"
# 268 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "a move to one POKéMON.$"
# 269 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 270 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_WantMeToTeachMove::
# 271 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Sniff, sniff…\n"
# 272 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Hm! You smell of MUSHROOMS!\p"
# 273 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Do you want me to teach a move\n"
# 274 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "to a POKéMON of yours?$"
# 275 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 276 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_TutorWhichMon::
# 277 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Which POKéMON needs tutoring?$"
# 278 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 279 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_TeachWhichMove::
# 280 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Which move should I teach?$"
# 281 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 282 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_NoMoveICanTeachThatMon::
# 283 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Sorry…\p"
# 284 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "It doesn't appear as if I have a\n"
# 285 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "move I can teach that POKéMON.$"
# 286 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 287 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_IllNeedMushroomOrTwo::
# 288 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Then, I'll need a MUSHROOM.\n"
# 289 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "What are you going to give me?$"
# 290 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 291 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_HandedOverTwoTinyMushrooms::
# 292 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "{PLAYER} handed over one\n"
# 293 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "TINYMUSHROOMS in exchange.$"
# 294 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 295 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_HandedOverOneBigMushroom::
# 296 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "{PLAYER} handed over one\n"
# 297 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "BIG MUSHROOM in exchange.$"
# 298 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 299 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_NeedMushroomOrTwoToLearnMove::
# 300 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "If your POKéMON need to learn a\n"
# 301 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "move, I need a MUSHROOM.$"
# 302 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 303 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_CantTeachAnEgg::
# 304 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Hunh? There isn't a single move\n"
# 305 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "that I can teach an EGG.$"
# 306 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 307 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Movement_RetrieveMon::
# 308 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 309 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 310 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_right
# 311 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 312 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 313 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_left
# 314 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 315 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 316 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_up
# 317 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	walk_slower_up
# 318 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	set_invisible
# 319 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 320 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 321 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 322 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 323 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 324 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_down
# 325 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	set_visible
# 326 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	walk_slower_down
# 327 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	step_end
# 328 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 329 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
@ Unused. Possibly a commented script, or a typo end added to the above Movement script
# 330 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedEnd::
# 331 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 332 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 333 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_TwoMonsInDaycare::
# 334 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 335 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 336 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 337 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 1
# 338 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 339 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 340 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 341 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 342 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 343 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 344 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 345 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
@ Unused
# 346 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon::
# 347 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special ShowDaycareLevelMenu
# 348 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 349 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 2, FourIsland_PokemonDayCare_ComeAgain
# 350 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 351 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 352 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 353 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 354 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 355 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
