# 1 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 2 "data/maps/ThreeIsland_BerryForest/scripts.pory"
.set LOCALID_LOSTELLE, 1
# 3 "data/maps/ThreeIsland_BerryForest/scripts.pory"
.set LOCALID_CELEBI, 14
# 4 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 5 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_MapScripts::
# 6 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_BerryForest_OnTransition
# 7 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ThreeIsland_BerryForest_OnResume
# 8 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.byte 0
# 9 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 10 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_OnResume::
# 11 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, ThreeIsland_BerryForest_EventScript_TryRemoveCelebi
# 12 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 13 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 14 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_TryRemoveCelebi::
# 15 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 17 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 18 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	return
# 19 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 20 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_OnTransition::
# 21 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
# 22 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setescapewarp MAP_THREE_ISLAND_BOND_BRIDGE, 12, 6
# 23 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special CheckGotAllItems
# 24 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, ThreeIsland_BerryForest_YesItem
# 25 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 26 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 27 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_YesItem::
# 28 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_unset FLAG_FOUGHT_CELEBI, ThreeIsland_BerryForest_EventScript_ShowCelebi
# 29 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 30 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 31 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_ShowCelebi::
# 32 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_CELEBI
# 33 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	return
# 34 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 35 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Celebi::
# 36 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 37 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special QuestLog_CutRecording
# 38 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 39 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 40 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setwildbattle SPECIES_CELEBI, 50
# 41 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitse
# 42 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 43 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	message Text_Gyaoo
# 44 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmessage
# 45 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmoncry
# 46 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay 10
# 47 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 48 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitbuttonpress
# 49 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 50 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special StartLegendaryBattle
# 51 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitstate
# 52 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 53 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ThreeIsland_BerryForest_EventScript_DefeatedCelebi
# 55 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ThreeIsland_BerryForest_EventScript_RanFromCelebi
# 56 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ThreeIsland_BerryForest_EventScript_RanFromCelebi
# 57 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_FOUGHT_CELEBI
# 58 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_SPAWN_CELEBI
# 59 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 60 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 61 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 62 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_DefeatedCelebi::
# 63 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_FOUGHT_CELEBI
# 64 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_SPAWN_CELEBI
# 65 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto EventScript_RemoveStaticMon
# 66 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 67 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 68 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_RanFromCelebi::
# 69 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setvar VAR_0x8004, SPECIES_CELEBI
# 70 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto EventScript_MonFlewAway
# 71 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 72 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 73 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Lostelle::
# 74 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 75 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 76 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HelpScaryPokemon
# 77 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playse SE_PIN
# 78 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_LOSTELLE, Common_Movement_ExclamationMark
# 79 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 80 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_LOSTELLE, ThreeIsland_BerryForest_Movement_LostelleLookAround
# 81 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 82 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HereItComesAgain
# 83 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 84 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitse
# 85 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
# 86 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmoncry
# 87 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setwildbattle SPECIES_HYPNO, 50
# 88 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	dowildbattle
# 89 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special QuestLog_CutRecording
# 90 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_LOSTELLE, Common_Movement_FacePlayer
# 91 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 92 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_ThankYouHaveThis
# 93 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 94 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, ThreeIsland_BerryForest_EventScript_NoRoomForBerry
# 95 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special BufferBigGuyOrBigGirlString
# 96 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_LetsGoHome
# 97 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	closemessage
# 98 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_RESCUED_LOSTELLE
# 99 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST
# 100 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
# 101 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 102 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	warp MAP_TWO_ISLAND_JOYFUL_GAME_CORNER, 6, 6
# 103 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitstate
# 104 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 105 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 106 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 107 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_NoRoomForBerry::
# 108 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BerryPouchIsFull
# 109 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	return
# 110 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 111 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Movement_LostelleLookAround::
# 112 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_left
# 113 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay_16
# 114 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_right
# 115 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay_8
# 116 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_left
# 117 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	step_end
# 118 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 119 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_WelcomeSign::
# 120 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_WelcomeToBerryForest, MSGBOX_SIGN
# 121 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 122 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 123 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_BewareSign::
# 124 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons, MSGBOX_SIGN
# 125 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 126 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 127 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_CruelKing::
# 128 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 129 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 130 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_set FLAG_CRUELKING_DEFEATED, ThreeIsland_BerryForest_EventScript_RematchCruelKing
# 131 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_CruelKing, MSGBOX_YESNO
# 132 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_BerryForest_EventScript_NoCruelKing
# 133 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_CRUEL_KING, ThreeIsland_BerryForest_Text_YesCruelKing, ThreeIsland_BerryForest_Text_CruelKingDefeat, ThreeIsland_BerryForest_EventScript_PostCruelKing, NO_MUSIC
# 134 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 135 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 136 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 137 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_PostCruelKing::
# 138 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_CruelKingPostBattle
# 139 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_CRUELKING_DEFEATED
# 140 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 141 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 142 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 143 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_CantRematchCruelKing::
# 144 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_CruelKingPostBattle
# 145 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 146 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 147 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 148 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_NoCruelKing::
# 149 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_NoCruelKing
# 150 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 151 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 152 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 153 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_RematchCruelKing::
# 154 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_RematchCruelKing, MSGBOX_YESNO
# 155 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_BerryForest_EventScript_NoCruelKing
# 156 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_CRUEL_KING, ThreeIsland_BerryForest_Text_YesRematchCruelKing, ThreeIsland_BerryForest_Text_RematchCruelKingDefeat, ThreeIsland_BerryForest_EventScript_PostRematchCruelKing, NO_MUSIC
# 157 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 158 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 159 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 160 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_PostRematchCruelKing::
# 161 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_RematchCruelKingDefeat
# 162 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	cleartrainerflag TRAINER_CRUEL_KING
# 163 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 164 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
