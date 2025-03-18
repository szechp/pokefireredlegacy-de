# 1 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 2 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
.set LOCALID_MEMORIAL_MAN, 1
# 3 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
.set LOCALID_OLD_LADY, 7
# 4 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
.set LOCALID_CELEBI, 8
# 5 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 6 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_MapScripts::
# 7 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.byte 0
# 8 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 9 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan::
# 10 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 11 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
# 12 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
# 13 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 14 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 15 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 16 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 17 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 18 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 19 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 20 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 21 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
# 22 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 23 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 24 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 25 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
# 26 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
# 27 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 28 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 29 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 30 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
# 31 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 32 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 33 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 34 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 35 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 36 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 37 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 38 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial::
# 39 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 40 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	special QuestLog_CutRecording
# 41 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lockall
# 42 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 43 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 44 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
# 45 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	checkitem ITEM_LEMONADE
# 46 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
# 47 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 48 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 49 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 50 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
# 51 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 52 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FiveIsland_MemorialPillar_EventScript_PlaceLemonade
# 53 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 54 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 55 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 56 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
# 57 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeitem ITEM_LEMONADE
# 58 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 59 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 60 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 61 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 62 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 63 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 64 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 65 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 66 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 67 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 68 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 69 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 70 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 71 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 72 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 73 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
# 74 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 75 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 76 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 77 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
# 78 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	return
# 79 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 80 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
# 81 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 82 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 83 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 84 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 85 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 86 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
# 87 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 88 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 89 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 90 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 91 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Oman::
# 92 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 93 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	faceplayer
# 94 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_OMAN_DEFEATED, FiveIsland_MemorialPillar_EventScript_RematchOman
# 95 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_Oman, MSGBOX_YESNO
# 96 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_MemorialPillar_EventScript_NoOman
# 97 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	trainerbattle_single TRAINER_OMAN, FiveIsland_MemorialPillar_Text_YesOman, FiveIsland_MemorialPillar_Text_OmanDefeat, FiveIsland_MemorialPillar_EventScript_PostOman, NO_MUSIC
# 98 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 99 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 100 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 101 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PostOman::
# 102 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_OmanPostBattle
# 103 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_OMAN_DEFEATED
# 104 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	cleartrainerflag TRAINER_OMAN
# 105 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 106 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 107 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 108 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CantRematchOman::
# 109 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_OmanPostBattle
# 110 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 111 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 112 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 113 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoOman::
# 114 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_NoOman
# 115 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 116 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 117 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 118 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_RematchOman::
# 119 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_RematchOman, MSGBOX_YESNO
# 120 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_MemorialPillar_EventScript_NoOman
# 121 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	trainerbattle_single TRAINER_OMAN, FiveIsland_MemorialPillar_Text_YesRematchOman, FiveIsland_MemorialPillar_Text_RematchOmanDefeat, FiveIsland_MemorialPillar_EventScript_PostRematchOman, NO_MUSIC
# 122 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 123 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 124 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 125 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PostRematchOman::
# 126 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_RematchOmanDefeat
# 127 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	cleartrainerflag TRAINER_OMAN
# 128 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	message Text_6Leaders
# 129 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 130 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 131 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 132 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest::
# 133 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_OLD_LEAD, FiveIsland_MemorialPillar_EventScript_CelebiQuest3
# 134 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	special CheckGotAllItems
# 135 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_CelebiQuest2	
# 136 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest, MSGBOX_NPC
# 137 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 138 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 139 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 140 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest2::
# 141 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_SPAWN_CELEBI
# 142 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	clearflag FLAG_CELEBI_EVENT
# 143 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_CELEBI, FiveIsland_MemorialPillar_Movement_Celebi
# 144 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 145 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitse
# 146 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playse SE_PIN
# 147 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_OLD_LADY, Common_Movement_FaceUp
# 148 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 149 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 150 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitse
# 151 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
# 152 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest2
# 153 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 154 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_CELEBI_EVENT
# 155 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	fadescreen FADE_TO_BLACK
# 156 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeobject 8
# 157 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 158 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_OLD_LEAD
# 159 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 160 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 161 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 162 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest3::
# 163 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest3, MSGBOX_NPC
# 164 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 165 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 166 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 167 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest::
# 168 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "There was once an ONIX, and his\n"  
    .string "six POKéMON friends:\l"  
    .string "CHARMANDER, DELIBIRD, PSYDUCK,\l"  
    .string "MEOWTH, LARVITAR, and NATU.\p"  
    .string "They used to play in the forest,\n"  
    .string "having fun and eating BERRIES.\p"  
    .string "After that, they returned home.\p"  
    .string "CHARMANDER went to the top\n"  
    .string "of the mountain of embers,\l"  
    .string "DELIBIRD to the basement of ice,\l"  
    .string "PSYDUCK to the land beneath\l"  
    .string "a waterfall.\p"  
    .string "MEOWTH to a beach of treasures,\n"  
    .string "LARVITAR to the peaks of the\l"  
    .string "canyon, NATU down the cave\l"  
    .string "of mystery, and ONIX to\l"  
    .string "his own island.$"  
# 187 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 188 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest2::
# 189 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Lululalala!$"
# 190 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 191 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest3::
# 192 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "What was that green thing?$"
# 193 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 194 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 195 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Movement_Celebi::
# 196 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 197 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 198 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 199 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 200 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 201 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	step_end
