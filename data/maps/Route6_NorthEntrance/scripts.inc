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
	end
# 9 "data/maps/Route6_NorthEntrance/scripts.pory"

# 10 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GiveTeaFight::
# 11 "data/maps/Route6_NorthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 12 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardDrinkFightTea
# 13 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 14 "data/maps/Route6_NorthEntrance/scripts.pory"

# 15 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardDrinkFightTea::
# 16 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThatFightTeaLooksTasty
# 17 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 18 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThanksIllShareFightTeaWithGuards
# 19 "data/maps/Route6_NorthEntrance/scripts.pory"
	giveitem ITEM_NUGGET
# 20 "data/maps/Route6_NorthEntrance/scripts.pory"
	clearflag FLAG_GUARD_TEA
# 21 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 22 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 23 "data/maps/Route6_NorthEntrance/scripts.pory"

# 24 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerLeft::
# 25 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 26 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 27 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 28 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 29 "data/maps/Route6_NorthEntrance/scripts.pory"

# 30 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerMid::
# 31 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 32 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 34 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 35 "data/maps/Route6_NorthEntrance/scripts.pory"

# 36 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerRight::
# 37 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 38 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 2
# 39 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 40 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 41 "data/maps/Route6_NorthEntrance/scripts.pory"

# 42 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTrigger::
# 43 "data/maps/Route6_NorthEntrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 44 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 45 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE Route6_NorthEntrance_EventScript_BattleGuard
# 47 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route6_NorthEntrance_EventScript_GiveTea
# 48 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThirstyOnGuardDuty
# 49 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 50 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_BlockPlayerEntry
# 51 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 53 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 54 "data/maps/Route6_NorthEntrance/scripts.pory"

# 55 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_BattleGuard::
# 56 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_FightGuard MSGBOX_YESNO
# 57 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route6_NorthEntrance_EventScript_NoGuard
# 58 "data/maps/Route6_NorthEntrance/scripts.pory"
	trainerbattle_single TRAINER_RANDOM_GRUNT, Route6_NorthEntrance_Text_RematchYesSurge, Route6_NorthEntrance_Text_RematchSurgeDefeat, Route6_NorthEntrance_EventScript_PostGuard, NO_MUSIC
# 59 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 60 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 61 "data/maps/Route6_NorthEntrance/scripts.pory"

# 62 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_NoGuard::
# 63 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_NoFightGuard
# 64 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 65 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_BlockPlayerEntry
# 66 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 68 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 69 "data/maps/Route6_NorthEntrance/scripts.pory"

# 70 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_PostGuard::
# 71 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_PostGuard 
# 72 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 73 "data/maps/Route6_NorthEntrance/scripts.pory"
	setflag FLAG_GUARD_TEA
# 74 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 75 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 76 "data/maps/Route6_NorthEntrance/scripts.pory"

# 77 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GiveTea::
# 78 "data/maps/Route6_NorthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 79 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardDrinkTea
# 80 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 81 "data/maps/Route6_NorthEntrance/scripts.pory"

# 82 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardDrinkTea::
# 83 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThatTeaLooksTasty
# 84 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 85 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route6_NorthEntrance_EventScript_WalkToGuardLeft
# 86 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route6_NorthEntrance_EventScript_WalkToGuardMid
# 87 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route6_NorthEntrance_EventScript_WalkToGuardRight
# 88 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThanksIllShareTeaWithGuards
# 89 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 90 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 91 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 92 "data/maps/Route6_NorthEntrance/scripts.pory"

# 93 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardLeft::
# 94 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardLeft
# 95 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 97 "data/maps/Route6_NorthEntrance/scripts.pory"

# 98 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardMid::
# 99 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardMid
# 100 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 102 "data/maps/Route6_NorthEntrance/scripts.pory"

# 103 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardRight::
# 104 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardRight
# 105 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 107 "data/maps/Route6_NorthEntrance/scripts.pory"

# 108 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardLeft::
# 109 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 110 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 111 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 112 "data/maps/Route6_NorthEntrance/scripts.pory"

# 113 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardMid::
# 114 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 115 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 116 "data/maps/Route6_NorthEntrance/scripts.pory"

# 117 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardRight::
# 118 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_in_place_right
# 119 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 120 "data/maps/Route6_NorthEntrance/scripts.pory"

# 121 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_BlockPlayerEntry::
# 122 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_down
# 123 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
