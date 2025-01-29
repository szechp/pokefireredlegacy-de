# 1 "data/maps/Route19/scripts.pory"

# 2 "data/maps/Route19/scripts.pory"
Route19_MapScripts::
# 3 "data/maps/Route19/scripts.pory"
	.byte 0
# 4 "data/maps/Route19/scripts.pory"

# 5 "data/maps/Route19/scripts.pory"
Route19_EventScript_RouteSign::
# 6 "data/maps/Route19/scripts.pory"
	msgbox Route19_Text_RouteSign, MSGBOX_SIGN
# 7 "data/maps/Route19/scripts.pory"
	end
# 8 "data/maps/Route19/scripts.pory"

# 9 "data/maps/Route19/scripts.pory"
Route19_EventScript_DiveGuy::
# 10 "data/maps/Route19/scripts.pory"
	lock
# 11 "data/maps/Route19/scripts.pory"
	faceplayer
# 12 "data/maps/Route19/scripts.pory"
	goto_if_set FLAG_GOT_HM08, Route19_EventScript_EventScript_ExplainDive
# 13 "data/maps/Route19/scripts.pory"
	msgbox Route19_Text_CongratsYouveWon
# 14 "data/maps/Route19/scripts.pory"
	checkitemspace ITEM_HM08
# 15 "data/maps/Route19/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route19_EventScript_EventScript_NoRoomForHM08
# 16 "data/maps/Route19/scripts.pory"
	giveitem_msg Route19_Text_ReceivedHM08FromDiveGuy, ITEM_HM08
# 17 "data/maps/Route19/scripts.pory"
	msgbox Route19_Text_ExplainDive
# 18 "data/maps/Route19/scripts.pory"
	setflag FLAG_GOT_HM08
# 19 "data/maps/Route19/scripts.pory"
	release
# 20 "data/maps/Route19/scripts.pory"
	end
# 21 "data/maps/Route19/scripts.pory"

# 22 "data/maps/Route19/scripts.pory"
Route19_EventScript_EventScript_NoRoomForHM08::
# 23 "data/maps/Route19/scripts.pory"
	msgbox Route19_Text_DontHaveRoomForPrize
# 24 "data/maps/Route19/scripts.pory"
	release
# 25 "data/maps/Route19/scripts.pory"
	end
# 26 "data/maps/Route19/scripts.pory"

# 27 "data/maps/Route19/scripts.pory"
Route19_EventScript_EventScript_ExplainDive::
# 28 "data/maps/Route19/scripts.pory"
	msgbox Route19_Text_ExplainDive
# 29 "data/maps/Route19/scripts.pory"
	release
# 30 "data/maps/Route19/scripts.pory"
	end
