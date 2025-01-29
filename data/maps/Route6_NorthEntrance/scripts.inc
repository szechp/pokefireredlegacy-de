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
	end
# 8 "data/maps/Route6_NorthEntrance/scripts.pory"

# 9 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerLeft::
# 10 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 11 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 12 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 13 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 14 "data/maps/Route6_NorthEntrance/scripts.pory"

# 15 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerMid::
# 16 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 17 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 19 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 20 "data/maps/Route6_NorthEntrance/scripts.pory"

# 21 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerRight::
# 22 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 23 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 2
# 24 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 25 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 26 "data/maps/Route6_NorthEntrance/scripts.pory"

# 27 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTrigger::
# 28 "data/maps/Route6_NorthEntrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 29 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 30 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE Route6_NorthEntrance_EventScript_BattleGuard
# 32 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route6_NorthEntrance_EventScript_GiveTea
# 33 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThirstyOnGuardDuty
# 34 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 35 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_BlockPlayerEntry
# 36 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 38 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 39 "data/maps/Route6_NorthEntrance/scripts.pory"

# 40 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_BattleGuard::
# 41 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_FightGuard MSGBOX_YESNO
# 42 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route6_NorthEntrance_Text_NoFightGuard
# 43 "data/maps/Route6_NorthEntrance/scripts.pory"
	trainerbattle_single TRAINER_RANDOM_GRUNT, Route6_NorthEntrance_Text_RematchYesSurge, Route6_NorthEntrance_Text_RematchSurgeDefeat, Route6_NorthEntrance_EventScript_PostGuard, NO_MUSIC
# 44 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 45 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 46 "data/maps/Route6_NorthEntrance/scripts.pory"

# 47 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_PostGuard::
# 48 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_PostGuard 
# 49 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 50 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 51 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 52 "data/maps/Route6_NorthEntrance/scripts.pory"

# 53 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GiveTea::
# 54 "data/maps/Route6_NorthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 55 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardDrinkTea
# 56 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 57 "data/maps/Route6_NorthEntrance/scripts.pory"

# 58 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardDrinkTea::
# 59 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThatTeaLooksTasty
# 60 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 61 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route6_NorthEntrance_EventScript_WalkToGuardLeft
# 62 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route6_NorthEntrance_EventScript_WalkToGuardMid
# 63 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route6_NorthEntrance_EventScript_WalkToGuardRight
# 64 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThanksIllShareTeaWithGuards
# 65 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 66 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 67 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 68 "data/maps/Route6_NorthEntrance/scripts.pory"

# 69 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardLeft::
# 70 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardLeft
# 71 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 73 "data/maps/Route6_NorthEntrance/scripts.pory"

# 74 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardMid::
# 75 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardMid
# 76 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 78 "data/maps/Route6_NorthEntrance/scripts.pory"

# 79 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardRight::
# 80 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardRight
# 81 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 83 "data/maps/Route6_NorthEntrance/scripts.pory"

# 84 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardLeft::
# 85 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 86 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 87 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 88 "data/maps/Route6_NorthEntrance/scripts.pory"

# 89 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardMid::
# 90 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 91 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 92 "data/maps/Route6_NorthEntrance/scripts.pory"

# 93 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardRight::
# 94 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_in_place_right
# 95 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 96 "data/maps/Route6_NorthEntrance/scripts.pory"

# 97 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_BlockPlayerEntry::
# 98 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_down
# 99 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
