# 1 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 2 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_MapScripts::
# 3 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 5 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Koga::
# 6 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_ContinueKoga
# 8 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, FuchsiaCity_Gym_EventScript_BeatSabrina
# 9 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 10 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_ContinueKoga
# 11 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_BeatSabrina::
# 12 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KOGA2, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 13 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_ContinueKoga
# 14 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_ContinueKoga::
# 15 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_EventScript_GiveTM06
# 16 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, FuchsiaCity_Gym_EventScript_RematchKoga
# 17 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostBattle
# 18 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 19 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 20 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 21 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_DefeatedKoga::
# 22 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 1
# 23 "data/maps/FuchsiaCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
# 24 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_KOGA
# 25 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 26 "data/maps/FuchsiaCity_Gym/scripts.pory"
	settrainerflag TRAINER_LEADER_KOGA
# 27 "data/maps/FuchsiaCity_Gym/scripts.pory"
	settrainerflag TRAINER_KOGA2
# 28 "data/maps/FuchsiaCity_Gym/scripts.pory"
	set_gym_trainers 5
# 29 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06
# 30 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 31 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 32 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GiveTM06::
# 33 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainSoulBadge
# 34 "data/maps/FuchsiaCity_Gym/scripts.pory"
	checkitemspace ITEM_TM06
# 35 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_Gym_EventScript_NoRoomForTM06
# 36 "data/maps/FuchsiaCity_Gym/scripts.pory"
	giveitem_msg FuchsiaCity_Gym_Text_ReceivedTM06FromKoga, ITEM_TM06
# 37 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM06_FROM_KOGA
# 38 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainTM06
# 39 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 40 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 41 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 42 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_NoRoomForTM06::
# 43 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_MakeSpaceForThis
# 44 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 45 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 46 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 47 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_RematchKoga::
# 48 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_RematchKoga, MSGBOX_YESNO
# 49 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_Gym_EventScript_NoRematchKoga
# 50 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA2, FuchsiaCity_Gym_Text_RematchYesKoga, FuchsiaCity_Gym_Text_RematchKogaDefeat, FuchsiaCity_Gym_EventScript_PostRematchKoga, NO_MUSIC
# 51 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 52 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 53 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 54 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_PostRematchKoga::
# 55 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostRematchBattle
# 56 "data/maps/FuchsiaCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_KOGA2   
# 57 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 58 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 59 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 60 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_NoRematchKoga::
# 61 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaNoRematchBattle
# 62 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 63 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 64 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 65 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Phil::
# 66 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Text_PhilIntro, FuchsiaCity_Gym_Text_PhilDefeat
# 67 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 69 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 70 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Edgar::
# 71 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Text_EdgarIntro, FuchsiaCity_Gym_Text_EdgarDefeat
# 72 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 74 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 75 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Kirk::
# 76 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Text_KirkIntro, FuchsiaCity_Gym_Text_KirkDefeat
# 77 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 2
# 78 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 80 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 81 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Shawn::
# 82 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Text_ShawnIntro, FuchsiaCity_Gym_Text_ShawnDefeat
# 83 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 85 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 86 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Kayden::
# 87 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Text_KaydenIntro, FuchsiaCity_Gym_Text_KaydenDefeat
# 88 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 90 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 91 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Nate::
# 92 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Text_NateIntro, FuchsiaCity_Gym_Text_NateDefeat
# 93 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 95 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 96 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuy::
# 97 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lock
# 98 "data/maps/FuchsiaCity_Gym/scripts.pory"
	faceplayer
# 99 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_GymGuyPostVictory
# 100 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyAdvice
# 101 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 102 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 103 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 104 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuyPostVictory::
# 105 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyPostVictory
# 106 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 107 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 108 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 109 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatue::
# 110 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lockall
# 111 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_EventScript_GymStatuePostVictory
# 112 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatue
# 113 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
# 114 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 115 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 116 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
# 117 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
# 118 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
# 119 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
