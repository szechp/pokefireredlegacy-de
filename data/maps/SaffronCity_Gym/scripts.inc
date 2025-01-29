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
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
# 8 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SaffronCity_Gym_EventScript_RematchSabrina
# 9 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_EventScript_GiveTM04
# 10 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainTM04
# 11 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 12 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 13 "data/maps/SaffronCity_Gym/scripts.pory"

# 14 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_DefeatedSabrina::
# 15 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 2
# 16 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 3
# 17 "data/maps/SaffronCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
# 18 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_SABRINA
# 19 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 20 "data/maps/SaffronCity_Gym/scripts.pory"
	set_gym_trainers 6
# 21 "data/maps/SaffronCity_Gym/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04
# 22 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 23 "data/maps/SaffronCity_Gym/scripts.pory"

# 24 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GiveTM04::
# 25 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis
# 26 "data/maps/SaffronCity_Gym/scripts.pory"
	checkitemspace ITEM_TM04
# 27 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_Gym_EventScript_NoRoomForTM04
# 28 "data/maps/SaffronCity_Gym/scripts.pory"
	giveitem_msg SaffronCity_Gym_Text_ReceivedTM04FromSabrina, ITEM_TM04
# 29 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM04_FROM_SABRINA
# 30 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle
# 31 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 32 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 33 "data/maps/SaffronCity_Gym/scripts.pory"

# 34 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_NoRoomForTM04::
# 35 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_BagFullOfOtherItems
# 36 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 37 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 38 "data/maps/SaffronCity_Gym/scripts.pory"

# 39 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_RematchSabrina::
# 40 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_RematchSabrina, MSGBOX_YESNO
# 41 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Gym_EventScript_NoRematchSabrina
# 42 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA2, SaffronCity_Gym_Text_RematchYesSabrina, SaffronCity_Gym_Text_RematchSabrinaDefeat, SaffronCity_Gym_EventScript_PostRematchSabrina, NO_MUSIC
# 43 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 44 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 45 "data/maps/SaffronCity_Gym/scripts.pory"

# 46 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_PostRematchSabrina::
# 47 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostRematchBattle
# 48 "data/maps/SaffronCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_SABRINA2
# 49 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 50 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 51 "data/maps/SaffronCity_Gym/scripts.pory"

# 52 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_NoRematchSabrina::
# 53 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaNoRematchBattle
# 54 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 55 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 56 "data/maps/SaffronCity_Gym/scripts.pory"

# 57 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Johan::
# 58 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Text_JohanIntro, SaffronCity_Gym_Text_JohanDefeat
# 59 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 61 "data/maps/SaffronCity_Gym/scripts.pory"

# 62 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Tyron::
# 63 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Text_TyronIntro, SaffronCity_Gym_Text_TyronDefeat
# 64 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 5
# 65 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 67 "data/maps/SaffronCity_Gym/scripts.pory"

# 68 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Cameron::
# 69 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Text_CameronIntro, SaffronCity_Gym_Text_CameronDefeat
# 70 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 72 "data/maps/SaffronCity_Gym/scripts.pory"

# 73 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Preston::
# 74 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Text_PrestonIntro, SaffronCity_Gym_Text_PrestonDefeat
# 75 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 77 "data/maps/SaffronCity_Gym/scripts.pory"

# 78 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Amanda::
# 79 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Text_AmandaIntro, SaffronCity_Gym_Text_AmandaDefeat
# 80 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 82 "data/maps/SaffronCity_Gym/scripts.pory"

# 83 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Stacy::
# 84 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Text_StacyIntro, SaffronCity_Gym_Text_StacyDefeat
# 85 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 87 "data/maps/SaffronCity_Gym/scripts.pory"

# 88 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Tasha::
# 89 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Text_TashaIntro, SaffronCity_Gym_Text_TashaDefeat
# 90 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 92 "data/maps/SaffronCity_Gym/scripts.pory"

# 93 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymGuy::
# 94 "data/maps/SaffronCity_Gym/scripts.pory"
	lock
# 95 "data/maps/SaffronCity_Gym/scripts.pory"
	faceplayer
# 96 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_GymGuyPostVictory
# 97 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyAdvice
# 98 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 99 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 100 "data/maps/SaffronCity_Gym/scripts.pory"

# 101 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymGuyPostVictory::
# 102 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyPostVictory
# 103 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 104 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 105 "data/maps/SaffronCity_Gym/scripts.pory"

# 106 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymStatue::
# 107 "data/maps/SaffronCity_Gym/scripts.pory"
	lockall
# 108 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
# 109 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatue
# 110 "data/maps/SaffronCity_Gym/scripts.pory"
	releaseall
# 111 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 112 "data/maps/SaffronCity_Gym/scripts.pory"

# 113 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymStatuePostVictory::
# 114 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
# 115 "data/maps/SaffronCity_Gym/scripts.pory"
	releaseall
# 116 "data/maps/SaffronCity_Gym/scripts.pory"
	end
