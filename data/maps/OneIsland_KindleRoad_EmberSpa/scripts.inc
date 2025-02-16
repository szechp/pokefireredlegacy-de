# 1 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 2 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_MapScripts::
# 3 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.byte 0
# 4 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 5 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_OldMan::
# 6 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore, MSGBOX_NPC
# 7 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 8 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 9 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan1::
# 10 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder, MSGBOX_NPC
# 11 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 12 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 13 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan2::
# 14 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic, MSGBOX_NPC
# 15 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 16 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 17 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_OldWoman::
# 18 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs, MSGBOX_NPC
# 19 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 20 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 21 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_BlackBelt::
# 22 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lock
# 23 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	faceplayer
# 24 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 3
# 25 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion
# 26 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 27 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 28 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 29 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_RockSmashMan::
# 30 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lock
# 31 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	faceplayer
# 32 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	goto_if_set FLAG_GOT_HM06, OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06
# 33 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa
# 34 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	giveitem ITEM_BRICK_PIECE
# 35 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	setflag FLAG_GOT_HM06
# 36 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
# 37 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 38 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 39 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 40 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06::
# 41 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
# 42 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 43 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 44 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 45 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_SpaHeal::
# 46 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lockall
# 47 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	fadescreen FADE_TO_WHITE
# 48 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	special HealPlayerParty
# 49 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 50 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed
# 51 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	setvar VAR_TEMP_1, 1
# 52 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	releaseall
# 53 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 54 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 55 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_Samal::
# 56 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lock
# 57 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	faceplayer
# 58 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	goto_if_set FLAG_SAMAL_DEFEATED, OneIsland_KindleRoad_EmberSpa_EventScript_RematchSamal
# 59 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_Samal, MSGBOX_YESNO
# 60 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_KindleRoad_EmberSpa_EventScript_NoSamal
# 61 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	trainerbattle_single TRAINER_SAMAL, OneIsland_KindleRoad_EmberSpa_Text_YesSamal, OneIsland_KindleRoad_EmberSpa_Text_SamalDefeat, OneIsland_KindleRoad_EmberSpa_EventScript_PostSamal, NO_MUSIC
# 62 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 63 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 64 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 65 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_PostSamal::
# 66 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SamalPostBattle
# 67 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	setflag FLAG_SAMAL_DEFEATED
# 68 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	cleartrainerflag TRAINER_SAMAL
# 69 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 70 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 71 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 72 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_CantRematchSamal::
# 73 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SamalPostBattle
# 74 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 75 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 76 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 77 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_NoSamal::
# 78 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_NoSamal
# 79 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 80 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 81 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 82 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_RematchSamal::
# 83 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_RematchSamal, MSGBOX_YESNO
# 84 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_KindleRoad_EmberSpa_EventScript_NoSamal
# 85 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	trainerbattle_single TRAINER_SAMAL, OneIsland_KindleRoad_EmberSpa_Text_YesRematchSamal, OneIsland_KindleRoad_EmberSpa_Text_RematchSamalDefeat, OneIsland_KindleRoad_EmberSpa_EventScript_PostRematchSamal, NO_MUSIC
# 86 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 87 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 88 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 89 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_PostRematchSamal::
# 90 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_RematchSamalDefeat
# 91 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	cleartrainerflag TRAINER_SAMAL
# 92 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 93 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 94 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 95 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_Gym1::
# 96 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	trainerbattle_single TRAINER_CYCLING_TRIATHLETE_M, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
# 97 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 99 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 100 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_Gym2::
# 101 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	trainerbattle_single TRAINER_CYCLING_TRIATHLETE_F, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
# 102 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
