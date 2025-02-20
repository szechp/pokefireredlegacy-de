# 1 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 2 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
.equ CHECKED_MUSHROOMS,  FLAG_TEMP_1
# 3 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
.equ HAS_BIG_MUSHROOM,   FLAG_TEMP_2
# 4 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
.equ HAS_TINY_MUSHROOMS, FLAG_TEMP_3
# 5 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
.equ HAS_BOTH_MUSHROOMS, FLAG_TEMP_4
# 6 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 7 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_MapScripts::
# 8 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_OnLoad
# 9 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.byte 0
# 10 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 11 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_OnLoad::
# 12 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special CheckBeatJohto
# 13 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_ShowClerk
# 14 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 15 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 16 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ShowClerk::
# 17 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag FLAG_SHOPJOHTO
# 18 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 19 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 20 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman::
# 21 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 22 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special QuestLog_CutRecording
# 23 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 24 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 25 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 26 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
# 27 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
# 28 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 29 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, 6, FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
# 30 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
# 31 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 32 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 33 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 34 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment::
# 35 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	famechecker FAMECHECKER_DAISY, 2
# 36 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
# 37 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 38 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 39 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 40 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship::
# 41 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
# 42 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 43 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 44 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 45 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg::
# 46 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	getpartysize
# 47 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
# 48 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_GOT_TOGEPI_EGG
# 49 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	giveegg SPECIES_TOGEPI
# 50 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 51 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 52 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
# 53 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitfanfare
# 54 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitmessage
# 55 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 56 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 57 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 58 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 59 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ If the player has a Togepi/Togetic from this game (assumed to be the one the man gave you) then comment on it
# 60 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ Otherwise make normal comment
# 61 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment::
# 62 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGEPI
# 63 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGEPI
# 64 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 65 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 66 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGETIC
# 67 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGETIC
# 68 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 69 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 70 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
# 71 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 72 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 73 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 74 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg::
# 75 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
# 76 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
# 77 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 78 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 79 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 80 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg::
# 81 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 82 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 83 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 84 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_Falkner::
# 85 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 86 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 87 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_FALKNER_DEFEATED, FiveIsland_WaterLabyrinth_EventScript_RematchFalkner
# 88 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_Falkner, MSGBOX_YESNO
# 89 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_NoFalkner
# 90 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	trainerbattle_single TRAINER_FALKNER, FiveIsland_WaterLabyrinth_Text_YesFalkner, FiveIsland_WaterLabyrinth_Text_FalknerDefeat, FiveIsland_WaterLabyrinth_EventScript_PostFalkner, NO_MUSIC
# 91 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 92 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 93 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 94 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostFalkner::
# 95 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_FalknerPostBattle
# 96 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_FALKNER_DEFEATED
# 97 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	cleartrainerflag TRAINER_FALKNER
# 98 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 99 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 100 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 101 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CantRematchFalkner::
# 102 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_FalknerPostBattle
# 103 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 104 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 105 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 106 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoFalkner::
# 107 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NoFalkner
# 108 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 109 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 110 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 111 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_RematchFalkner::
# 112 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 113 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 114 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_RematchFalkner, MSGBOX_YESNO
# 115 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_NoFalkner
# 116 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	trainerbattle_single TRAINER_FALKNER, FiveIsland_WaterLabyrinth_Text_YesRematchFalkner, FiveIsland_WaterLabyrinth_Text_RematchFalknerDefeat, FiveIsland_WaterLabyrinth_EventScript_PostRematchFalkner, NO_MUSIC
# 117 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 118 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 119 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 120 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostRematchFalkner::
# 121 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_RematchFalknerDefeat
# 122 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	cleartrainerflag TRAINER_FALKNER
# 123 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 124 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 125 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 126 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MoveManiac::
# 127 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 128 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special QuestLog_CutRecording
# 129 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_EGG_MOVES_TUTOR
# 130 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 131 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 132 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 133 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag HAS_TINY_MUSHROOMS
# 134 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag HAS_BOTH_MUSHROOMS
# 135 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms
# 136 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TeachMonMoveForMushroom
# 137 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 138 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms
# 139 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 140 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 141 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms::
# 142 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 143 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_SetHasBigMushroom
# 144 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 10
# 145 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_SetHasTinyMushrooms
# 146 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasTinyMushrooms
# 147 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasBigMushroom
# 148 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 149 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 150 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 151 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasTinyMushrooms::
# 152 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_set HAS_TINY_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_SetHasBothMushrooms
# 153 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_AskTutorMon
# 154 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 155 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 156 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasBigMushroom::
# 157 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_set HAS_BIG_MUSHROOM, FiveIsland_WaterLabyrinth_EventScript_SetHasBothMushrooms
# 158 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_AskTutorMon
# 159 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 160 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 161 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_AskTutorMon::
# 162 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_WantMeToTeachMove, MSGBOX_YESNO
# 163 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 164 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 165 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 166 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 167 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor::
# 168 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TutorWhichMon
# 169 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special ChooseMonForMoveRelearner
# 170 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitstate
# 171 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 172 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special IsSelectedMonEgg
# 173 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_CantTutorEgg
# 174 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FiveIsland_WaterLabyrinth_EventScript_NoMoveToTutorMon
# 175 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMoveToTeach
# 176 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 177 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 178 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ChooseMoveToTeach::
# 179 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TeachWhichMove
# 180 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special TeachMoveRelearnerMove
# 181 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitstate
# 182 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 183 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_BOTH_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_ChooseMushroom
# 184 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, FiveIsland_WaterLabyrinth_EventScript_GiveBigMushroom
# 185 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_GiveTinyMushrooms
# 186 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 187 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 188 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_GiveBigMushroom::
# 189 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 190 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 191 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HandedOverOneBigMushroom
# 192 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 193 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 194 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 195 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 196 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_GiveTinyMushrooms::
# 197 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 10
# 198 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 199 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HandedOverTwoTinyMushrooms
# 200 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 201 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 202 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 203 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 204 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ChooseMushroom::
# 205 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_IllNeedMushroomOrTwo
# 206 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitmessage
# 207 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	multichoice 0, 0, MULTICHOICE_MUSHROOMS, TRUE
# 208 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	case 0, FiveIsland_WaterLabyrinth_EventScript_GiveTinyMushrooms
# 210 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	case 1, FiveIsland_WaterLabyrinth_EventScript_GiveBigMushroom
# 211 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 212 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 213 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoMoveToTutorMon::
# 214 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NoMoveICanTeachThatMon
# 215 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 216 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 217 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 218 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CantTutorEgg::
# 219 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CantTeachAnEgg
# 220 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 221 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 222 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 223 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EndTutorMove::
# 224 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NeedMushroomOrTwoToLearnMove
# 225 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 226 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 227 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 228 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 229 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_SetHasBigMushroom::
# 230 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag HAS_BIG_MUSHROOM
# 231 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	return
# 232 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 233 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_SetHasTinyMushrooms::
# 234 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag HAS_TINY_MUSHROOMS
# 235 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	return
# 236 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 237 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_SetHasBothMushrooms::
# 238 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag HAS_BOTH_MUSHROOMS
# 239 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	return
# 240 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 241 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TeachMonMoveForMushroom::
# 242 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I'm the POKéMON MOVE MANIAC.\p"
# 243 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I know every single move that\n"
# 244 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "POKéMON learn growing up.\p"
# 245 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I'm also a mushroom maniac.\p"
# 246 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Bring me 10 TINYMUSHROOMs,\n"
# 247 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "or a BIG MUSHROOM.\p"
# 248 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "If you do that for me, I'll teach\n"
# 249 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "a move to one POKéMON.$"
# 250 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 251 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_WantMeToTeachMove::
# 252 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Sniff, sniff…\n"
# 253 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Hm! You smell of MUSHROOMS!\p"
# 254 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Do you want me to teach a move\n"
# 255 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "to a POKéMON of yours?$"
# 256 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 257 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TutorWhichMon::
# 258 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Which POKéMON needs tutoring?$"
# 259 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 260 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TeachWhichMove::
# 261 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Which move should I teach?$"
# 262 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 263 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_NoMoveICanTeachThatMon::
# 264 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Sorry…\p"
# 265 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "It doesn't appear as if I have a\n"
# 266 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "move I can teach that POKéMON.$"
# 267 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 268 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_IllNeedMushroomOrTwo::
# 269 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Then, I'll need a MUSHROOM or ten.\n"
# 270 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "What are you going to give me?$"
# 271 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 272 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HandedOverTwoTinyMushrooms::
# 273 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "{PLAYER} handed over ten\n"
# 274 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "TINYMUSHROOMS in exchange.$"
# 275 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 276 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HandedOverOneBigMushroom::
# 277 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "{PLAYER} handed over one\n"
# 278 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "BIG MUSHROOM in exchange.$"
# 279 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 280 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_NeedMushroomOrTwoToLearnMove::
# 281 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "If your POKéMON need to learn a\n"
# 282 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "move, I need a MUSHROOM.$"
# 283 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 284 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_CantTeachAnEgg::
# 285 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Hunh? There isn't a single move\n"
# 286 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "that I can teach an EGG.$"
