# 1 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 2 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
.equ CHECKED_MUSHROOMS,  FLAG_TEMP_1
# 3 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
.equ HAS_BIG_MUSHROOM,   FLAG_TEMP_2
# 4 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 5 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_MapScripts::
# 6 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_WaterLabyrinth_OnLoad
# 7 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.byte 0
# 8 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 9 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_OnLoad::
# 10 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special CheckBeatJohto
# 11 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_ShowClerk
# 12 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 13 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 14 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ShowClerk::
# 15 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag FLAG_SHOPJOHTO
# 16 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 17 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 18 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman::
# 19 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 20 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special QuestLog_CutRecording
# 21 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 22 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 23 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 24 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
# 25 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
# 26 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 27 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, 6, FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
# 28 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
# 29 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 30 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 31 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 32 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment::
# 33 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	famechecker FAMECHECKER_DAISY, 2
# 34 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
# 35 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 36 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 37 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 38 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship::
# 39 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
# 40 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 41 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 42 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 43 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg::
# 44 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	getpartysize
# 45 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
# 46 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_GOT_TOGEPI_EGG
# 47 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	giveegg SPECIES_TOGEPI
# 48 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 49 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 50 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
# 51 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitfanfare
# 52 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitmessage
# 53 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 54 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 55 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 56 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 57 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ If the player has a Togepi/Togetic from this game (assumed to be the one the man gave you) then comment on it
# 58 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ Otherwise make normal comment
# 59 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment::
# 60 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGEPI
# 61 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGEPI
# 62 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 63 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 64 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGETIC
# 65 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGETIC
# 66 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 67 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 68 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
# 69 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 70 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 71 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 72 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg::
# 73 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
# 74 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
# 75 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 76 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 77 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 78 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg::
# 79 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 80 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 81 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 82 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_Falkner::
# 83 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 84 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 85 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_FALKNER_DEFEATED, FiveIsland_WaterLabyrinth_EventScript_RematchFalkner
# 86 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_Falkner, MSGBOX_YESNO
# 87 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_NoFalkner
# 88 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	trainerbattle_single TRAINER_FALKNER, FiveIsland_WaterLabyrinth_Text_YesFalkner, FiveIsland_WaterLabyrinth_Text_FalknerDefeat, FiveIsland_WaterLabyrinth_EventScript_PostFalkner, NO_MUSIC
# 89 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 90 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 91 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 92 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostFalkner::
# 93 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_FalknerPostBattle
# 94 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_FALKNER_DEFEATED
# 95 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	cleartrainerflag TRAINER_FALKNER
# 96 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 97 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 98 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 99 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CantRematchFalkner::
# 100 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_FalknerPostBattle
# 101 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 102 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 103 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 104 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoFalkner::
# 105 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NoFalkner
# 106 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 107 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 108 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 109 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_HeartScale::
# 110 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_SHOPJOHTO, FiveIsland_WaterLabyrinth_EventScript_HeartScale2
# 111 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_Heartscale
# 112 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 113 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 114 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 115 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_HeartScale2::
# 116 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_Heartscale2
# 117 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 118 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 119 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 120 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_Heartscale::
# 121 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "My painter friend is currently\n"
# 122 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "on a mission to learn how to\l"
# 123 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "teach moves that Parents\l"
# 124 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "give to their offspring\l"
# 125 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "in their little egg.\p"
# 126 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I'm talking about\n"
# 127 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "EGGS MOVES of Course!\p"
# 128 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "You can't learn them\n"
# 129 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "anywhere else!\p"
# 130 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "A CHAMPION like you could have\n"
# 131 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "great potential with them,\l"
# 132 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "when my friend returns here.\p"
# 133 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "You be better off doing\n"
# 134 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "something else...$"
# 135 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 136 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_Heartscale2::
# 137 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Ahh, my painter friend\n"
# 138 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "is finally here!\p"
# 139 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "She would be glad to teach\n"
# 140 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "you exclusive EGG MOVES\l"
# 141 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "for the price of 1 HEART SCALE.\p"
# 142 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I think you can find them on\n"
# 143 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "the Islands south of\l"
# 144 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "SEVEN ISLAND.$"
# 145 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 146 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 147 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_RematchFalkner::
# 148 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 149 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 150 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_RematchFalkner, MSGBOX_YESNO
# 151 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_NoFalkner
# 152 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	trainerbattle_single TRAINER_FALKNER, FiveIsland_WaterLabyrinth_Text_YesRematchFalkner, FiveIsland_WaterLabyrinth_Text_RematchFalknerDefeat, FiveIsland_WaterLabyrinth_EventScript_PostRematchFalkner, NO_MUSIC
# 153 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 154 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 155 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 156 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostRematchFalkner::
# 157 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_RematchFalknerDefeat
# 158 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	cleartrainerflag TRAINER_FALKNER
# 159 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 160 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 161 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 162 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MoveManiac::
# 163 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 164 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special QuestLog_CutRecording
# 165 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_EGG_MOVES_TUTOR
# 166 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 167 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 168 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 169 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms
# 170 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TeachMonMoveForMushroom
# 171 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 172 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms
# 173 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 174 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 175 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms::
# 176 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 177 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_SetHasBigMushroom
# 178 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasTinyMushrooms
# 179 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 180 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 181 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 182 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasTinyMushrooms::
# 183 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_AskTutorMon
# 184 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 185 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 186 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_AskTutorMon::
# 187 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_WantMeToTeachMove, MSGBOX_YESNO
# 188 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 189 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 190 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 191 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 192 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor::
# 193 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TutorWhichMon
# 194 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special ChooseMonForMoveRelearner
# 195 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitstate
# 196 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 197 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special IsSelectedMonEgg
# 198 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_CantTutorEgg
# 199 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FiveIsland_WaterLabyrinth_EventScript_NoMoveToTutorMon
# 200 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMoveToTeach
# 201 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 202 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 203 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ChooseMoveToTeach::
# 204 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TeachWhichMove
# 205 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special TeachMoveRelearnerMove
# 206 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitstate
# 207 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 208 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, FiveIsland_WaterLabyrinth_EventScript_GiveBigMushroom
# 209 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 210 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 211 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_GiveBigMushroom::
# 212 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 213 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 214 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HandedOverOneBigMushroom
# 215 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 216 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 217 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 218 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 219 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_GiveTinyMushrooms::
# 220 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 10
# 221 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 222 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HandedOverTwoTinyMushrooms
# 223 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 224 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 225 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 226 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 227 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoMoveToTutorMon::
# 228 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NoMoveICanTeachThatMon
# 229 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 230 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 231 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 232 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CantTutorEgg::
# 233 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CantTeachAnEgg
# 234 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 235 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 236 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 237 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EndTutorMove::
# 238 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NeedMushroomOrTwoToLearnMove
# 239 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 240 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 241 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 242 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 243 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_SetHasBigMushroom::
# 244 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag HAS_BIG_MUSHROOM
# 245 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	return
# 246 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 247 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TeachMonMoveForMushroom::
# 248 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I'm the EGG MOVE ARTIST.\p"
# 249 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I study moves with an artist's eye,\n"
# 250 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "and sketch them as skilfully\l"
# 251 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "as a SMEARGLE.\p"
# 252 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I can gift an EGG move\n"
# 253 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "to your POKéMON if you'd like.\p"
# 254 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I'll craft you a masterpiece\n"
# 255 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "for just one HEART SCALE!$"
# 256 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 257 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_WantMeToTeachMove::
# 258 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Oh! That's it!\n"
# 259 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "A genuine HEART SCALE!\p"
# 260 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Shall I sketch a move?$"
# 261 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 262 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TutorWhichMon::
# 263 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Which POKéMON needs an EGG move?$"
# 264 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 265 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TeachWhichMove::
# 266 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Which move should I teach?$"
# 267 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 268 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_NoMoveICanTeachThatMon::
# 269 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Sorry… I have nothing to sketch\n"
# 270 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "for that POKéMON.$"
# 271 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 272 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_IllNeedMushroomOrTwo::
# 273 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Then, I'll need a MUSHROOM or ten.\n"
# 274 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "What are you going to give me?$"
# 275 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 276 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HandedOverTwoTinyMushrooms::
# 277 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "{PLAYER} handed over ten\n"
# 278 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "TINYMUSHROOMS in exchange.$"
# 279 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 280 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HandedOverOneBigMushroom::
# 281 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\n"
# 282 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "in exchange.$"
# 283 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 284 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_NeedMushroomOrTwoToLearnMove::
# 285 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "If your POKéMON need to learn an EGG\n"
# 286 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "move, come back with a HEART SCALE.p"
# 287 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I heard there's some south of\n"
# 288 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Seven Island!$"
# 289 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 290 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_CantTeachAnEgg::
# 291 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Hunh? No move in my sketchbook\n"
# 292 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "fits an EGG!$"
