# 1 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 2 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_MapScripts::
# 3 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 5 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman::
# 6 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 7 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special QuestLog_CutRecording
# 8 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 9 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 10 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 11 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
# 12 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
# 13 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 14 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, 6, FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
# 15 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
# 16 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 17 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 18 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 19 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment::
# 20 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	famechecker FAMECHECKER_DAISY, 2
# 21 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
# 22 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 23 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 24 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 25 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship::
# 26 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
# 27 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 28 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 29 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 30 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg::
# 31 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	getpartysize
# 32 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
# 33 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_GOT_TOGEPI_EGG
# 34 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	giveegg SPECIES_TOGEPI
# 35 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 36 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 37 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
# 38 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitfanfare
# 39 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitmessage
# 40 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 41 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 42 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 43 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 44 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ If the player has a Togepi/Togetic from this game (assumed to be the one the man gave you) then comment on it
# 45 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ Otherwise make normal comment
# 46 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment::
# 47 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGEPI
# 48 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGEPI
# 49 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 50 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 51 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGETIC
# 52 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGETIC
# 53 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 54 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 55 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
# 56 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 57 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 58 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 59 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg::
# 60 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
# 61 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
# 62 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 63 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 64 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 65 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg::
# 66 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 67 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 68 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 69 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_Falkner::
# 70 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 71 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 72 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_FALKNER_DEFEATED, FiveIsland_WaterLabyrinth_EventScript_RematchFalkner
# 73 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_Falkner, MSGBOX_YESNO
# 74 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_NoFalkner
# 75 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	trainerbattle_single TRAINER_FALKNER, FiveIsland_WaterLabyrinth_Text_YesFalkner, FiveIsland_WaterLabyrinth_Text_FalknerDefeat, FiveIsland_WaterLabyrinth_EventScript_PostFalkner, NO_MUSIC
# 76 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 77 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 78 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 79 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostFalkner::
# 80 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_FalknerPostBattle
# 81 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_FALKNER_DEFEATED
# 82 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	cleartrainerflag TRAINER_FALKNER
# 83 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 84 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 85 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 86 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CantRematchFalkner::
# 87 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_FalknerPostBattle
# 88 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 89 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 90 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 91 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoFalkner::
# 92 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NoFalkner
# 93 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 94 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 95 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 96 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_RematchFalkner::
# 97 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 98 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 99 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_RematchFalkner, MSGBOX_YESNO
# 100 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_NoFalkner
# 101 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	trainerbattle_single TRAINER_FALKNER, FiveIsland_WaterLabyrinth_Text_YesRematchFalkner, FiveIsland_WaterLabyrinth_Text_RematchFalknerDefeat, FiveIsland_WaterLabyrinth_EventScript_PostRematchFalkner, NO_MUSIC
# 102 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 103 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 104 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 105 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostRematchFalkner::
# 106 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_RematchFalknerDefeat
# 107 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	cleartrainerflag TRAINER_FALKNER
# 108 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 109 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
