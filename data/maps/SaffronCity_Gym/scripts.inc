# 1 "data/maps/SaffronCity_Gym/scripts.pory"

# 2 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_MapScripts::
# 3 "data/maps/SaffronCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_Gym/scripts.pory"

# 5 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Sabrina::
# 6 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SaffronCity_Gym_EventScript_RematchSabrina
# 8 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, SaffronCity_Gym_EventScript_Blaine
# 9 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
# 10 "data/maps/SaffronCity_Gym/scripts.pory"
	goto SaffronCity_Gym_EventScript_SabrinaContinue
# 11 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Blaine::
# 12 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
# 13 "data/maps/SaffronCity_Gym/scripts.pory"
	goto SaffronCity_Gym_EventScript_SabrinaContinue
# 14 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_SabrinaContinue::
# 15 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_EventScript_GiveTM04
# 16 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainTM04
# 17 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 18 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 19 "data/maps/SaffronCity_Gym/scripts.pory"

# 20 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_DefeatedSabrina::
# 21 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 2
# 22 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 3
# 23 "data/maps/SaffronCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
# 24 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_SABRINA
# 25 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 26 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GYM3CAP
# 27 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GYM4CAP
# 28 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GYM5CAP
# 29 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GYM6CAP
# 30 "data/maps/SaffronCity_Gym/scripts.pory"
	set_gym_trainers 6
# 31 "data/maps/SaffronCity_Gym/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04
# 32 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 33 "data/maps/SaffronCity_Gym/scripts.pory"

# 34 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GiveTM04::
# 35 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis
# 36 "data/maps/SaffronCity_Gym/scripts.pory"
	checkitemspace ITEM_TM04
# 37 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_Gym_EventScript_NoRoomForTM04
# 38 "data/maps/SaffronCity_Gym/scripts.pory"
	giveitem_msg SaffronCity_Gym_Text_ReceivedTM04FromSabrina, ITEM_TM04
# 39 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM04_FROM_SABRINA
# 40 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle
# 41 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 42 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 43 "data/maps/SaffronCity_Gym/scripts.pory"

# 44 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_NoRoomForTM04::
# 45 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_BagFullOfOtherItems
# 46 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 47 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 48 "data/maps/SaffronCity_Gym/scripts.pory"

# 49 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_RematchSabrina::
# 50 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_RematchSabrina, MSGBOX_YESNO
# 51 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Gym_EventScript_NoRematchSabrina
# 52 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA2, SaffronCity_Gym_Text_RematchYesSabrina, SaffronCity_Gym_Text_RematchSabrinaDefeat, SaffronCity_Gym_EventScript_PostRematchSabrina, NO_MUSIC
# 53 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 54 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 55 "data/maps/SaffronCity_Gym/scripts.pory"

# 56 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_PostRematchSabrina::
# 57 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostRematchBattle
# 58 "data/maps/SaffronCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_SABRINA2
# 59 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 60 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 61 "data/maps/SaffronCity_Gym/scripts.pory"

# 62 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_NoRematchSabrina::
# 63 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaNoRematchBattle
# 64 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 65 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 66 "data/maps/SaffronCity_Gym/scripts.pory"

# 67 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Johan::
# 68 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Text_JohanIntro, SaffronCity_Gym_Text_JohanDefeat
# 69 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 71 "data/maps/SaffronCity_Gym/scripts.pory"

# 72 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Tyron::
# 73 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Text_TyronIntro, SaffronCity_Gym_Text_TyronDefeat
# 74 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 5
# 75 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 77 "data/maps/SaffronCity_Gym/scripts.pory"

# 78 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Cameron::
# 79 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Text_CameronIntro, SaffronCity_Gym_Text_CameronDefeat
# 80 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 82 "data/maps/SaffronCity_Gym/scripts.pory"

# 83 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Preston::
# 84 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Text_PrestonIntro, SaffronCity_Gym_Text_PrestonDefeat
# 85 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 87 "data/maps/SaffronCity_Gym/scripts.pory"

# 88 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Amanda::
# 89 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Text_AmandaIntro, SaffronCity_Gym_Text_AmandaDefeat
# 90 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 92 "data/maps/SaffronCity_Gym/scripts.pory"

# 93 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Stacy::
# 94 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Text_StacyIntro, SaffronCity_Gym_Text_StacyDefeat
# 95 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 97 "data/maps/SaffronCity_Gym/scripts.pory"

# 98 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Tasha::
# 99 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Text_TashaIntro, SaffronCity_Gym_Text_TashaDefeat
# 100 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 102 "data/maps/SaffronCity_Gym/scripts.pory"

# 103 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymGuy::
# 104 "data/maps/SaffronCity_Gym/scripts.pory"
	lock
# 105 "data/maps/SaffronCity_Gym/scripts.pory"
	faceplayer
# 106 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_GymGuyPostVictory
# 107 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyAdvice
# 108 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 109 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 110 "data/maps/SaffronCity_Gym/scripts.pory"

# 111 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymGuyPostVictory::
# 112 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyPostVictory
# 113 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 114 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 115 "data/maps/SaffronCity_Gym/scripts.pory"

# 116 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymStatue::
# 117 "data/maps/SaffronCity_Gym/scripts.pory"
	lockall
# 118 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
# 119 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatue
# 120 "data/maps/SaffronCity_Gym/scripts.pory"
	releaseall
# 121 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 122 "data/maps/SaffronCity_Gym/scripts.pory"

# 123 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymStatuePostVictory::
# 124 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
# 125 "data/maps/SaffronCity_Gym/scripts.pory"
	releaseall
# 126 "data/maps/SaffronCity_Gym/scripts.pory"
	end
