# 1 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 2 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_MapScripts::
# 3 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.byte 0
# 4 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 5 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_BrailleMessage::
# 6 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	lockall
# 7 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setvar VAR_0x8005, 130
# 8 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MtEmber_RubyPath_B5F_EventScript_Pokemon
# 9 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_Everything
# 10 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning1
# 11 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_Existence
# 12 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning2
# 13 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_BeingAlive
# 14 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning3
# 15 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HaveDreams
# 16 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage Braille_Text_UsePower
# 17 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	releaseall
# 19 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 20 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 21 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Pokemon::
# 22 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	message MtEmber_RubyPath_B5F_Text_Notice
# 23 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmessage
# 24 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playse SE_PIN
# 25 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 26 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmovement 0
# 27 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 40
# 28 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_Mon, MSGBOX_YESNO
# 29 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	closemessage
# 30 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 40
# 31 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtEmber_RubyPath_B5F_EventScript_NoWhitney
# 32 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto MtEmber_RubyPath_B5F_EventScript_Pokemon2
# 33 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 34 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 35 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_NoWhitney::
# 36 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	lock
# 37 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	faceplayer
# 38 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_SummonMon4
# 39 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playse SE_PIN
# 40 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 41 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmovement 0
# 42 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 43 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitse
# 44 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
# 45 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmoncry
# 46 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 47 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setwildbattle SPECIES_BLASTOISE, 75
# 48 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	dowildbattle
# 49 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	special QuestLog_CutRecording
# 50 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto MtEmber_RubyPath_B5F_EventScript_Pokemon3
# 51 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 52 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_Mon::
# 53 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "There's a Pokemon sealed\n"
# 54 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "in this room.$"
# 55 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "Want to release it?$"
# 56 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 57 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_SummonMon4::
# 58 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "Despite your disapproval,\n"
# 59 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "a different POKEMON than\l"
# 60 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "what's sealed appears\l"
# 61 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "in your mind?$"
# 62 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_Notice::
# 63 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "(You noticed a voice in the air.)\p"
# 64 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "(Perhaps it's the orb?)$"
# 65 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Pokemon2::
# 66 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	lock
# 67 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	faceplayer
# 68 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_SummonMon
# 69 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playse SE_PIN
# 70 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 71 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmovement 0
# 72 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 73 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitse
# 74 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.ifdef FIRERED
# 75 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 76 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmoncry
# 77 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 78 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 75
# 79 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.else
# 80 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.ifdef LEAFGREEN
# 81 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 82 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmoncry
# 83 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 84 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setwildbattle SPECIES_VENUSAUR, 75
# 85 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.endif
# 86 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.endif
# 87 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	dowildbattle
# 88 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	special QuestLog_CutRecording
# 89 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto MtEmber_RubyPath_B5F_EventScript_Pokemon3
# 90 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 91 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Pokemon3::
# 92 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_SummonMon2
# 93 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	clearflag FLAG_0x020
# 94 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 95 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 96 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_SummonMon2::
# 97 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "The room sealed itself\n"
# 98 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "from the Shining POKEMON!$"
# 99 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_SummonMon::
# 100 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "The shining POKEMON\n"
# 101 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "appears in your mind?$"
