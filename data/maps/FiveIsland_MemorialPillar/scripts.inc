# 1 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 2 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
.set LOCALID_MEMORIAL_MAN, 1
# 3 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 4 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_MapScripts::
# 5 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.byte 0
# 6 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 7 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan::
# 8 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 9 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
# 10 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
# 11 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 12 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 13 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 14 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 15 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 16 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 17 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 18 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 19 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
# 20 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 21 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 22 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 23 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
# 24 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
# 25 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 26 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 27 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 28 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
# 29 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 30 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 31 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 32 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 33 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 34 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 35 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 36 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial::
# 37 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 38 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	special QuestLog_CutRecording
# 39 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lockall
# 40 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 41 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 42 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
# 43 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	checkitem ITEM_LEMONADE
# 44 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
# 45 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 46 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 47 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 48 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
# 49 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 50 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FiveIsland_MemorialPillar_EventScript_PlaceLemonade
# 51 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 52 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 53 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 54 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
# 55 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeitem ITEM_LEMONADE
# 56 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 57 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 58 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 59 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 60 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 61 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 63 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 64 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 65 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 66 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 67 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 68 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 69 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 70 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 71 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
# 72 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 73 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 74 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 75 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
# 76 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	return
# 77 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 78 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
# 79 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 80 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 81 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 82 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 83 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 84 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
# 85 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 86 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 87 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 88 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 89 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Oman::
# 90 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 91 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	faceplayer
# 92 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_OMAN_DEFEATED, FiveIsland_MemorialPillar_EventScript_RematchOman
# 93 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_Oman, MSGBOX_YESNO
# 94 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_MemorialPillar_EventScript_NoOman
# 95 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	trainerbattle_single TRAINER_OMAN, FiveIsland_MemorialPillar_Text_YesOman, FiveIsland_MemorialPillar_Text_OmanDefeat, FiveIsland_MemorialPillar_EventScript_PostOman, NO_MUSIC
# 96 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 97 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 98 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 99 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PostOman::
# 100 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_OmanPostBattle
# 101 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_OMAN_DEFEATED
# 102 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	cleartrainerflag TRAINER_OMAN
# 103 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 104 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 105 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 106 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CantRematchOman::
# 107 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_OmanPostBattle
# 108 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 109 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 110 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 111 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoOman::
# 112 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_NoOman
# 113 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 114 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 115 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 116 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_RematchOman::
# 117 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_RematchOman, MSGBOX_YESNO
# 118 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_MemorialPillar_EventScript_NoOman
# 119 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	trainerbattle_single TRAINER_OMAN, FiveIsland_MemorialPillar_Text_YesRematchOman, FiveIsland_MemorialPillar_Text_RematchOmanDefeat, FiveIsland_MemorialPillar_EventScript_PostRematchOman, NO_MUSIC
# 120 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 121 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 122 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 123 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PostRematchOman::
# 124 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_RematchOmanDefeat
# 125 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	cleartrainerflag TRAINER_OMAN
# 126 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	message Text_6Leaders
# 127 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 128 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 129 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 130 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest::
# 131 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest, MSGBOX_NPC
# 132 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	special CheckGotAllItems
# 133 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_CelebiQuest2	
# 134 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 135 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 136 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 137 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest2::
# 138 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest2
# 139 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_SPAWN_CELEBI
# 140 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_OLD_LEAD
# 141 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	fadescreen FADE_TO_BLACK
# 142 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 143 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 144 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 145 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 146 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest::
# 147 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "There was once an Onix, and his\n"  
# 148 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "six Pokémon friends:\l"  
# 149 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Charmander, Delibird, Psyduck,\l"  
# 150 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Meowth, Larvitar, and Natu.\p"  
# 151 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "They all used to play in the\n"  
# 152 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Forest of Berries, having fun\l"  
# 153 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "of all magnitudes, and enjoying\l"  
# 154 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Many Berries.\p"  
# 155 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "After that, they returned home.\p"  
# 156 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Charmander went to the top\n"  
# 157 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "of the Mountain of Embers,\l"  
# 158 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Delibird to the basement of Ice,\l"  
# 159 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Psyduck to the land beneath\l"  
# 160 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "a waterfall.\p"  
# 161 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Meowth to a beach of treasures,\n"  
# 162 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Larvitar to the peaks of the\l"  
# 163 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Canyon, Natu down the Cave\l"  
# 164 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "of Mystery, and Onix to\l"  
# 165 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "his own island.$"  
# 166 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 167 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest2::
# 168 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "You feel a distant AURA\n"  
# 169 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Somewhere...$"
