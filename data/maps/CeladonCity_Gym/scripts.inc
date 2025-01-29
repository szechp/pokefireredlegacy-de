# 1 "data/maps/CeladonCity_Gym/scripts.pory"

# 2 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_MapScripts::
# 3 "data/maps/CeladonCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Gym/scripts.pory"

# 5 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Erika::
# 6 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_ERIKA, CeladonCity_Gym_EventScript_ContinueErika
# 8 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, CeladonCity_Gym_EventScript_BeatKoga
# 9 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, CeladonCity_Gym_EventScript_BeatSabrina
# 10 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 11 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_ContinueErika
# 12 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_BeatKoga::
# 13 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, CeladonCity_Gym_EventScript_BeatKogaSabrina
# 14 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ERIKA2, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 15 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_ContinueErika
# 16 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_BeatSabrina::
# 17 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, CeladonCity_Gym_EventScript_BeatKogaSabrina
# 18 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ERIKA2, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 19 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_ContinueErika
# 20 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_BeatKogaSabrina::
# 21 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ERIKA3, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 22 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_ContinueErika
# 23 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_ContinueErika::
# 24 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_GiveTM19
# 25 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 4
# 26 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, CeladonCity_Gym_EventScript_RematchErika
# 27 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaPostBattle
# 28 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 29 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 30 "data/maps/CeladonCity_Gym/scripts.pory"

# 31 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_DefeatedErika::
# 32 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 1
# 33 "data/maps/CeladonCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
# 34 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_ERIKA
# 35 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 36 "data/maps/CeladonCity_Gym/scripts.pory"
	settrainerflag TRAINER_LEADER_ERIKA
# 37 "data/maps/CeladonCity_Gym/scripts.pory"
	settrainerflag TRAINER_ERIKA2
# 38 "data/maps/CeladonCity_Gym/scripts.pory"
	settrainerflag TRAINER_ERIKA3
# 39 "data/maps/CeladonCity_Gym/scripts.pory"
	set_gym_trainers 4
# 40 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_GiveTM19
# 41 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 42 "data/maps/CeladonCity_Gym/scripts.pory"

# 43 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_GiveTM19::
# 44 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis
# 45 "data/maps/CeladonCity_Gym/scripts.pory"
	checkitemspace ITEM_TM19
# 46 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Gym_EventScript_NoRoomForTM19
# 47 "data/maps/CeladonCity_Gym/scripts.pory"
	giveitem_msg CeladonCity_Gym_Text_ReceivedTM19FromErika, ITEM_TM19
# 48 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM19_FROM_ERIKA
# 49 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainTM19
# 50 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 51 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 52 "data/maps/CeladonCity_Gym/scripts.pory"

# 53 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_NoRoomForTM19::
# 54 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ShouldMakeRoomForThis
# 55 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 56 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 57 "data/maps/CeladonCity_Gym/scripts.pory"

# 58 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_RematchErika::
# 59 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_RematchErika, MSGBOX_YESNO
# 60 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_Gym_EventScript_NoRematchErika
# 61 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_ERIKA2, CeladonCity_Gym_Text_RematchYesErika, CeladonCity_Gym_Text_RematchErikaDefeat, CeladonCity_Gym_EventScript_PostRematchErika, NO_MUSIC
# 62 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 63 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 64 "data/maps/CeladonCity_Gym/scripts.pory"

# 65 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_PostRematchErika::
# 66 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaPostRematchBattle
# 67 "data/maps/CeladonCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_ERIKA2   
# 68 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 69 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 70 "data/maps/CeladonCity_Gym/scripts.pory"

# 71 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_NoRematchErika::
# 72 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaNoRematchBattle
# 73 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 74 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 75 "data/maps/CeladonCity_Gym/scripts.pory"

# 76 "data/maps/CeladonCity_Gym/scripts.pory"

# 77 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Kay::
# 78 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Text_KayIntro, CeladonCity_Gym_Text_KayDefeat
# 79 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_KayPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 81 "data/maps/CeladonCity_Gym/scripts.pory"

# 82 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Lisa::
# 83 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Text_LisaIntro, CeladonCity_Gym_Text_LisaDefeat
# 84 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 2
# 85 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 87 "data/maps/CeladonCity_Gym/scripts.pory"

# 88 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Tina::
# 89 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Text_TinaIntro, CeladonCity_Gym_Text_TinaDefeat
# 90 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 92 "data/maps/CeladonCity_Gym/scripts.pory"

# 93 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Bridget::
# 94 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Text_BridgetIntro, CeladonCity_Gym_Text_BridgetDefeat
# 95 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 97 "data/maps/CeladonCity_Gym/scripts.pory"

# 98 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Tamia::
# 99 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Text_TamiaIntro, CeladonCity_Gym_Text_TamiaDefeat
# 100 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 3
# 101 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 103 "data/maps/CeladonCity_Gym/scripts.pory"

# 104 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Lori::
# 105 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Text_LoriIntro, CeladonCity_Gym_Text_LoriDefeat
# 106 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 108 "data/maps/CeladonCity_Gym/scripts.pory"

# 109 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Mary::
# 110 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Text_MaryIntro, CeladonCity_Gym_Text_MaryDefeat
# 111 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 113 "data/maps/CeladonCity_Gym/scripts.pory"

# 114 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_GymStatue::
# 115 "data/maps/CeladonCity_Gym/scripts.pory"
	lockall
# 116 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
# 117 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatue
# 118 "data/maps/CeladonCity_Gym/scripts.pory"
	releaseall
# 119 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 120 "data/maps/CeladonCity_Gym/scripts.pory"

# 121 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_GymStatuePostVictory::
# 122 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
# 123 "data/maps/CeladonCity_Gym/scripts.pory"
	releaseall
# 124 "data/maps/CeladonCity_Gym/scripts.pory"
	end
