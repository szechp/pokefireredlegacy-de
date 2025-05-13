# 1 "data/maps/Route6_NorthEntrance/scripts.pory"

# 2 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_MapScripts::
# 3 "data/maps/Route6_NorthEntrance/scripts.pory"
	.byte 0
# 4 "data/maps/Route6_NorthEntrance/scripts.pory"

# 5 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_Guard::
# 6 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_HiHowsItGoing, MSGBOX_NPC
# 7 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_GUARD_TEA, Route6_NorthEntrance_EventScript_GiveTeaFight
# 8 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, Route6_NorthEntrance_EventScript_Rematch
# 9 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 10 "data/maps/Route6_NorthEntrance/scripts.pory"

# 11 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_Rematch::
# 12 "data/maps/Route6_NorthEntrance/scripts.pory"
	lock
# 13 "data/maps/Route6_NorthEntrance/scripts.pory"
	faceplayer
# 14 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_Whitney, MSGBOX_YESNO
# 15 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route6_NorthEntrance_EventScript_NoWhitney
# 16 "data/maps/Route6_NorthEntrance/scripts.pory"
	trainerbattle_single TRAINER_KINDLER, Route6_NorthEntrance_Text_YesWhitney, Route6_NorthEntrance_Text_WhitneyDefeat, Route6_NorthEntrance_EventScript_PostWhitney, NO_MUSIC
# 17 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 18 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 19 "data/maps/Route6_NorthEntrance/scripts.pory"

# 20 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_PostWhitney::
# 21 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_WhitneyPostBattle
# 22 "data/maps/Route6_NorthEntrance/scripts.pory"
	cleartrainerflag TRAINER_KINDLER
# 23 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 24 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 25 "data/maps/Route6_NorthEntrance/scripts.pory"

# 26 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_NoWhitney::
# 27 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_NoWhitney
# 28 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 29 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 30 "data/maps/Route6_NorthEntrance/scripts.pory"

# 31 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Text_Whitney::
# 32 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Oh, hi there, CHAMPION!\n"
# 33 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "You must have had a hard\l"
# 34 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "time in the LEAGUE!\p"
# 35 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Probably tough with us\n"
# 36 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "being so thirsty too…\p"
# 37 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Anyways, I was wondering\n"
# 38 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "if I could battle you.\l"
# 39 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "It's boring standing here.$"
# 40 "data/maps/Route6_NorthEntrance/scripts.pory"

# 41 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Text_WhitneyDefeat::
# 42 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Ah, that was a good fight.$"
# 43 "data/maps/Route6_NorthEntrance/scripts.pory"

# 44 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Text_WhitneyPostBattle::
# 45 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Thanks!$"
# 46 "data/maps/Route6_NorthEntrance/scripts.pory"

# 47 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Text_NoWhitney::
# 48 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Alright then…$"
# 49 "data/maps/Route6_NorthEntrance/scripts.pory"

# 50 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Text_YesWhitney::
# 51 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Thanks, CHAMPION!\n"
# 52 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "I won't hold back!$"
# 53 "data/maps/Route6_NorthEntrance/scripts.pory"

# 54 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GiveTeaFight::
# 55 "data/maps/Route6_NorthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 56 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardDrinkFightTea
# 57 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 58 "data/maps/Route6_NorthEntrance/scripts.pory"

# 59 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardDrinkFightTea::
# 60 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThatFightTeaLooksTasty
# 61 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 62 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThanksIllShareFightTeaWithGuards
# 63 "data/maps/Route6_NorthEntrance/scripts.pory"
	giveitem ITEM_NUGGET
# 64 "data/maps/Route6_NorthEntrance/scripts.pory"
	clearflag FLAG_GUARD_TEA
# 65 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 66 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 67 "data/maps/Route6_NorthEntrance/scripts.pory"

# 68 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerLeft::
# 69 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 70 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 71 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 72 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 73 "data/maps/Route6_NorthEntrance/scripts.pory"

# 74 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerMid::
# 75 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 76 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 77 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 78 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 79 "data/maps/Route6_NorthEntrance/scripts.pory"

# 80 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerRight::
# 81 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 82 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 2
# 83 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 84 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 85 "data/maps/Route6_NorthEntrance/scripts.pory"

# 86 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTrigger::
# 87 "data/maps/Route6_NorthEntrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 88 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 89 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE Route6_NorthEntrance_EventScript_BattleGuard
# 91 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route6_NorthEntrance_EventScript_GiveTea
# 92 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThirstyOnGuardDuty
# 93 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 94 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_BlockPlayerEntry
# 95 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 97 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 98 "data/maps/Route6_NorthEntrance/scripts.pory"

# 99 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_BattleGuard::
# 100 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_FightGuard MSGBOX_YESNO
# 101 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route6_NorthEntrance_EventScript_NoGuard
# 102 "data/maps/Route6_NorthEntrance/scripts.pory"
	trainerbattle_single TRAINER_RANDOM_GRUNT, Route6_NorthEntrance_Text_RematchYesSurge, Route6_NorthEntrance_Text_RematchSurgeDefeat, Route6_NorthEntrance_EventScript_PostGuard, NO_MUSIC
# 103 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 104 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 105 "data/maps/Route6_NorthEntrance/scripts.pory"

# 106 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_NoGuard::
# 107 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_NoFightGuard
# 108 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 109 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_BlockPlayerEntry
# 110 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 112 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 113 "data/maps/Route6_NorthEntrance/scripts.pory"

# 114 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_PostGuard::
# 115 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_PostGuard 
# 116 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 117 "data/maps/Route6_NorthEntrance/scripts.pory"
	setflag FLAG_GUARD_TEA
# 118 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 119 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 120 "data/maps/Route6_NorthEntrance/scripts.pory"

# 121 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GiveTea::
# 122 "data/maps/Route6_NorthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 123 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardDrinkTea
# 124 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 125 "data/maps/Route6_NorthEntrance/scripts.pory"

# 126 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardDrinkTea::
# 127 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThatTeaLooksTasty
# 128 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 129 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route6_NorthEntrance_EventScript_WalkToGuardLeft
# 130 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route6_NorthEntrance_EventScript_WalkToGuardMid
# 131 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route6_NorthEntrance_EventScript_WalkToGuardRight
# 132 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThanksIllShareTeaWithGuards
# 133 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 134 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 135 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 136 "data/maps/Route6_NorthEntrance/scripts.pory"

# 137 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardLeft::
# 138 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardLeft
# 139 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 141 "data/maps/Route6_NorthEntrance/scripts.pory"

# 142 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardMid::
# 143 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardMid
# 144 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 146 "data/maps/Route6_NorthEntrance/scripts.pory"

# 147 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardRight::
# 148 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardRight
# 149 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 151 "data/maps/Route6_NorthEntrance/scripts.pory"

# 152 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardLeft::
# 153 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 154 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 155 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 156 "data/maps/Route6_NorthEntrance/scripts.pory"

# 157 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardMid::
# 158 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 159 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 160 "data/maps/Route6_NorthEntrance/scripts.pory"

# 161 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardRight::
# 162 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_in_place_right
# 163 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 164 "data/maps/Route6_NorthEntrance/scripts.pory"

# 165 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_BlockPlayerEntry::
# 166 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_down
# 167 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
