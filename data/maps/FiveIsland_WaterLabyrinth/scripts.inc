# 1 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 2 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_MapScripts::
# 3 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_OnLoad
# 4 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.byte 0
# 5 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 6 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_OnLoad::
# 7 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special CheckBeatJohto
# 8 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_ShowClerk
# 9 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 10 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 11 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ShowClerk::
# 12 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag FLAG_SHOPJOHTO
# 13 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 14 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 15 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman::
# 16 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 17 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special QuestLog_CutRecording
# 18 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 19 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 20 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 21 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
# 22 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
# 23 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 24 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, 6, FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
# 25 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
# 26 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 27 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 28 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 29 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment::
# 30 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	famechecker FAMECHECKER_DAISY, 2
# 31 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
# 32 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 33 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 34 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 35 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship::
# 36 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
# 37 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 38 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 39 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 40 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg::
# 41 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	getpartysize
# 42 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
# 43 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_GOT_TOGEPI_EGG
# 44 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	giveegg SPECIES_TOGEPI
# 45 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 46 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 47 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
# 48 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitfanfare
# 49 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitmessage
# 50 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 51 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 52 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 53 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 54 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ If the player has a Togepi/Togetic from this game (assumed to be the one the man gave you) then comment on it
# 55 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ Otherwise make normal comment
# 56 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment::
# 57 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGEPI
# 58 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGEPI
# 59 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 60 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 61 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGETIC
# 62 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGETIC
# 63 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 64 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 65 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
# 66 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 67 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 68 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 69 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg::
# 70 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
# 71 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
# 72 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 73 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 74 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 75 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg::
# 76 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 77 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 78 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 79 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_Falkner::
# 80 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 81 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 82 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_FALKNER_DEFEATED, FiveIsland_WaterLabyrinth_EventScript_RematchFalkner
# 83 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_Falkner, MSGBOX_YESNO
# 84 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_NoFalkner
# 85 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	trainerbattle_single TRAINER_FALKNER, FiveIsland_WaterLabyrinth_Text_YesFalkner, FiveIsland_WaterLabyrinth_Text_FalknerDefeat, FiveIsland_WaterLabyrinth_EventScript_PostFalkner, NO_MUSIC
# 86 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 87 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 88 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 89 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostFalkner::
# 90 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_FalknerPostBattle
# 91 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_FALKNER_DEFEATED
# 92 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	cleartrainerflag TRAINER_FALKNER
# 93 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 94 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 95 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 96 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CantRematchFalkner::
# 97 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_FalknerPostBattle
# 98 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 99 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 100 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 101 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoFalkner::
# 102 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NoFalkner
# 103 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 104 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 105 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 106 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_RematchFalkner::
# 107 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 108 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 109 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_RematchFalkner, MSGBOX_YESNO
# 110 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_NoFalkner
# 111 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	trainerbattle_single TRAINER_FALKNER, FiveIsland_WaterLabyrinth_Text_YesRematchFalkner, FiveIsland_WaterLabyrinth_Text_RematchFalknerDefeat, FiveIsland_WaterLabyrinth_EventScript_PostRematchFalkner, NO_MUSIC
# 112 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 113 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 114 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 115 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostRematchFalkner::
# 116 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_RematchFalknerDefeat
# 117 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	cleartrainerflag TRAINER_FALKNER
# 118 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 119 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 120 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 121 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MoveManiac::
# 122 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 123 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special QuestLog_CutRecording
# 124 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_EGG_MOVES_TUTOR
# 125 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 126 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 127 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 128 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag HAS_TINY_MUSHROOMS
# 129 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag HAS_BOTH_MUSHROOMS
# 130 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms
# 131 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TeachMonMoveForMushroom
# 132 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 133 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms
# 134 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 135 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 136 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms::
# 137 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 138 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_SetHasBigMushroom
# 139 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 1
# 140 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_SetHasTinyMushrooms
# 141 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasTinyMushrooms
# 142 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasBigMushroom
# 143 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 144 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 145 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 146 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasTinyMushrooms::
# 147 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_set HAS_TINY_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_SetHasBothMushrooms
# 148 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_AskTutorMon
# 149 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 150 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 151 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasBigMushroom::
# 152 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_set HAS_BIG_MUSHROOM, FiveIsland_WaterLabyrinth_EventScript_SetHasBothMushrooms
# 153 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_AskTutorMon
# 154 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 155 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 156 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_AskTutorMon::
# 157 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_WantMeToTeachMove, MSGBOX_YESNO
# 158 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 159 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 160 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 161 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 162 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor::
# 163 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TutorWhichMon
# 164 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special ChooseMonForMoveRelearner
# 165 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitstate
# 166 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 167 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special IsSelectedMonEgg
# 168 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_CantTutorEgg
# 169 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FiveIsland_WaterLabyrinth_EventScript_NoMoveToTutorMon
# 170 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMoveToTeach
# 171 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 172 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 173 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ChooseMoveToTeach::
# 174 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TeachWhichMove
# 175 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special TeachMoveRelearnerMove
# 176 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitstate
# 177 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 178 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_BOTH_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_ChooseMushroom
# 179 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, FiveIsland_WaterLabyrinth_EventScript_GiveBigMushroom
# 180 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_GiveTinyMushrooms
# 181 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 182 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 183 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_GiveBigMushroom::
# 184 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 185 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 186 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HandedOverOneBigMushroom
# 187 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 188 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 189 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 190 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 191 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_GiveTinyMushrooms::
# 192 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 1
# 193 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 194 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HandedOverTwoTinyMushrooms
# 195 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 196 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 197 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 198 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 199 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ChooseMushroom::
# 200 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_IllNeedMushroomOrTwo
# 201 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitmessage
# 202 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	multichoice 0, 0, MULTICHOICE_MUSHROOMS, TRUE
# 203 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	switch VAR_RESULT
# 204 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	case 0, FiveIsland_WaterLabyrinth_EventScript_GiveTinyMushrooms
# 205 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	case 1, FiveIsland_WaterLabyrinth_EventScript_GiveBigMushroom
# 206 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 207 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 208 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoMoveToTutorMon::
# 209 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NoMoveICanTeachThatMon
# 210 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 211 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 212 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 213 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CantTutorEgg::
# 214 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CantTeachAnEgg
# 215 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 216 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 217 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 218 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EndTutorMove::
# 219 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NeedMushroomOrTwoToLearnMove
# 220 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 221 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 222 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 223 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 224 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_SetHasBigMushroom::
# 225 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag HAS_BIG_MUSHROOM
# 226 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	return
# 227 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 228 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_SetHasTinyMushrooms::
# 229 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag HAS_TINY_MUSHROOMS
# 230 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	return
# 231 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 232 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_SetHasBothMushrooms::
# 233 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag HAS_BOTH_MUSHROOMS
# 234 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	return
# 235 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 236 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TeachMonMoveForMushroom::
# 237 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I'm the POKéMON MOVE MANIAC.\p"
# 238 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I know every single move that\n"
# 239 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "POKéMON learn growing up.\p"
# 240 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "I'm also a mushroom maniac.\p"
# 241 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Bring me a TINYMUSHROOM,\n"
# 242 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "or a BIG MUSHROOM.\p"
# 243 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "If you do that for me, I'll teach\n"
# 244 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "a move to one POKéMON.$"
# 245 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 246 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_WantMeToTeachMove::
# 247 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Sniff, sniff…\n"
# 248 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Hm! You smell of MUSHROOMS!\p"
# 249 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Do you want me to teach a move\n"
# 250 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "to a POKéMON of yours?$"
# 251 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 252 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TutorWhichMon::
# 253 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Which POKéMON needs tutoring?$"
# 254 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 255 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TeachWhichMove::
# 256 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Which move should I teach?$"
# 257 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 258 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_NoMoveICanTeachThatMon::
# 259 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Sorry…\p"
# 260 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "It doesn't appear as if I have a\n"
# 261 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "move I can teach that POKéMON.$"
# 262 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 263 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_IllNeedMushroomOrTwo::
# 264 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Then, I'll need a MUSHROOM.\n"
# 265 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "What are you going to give me?$"
# 266 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 267 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HandedOverTwoTinyMushrooms::
# 268 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "{PLAYER} handed over one\n"
# 269 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "TINYMUSHROOMS in exchange.$"
# 270 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 271 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HandedOverOneBigMushroom::
# 272 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "{PLAYER} handed over one\n"
# 273 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "BIG MUSHROOM in exchange.$"
# 274 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 275 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_NeedMushroomOrTwoToLearnMove::
# 276 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "If your POKéMON need to learn a\n"
# 277 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "move, I need a MUSHROOM.$"
# 278 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 279 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_CantTeachAnEgg::
# 280 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Hunh? There isn't a single move\n"
# 281 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "that I can teach an EGG.$"
