# 1 "data/maps/Route5_SouthEntrance/scripts.pory"

# 2 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_MapScripts::
# 3 "data/maps/Route5_SouthEntrance/scripts.pory"
	.byte 0
# 4 "data/maps/Route5_SouthEntrance/scripts.pory"

# 5 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_Guard::
# 6 "data/maps/Route5_SouthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_HiHowsItGoing, MSGBOX_NPC
# 7 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto_if_set FLAG_GUARD_TEA, Route5_SouthEntrance_EventScript_GiveTeaFight
# 8 "data/maps/Route5_SouthEntrance/scripts.pory"
	end
# 9 "data/maps/Route5_SouthEntrance/scripts.pory"

# 10 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_GiveTeaFight::
# 11 "data/maps/Route5_SouthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 12 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto Route5_SouthEntrance_EventScript_GuardDrinkFightTea
# 13 "data/maps/Route5_SouthEntrance/scripts.pory"
	end
# 14 "data/maps/Route5_SouthEntrance/scripts.pory"

# 15 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_GuardDrinkFightTea::
# 16 "data/maps/Route5_SouthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThatFightTeaLooksTasty
# 17 "data/maps/Route5_SouthEntrance/scripts.pory"
	closemessage
# 18 "data/maps/Route5_SouthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThanksIllShareFightTeaWithGuards
# 19 "data/maps/Route5_SouthEntrance/scripts.pory"
	giveitem ITEM_TM30_SHADOW_BALL
# 20 "data/maps/Route5_SouthEntrance/scripts.pory"
	clearflag FLAG_GUARD_TEA
# 21 "data/maps/Route5_SouthEntrance/scripts.pory"
	releaseall
# 22 "data/maps/Route5_SouthEntrance/scripts.pory"
	end
# 23 "data/maps/Route5_SouthEntrance/scripts.pory"

# 24 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_GuardTriggerLeft::
# 25 "data/maps/Route5_SouthEntrance/scripts.pory"
	lockall
# 26 "data/maps/Route5_SouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 27 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto Route5_SouthEntrance_EventScript_GuardTrigger
# 28 "data/maps/Route5_SouthEntrance/scripts.pory"
	end
# 29 "data/maps/Route5_SouthEntrance/scripts.pory"

# 30 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_GuardTriggerMid::
# 31 "data/maps/Route5_SouthEntrance/scripts.pory"
	lockall
# 32 "data/maps/Route5_SouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto Route5_SouthEntrance_EventScript_GuardTrigger
# 34 "data/maps/Route5_SouthEntrance/scripts.pory"
	end
# 35 "data/maps/Route5_SouthEntrance/scripts.pory"

# 36 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_GuardTriggerRight::
# 37 "data/maps/Route5_SouthEntrance/scripts.pory"
	lockall
# 38 "data/maps/Route5_SouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 2
# 39 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto Route5_SouthEntrance_EventScript_GuardTrigger
# 40 "data/maps/Route5_SouthEntrance/scripts.pory"
	end
# 41 "data/maps/Route5_SouthEntrance/scripts.pory"

# 42 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_GuardTrigger::
# 43 "data/maps/Route5_SouthEntrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 44 "data/maps/Route5_SouthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 45 "data/maps/Route5_SouthEntrance/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route5_SouthEntrance_EventScript_GiveTea
# 47 "data/maps/Route5_SouthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThirstyOnGuardDuty
# 48 "data/maps/Route5_SouthEntrance/scripts.pory"
	closemessage
# 49 "data/maps/Route5_SouthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route5_SouthEntrance_Movement_BlockPlayerEntry
# 50 "data/maps/Route5_SouthEntrance/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route5_SouthEntrance/scripts.pory"
	releaseall
# 52 "data/maps/Route5_SouthEntrance/scripts.pory"
	end
# 53 "data/maps/Route5_SouthEntrance/scripts.pory"

# 54 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_GiveTea::
# 55 "data/maps/Route5_SouthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 56 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto Route5_SouthEntrance_EventScript_GuardDrinkTea
# 57 "data/maps/Route5_SouthEntrance/scripts.pory"
	end
# 58 "data/maps/Route5_SouthEntrance/scripts.pory"

# 59 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_GuardDrinkTea::
# 60 "data/maps/Route5_SouthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThatTeaLooksTasty
# 61 "data/maps/Route5_SouthEntrance/scripts.pory"
	closemessage
# 62 "data/maps/Route5_SouthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route5_SouthEntrance_EventScript_WalkToGuardLeft
# 63 "data/maps/Route5_SouthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route5_SouthEntrance_EventScript_WalkToGuardMid
# 64 "data/maps/Route5_SouthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route5_SouthEntrance_EventScript_WalkToGuardRight
# 65 "data/maps/Route5_SouthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThanksIllShareTeaWithGuards
# 66 "data/maps/Route5_SouthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 67 "data/maps/Route5_SouthEntrance/scripts.pory"
	releaseall
# 68 "data/maps/Route5_SouthEntrance/scripts.pory"
	end
# 69 "data/maps/Route5_SouthEntrance/scripts.pory"

# 70 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_WalkToGuardLeft::
# 71 "data/maps/Route5_SouthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route5_SouthEntrance_Movement_WalkToGuardLeft
# 72 "data/maps/Route5_SouthEntrance/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route5_SouthEntrance/scripts.pory"
	return
# 74 "data/maps/Route5_SouthEntrance/scripts.pory"

# 75 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_WalkToGuardMid::
# 76 "data/maps/Route5_SouthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route5_SouthEntrance_Movement_WalkToGuardMid
# 77 "data/maps/Route5_SouthEntrance/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route5_SouthEntrance/scripts.pory"
	return
# 79 "data/maps/Route5_SouthEntrance/scripts.pory"

# 80 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_EventScript_WalkToGuardRight::
# 81 "data/maps/Route5_SouthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route5_SouthEntrance_Movement_WalkToGuardRight
# 82 "data/maps/Route5_SouthEntrance/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route5_SouthEntrance/scripts.pory"
	return
# 84 "data/maps/Route5_SouthEntrance/scripts.pory"

# 85 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_Movement_WalkToGuardMid::
# 86 "data/maps/Route5_SouthEntrance/scripts.pory"
	walk_left
# 87 "data/maps/Route5_SouthEntrance/scripts.pory"
	step_end
# 88 "data/maps/Route5_SouthEntrance/scripts.pory"

# 89 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_Movement_WalkToGuardRight::
# 90 "data/maps/Route5_SouthEntrance/scripts.pory"
	walk_left
# 91 "data/maps/Route5_SouthEntrance/scripts.pory"
	walk_left
# 92 "data/maps/Route5_SouthEntrance/scripts.pory"
	step_end
# 93 "data/maps/Route5_SouthEntrance/scripts.pory"

# 94 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_Movement_WalkToGuardLeft::
# 95 "data/maps/Route5_SouthEntrance/scripts.pory"
	walk_in_place_left
# 96 "data/maps/Route5_SouthEntrance/scripts.pory"
	step_end
# 97 "data/maps/Route5_SouthEntrance/scripts.pory"

# 98 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_Movement_BlockPlayerEntry::
# 99 "data/maps/Route5_SouthEntrance/scripts.pory"
	walk_up
# 100 "data/maps/Route5_SouthEntrance/scripts.pory"
	step_end
