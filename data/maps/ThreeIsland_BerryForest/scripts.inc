# 1 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 2 "data/maps/ThreeIsland_BerryForest/scripts.pory"
.set LOCALID_LOSTELLE, 1
# 3 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 4 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_MapScripts::
# 5 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_BerryForest_OnTransition
# 6 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ThreeIsland_BerryForest_OnResume
# 7 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.byte 0
# 8 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 9 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_OnResume::
# 10 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, ThreeIsland_BerryForest_EventScript_TryRemoveCelebi
# 11 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 12 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 13 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_TryRemoveCelebi::
# 14 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 16 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	return
# 18 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 19 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_OnTransition::
# 20 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
# 21 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setescapewarp MAP_THREE_ISLAND_BOND_BRIDGE, 12, 6
# 22 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special CheckGotAllItems
# 23 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, ThreeIsland_BerryForest_YesItem
# 24 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 25 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 26 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_YesItem::
# 27 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_unset FLAG_FOUGHT_CELEBI, ThreeIsland_BerryForest_EventScript_ShowCelebi
# 28 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 29 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 30 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_ShowCelebi::
# 31 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_CELEBI
# 32 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	return
# 33 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 34 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Celebi::
# 35 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 36 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special QuestLog_CutRecording
# 37 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 38 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 39 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setwildbattle SPECIES_CELEBI, 50
# 40 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitse
# 41 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 42 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	message Text_Gyaoo
# 43 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmessage
# 44 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmoncry
# 45 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay 10
# 46 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 47 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitbuttonpress
# 48 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 49 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special StartLegendaryBattle
# 50 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitstate
# 51 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 52 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 53 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ThreeIsland_BerryForest_EventScript_DefeatedCelebi
# 54 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ThreeIsland_BerryForest_EventScript_RanFromCelebi
# 55 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ThreeIsland_BerryForest_EventScript_RanFromCelebi
# 56 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_FOUGHT_CELEBI
# 57 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_SPAWN_CELEBI
# 58 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 59 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 60 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 61 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_DefeatedCelebi::
# 62 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_FOUGHT_CELEBI
# 63 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto EventScript_RemoveStaticMon
# 64 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 65 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 66 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_RanFromCelebi::
# 67 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setvar VAR_0x8004, SPECIES_CELEBI
# 68 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto EventScript_MonFlewAway
# 69 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 70 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 71 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Lostelle::
# 72 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 73 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 74 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HelpScaryPokemon
# 75 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playse SE_PIN
# 76 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_LOSTELLE, Common_Movement_ExclamationMark
# 77 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 78 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_LOSTELLE, ThreeIsland_BerryForest_Movement_LostelleLookAround
# 79 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 80 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HereItComesAgain
# 81 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 82 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitse
# 83 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
# 84 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmoncry
# 85 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setwildbattle SPECIES_HYPNO, 50
# 86 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	dowildbattle
# 87 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special QuestLog_CutRecording
# 88 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_LOSTELLE, Common_Movement_FacePlayer
# 89 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 90 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_ThankYouHaveThis
# 91 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 92 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, ThreeIsland_BerryForest_EventScript_NoRoomForBerry
# 93 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special BufferBigGuyOrBigGirlString
# 94 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_LetsGoHome
# 95 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	closemessage
# 96 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_RESCUED_LOSTELLE
# 97 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST
# 98 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
# 99 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 100 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	warp MAP_TWO_ISLAND_JOYFUL_GAME_CORNER, 6, 6
# 101 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitstate
# 102 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 103 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 104 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 105 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_NoRoomForBerry::
# 106 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BerryPouchIsFull
# 107 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	return
# 108 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 109 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Movement_LostelleLookAround::
# 110 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_left
# 111 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay_16
# 112 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_right
# 113 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay_8
# 114 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_left
# 115 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	step_end
# 116 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 117 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_WelcomeSign::
# 118 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_WelcomeToBerryForest, MSGBOX_SIGN
# 119 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 120 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 121 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_BewareSign::
# 122 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons, MSGBOX_SIGN
# 123 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 124 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 125 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_CruelKing::
# 126 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_set FLAG_GET_AURORA, ThreeIsland_BerryForest_EventScript_RematchCruelKing
# 127 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_set FLAG_CRUELKING_DEFEATED, ThreeIsland_BerryForest_EventScript_CantRematchCruelKing
# 128 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_CruelKing, MSGBOX_YESNO
# 129 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_BerryForest_EventScript_NoCruelKing
# 130 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_CRUEL_KING, ThreeIsland_BerryForest_Text_YesCruelKing, ThreeIsland_BerryForest_Text_CruelKingDefeat, ThreeIsland_BerryForest_EventScript_PostCruelKing, NO_MUSIC
# 131 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 132 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 133 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 134 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_PostCruelKing::
# 135 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_CruelKingPostBattle
# 136 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_CRUELKING_DEFEATED
# 137 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 138 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 139 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 140 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_CantRematchCruelKing::
# 141 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_CruelKingPostBattle
# 142 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 143 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 144 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 145 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_NoCruelKing::
# 146 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_NoCruelKing
# 147 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 148 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 149 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 150 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_RematchCruelKing::
# 151 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_RematchCruelKing, MSGBOX_YESNO
# 152 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_BerryForest_EventScript_NoCruelKing
# 153 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_CRUEL_KING, ThreeIsland_BerryForest_Text_YesRematchCruelKing, ThreeIsland_BerryForest_Text_RematchCruelKingDefeat, ThreeIsland_BerryForest_EventScript_PostRematchCruelKing, NO_MUSIC
# 154 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 155 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 156 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 157 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_PostRematchCruelKing::
# 158 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_RematchCruelKingDefeat
# 159 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	cleartrainerflag TRAINER_CRUEL_KING
# 160 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 161 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
