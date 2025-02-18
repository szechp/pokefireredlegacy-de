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
	cleartrainerflag TRAINER_CRUEL_KING
# 141 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 142 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 143 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 144 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_CantRematchCruelKing::
# 145 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_CruelKingPostBattle
# 146 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 147 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 148 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 149 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_NoCruelKing::
# 150 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_NoCruelKing
# 151 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 152 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 153 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 154 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_RematchCruelKing::
# 155 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_RematchCruelKing, MSGBOX_YESNO
# 156 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_BerryForest_EventScript_NoCruelKing
# 157 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_CRUEL_KING, ThreeIsland_BerryForest_Text_YesRematchCruelKing, ThreeIsland_BerryForest_Text_RematchCruelKingDefeat, ThreeIsland_BerryForest_EventScript_PostRematchCruelKing, NO_MUSIC
# 158 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 159 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 160 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 161 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_PostRematchCruelKing::
# 162 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_RematchCruelKingDefeat
# 163 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	cleartrainerflag TRAINER_CRUEL_KING
# 164 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 165 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 166 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 167 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Gym1::
# 168 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_SWIMMING_TRIATHLETE_F, ThreeIsland_BerryForest_Text_Rocket1Intro, ThreeIsland_BerryForest_Text_Rocket1Defeat
# 169 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 171 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 172 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket1Intro::
# 173 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "How dare you step into this\n"
# 174 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "forest, This is the domain\l"
# 175 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "of the Cruel King of the\l"
# 176 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "forest!$"
# 177 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 178 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket1Defeat::
# 179 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "You got this one.$"
# 180 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 181 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket1PostBattle::
# 182 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "The Cruel King is not to be\n"
# 183 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "messed with$"
# 184 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 185 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Gym2::
# 186 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_SR_AND_JR, ThreeIsland_BerryForest_Text_Rocket2Intro, ThreeIsland_BerryForest_Text_Rocket2Defeat
# 187 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 189 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 190 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket2Intro::
# 191 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Honestly I just like playing\n"
# 192 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "in the berry forest\p"
# 193 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket2Defeat::
# 194 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Oh Wow!$"
# 195 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 196 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket2PostBattle::
# 197 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Despite His Name The Cruel King\n"
# 198 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "is actually pretty nice, he\l"
# 199 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "just acts that way as an act$"
# 200 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 201 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 202 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Gym3::
# 203 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_POKEFAN_F, ThreeIsland_BerryForest_Text_Rocket3Intro, ThreeIsland_BerryForest_Text_Rocket3Defeat
# 204 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 206 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 207 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket3Intro::
# 208 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Oh, you think you can take on\n"
# 209 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "the Cruel King? I don't even\l"
# 210 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "think you could beat me! You\l"
# 211 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "see, in this forest, I had a\l"
# 212 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "revelation. The most important\l"
# 213 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "thing in this world is pure,\l"
# 214 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "unadulterated power!\p"
# 215 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Alright {PLAYER}. WITNESS\n"
# 216 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "THE POWER!$"
# 217 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 218 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket3Defeat::
# 219 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "I admit... you've done well\n"
# 220 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "to win this battle.$"
# 221 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 222 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket3PostBattle::
# 223 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Do... what you have to do.\l"
# 224 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Fight the Cruel King!$"
