# 1 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 2 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_MapScripts::
# 3 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.byte 0
# 4 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 5 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Evvi::
# 6 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 7 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Evvi, MSGBOX_DEFAULT
# 8 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_SPATK, SevenIsland_House_Room2_Text_EvviPostBattle
# 9 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_SPATK
# 10 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 11 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 12 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 13 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Eva::
# 14 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 15 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Eva, MSGBOX_DEFAULT
# 16 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_HP, SevenIsland_House_Room2_Text_EvaPostBattle
# 17 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_HP
# 18 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 19 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 20 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 21 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Eve::
# 22 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 23 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Eve, MSGBOX_DEFAULT
# 24 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_DEFENSE, SevenIsland_House_Room2_Text_EvePostBattle
# 25 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_DEFENSE
# 26 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 27 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 28 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 29 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Evern::
# 30 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 31 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Evern, MSGBOX_DEFAULT
# 32 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_SPDEF, SevenIsland_House_Room2_Text_EvernPostBattle
# 33 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_SPDEF
# 34 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 36 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 37 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Evin::
# 38 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 39 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Evin, MSGBOX_DEFAULT
# 40 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_ATTACK, SevenIsland_House_Room2_Text_EvinPostBattle
# 41 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_ATTACK
# 42 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 43 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 44 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 45 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Evangelos::
# 46 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 47 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Evangelos, MSGBOX_DEFAULT
# 48 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_SPEED, SevenIsland_House_Room2_Text_EvangelosPostBattle
# 49 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_SPEED
# 50 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 51 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 52 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 53 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_IVCheck::
# 54 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lock
# 55 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 56 "data/maps/SevenIsland_House_Room2/scripts.pory"
	call EventScript_IVChecker
# 57 "data/maps/SevenIsland_House_Room2/scripts.pory"
	release
# 58 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 59 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 60 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_EVCheck::
# 61 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lock
# 62 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 63 "data/maps/SevenIsland_House_Room2/scripts.pory"
	call EventScript_EVChecker
# 64 "data/maps/SevenIsland_House_Room2/scripts.pory"
	release
# 65 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
