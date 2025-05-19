# 1 "data/maps/Route14/scripts.pory"

# 2 "data/maps/Route14/scripts.pory"
Route14_MapScripts::
# 3 "data/maps/Route14/scripts.pory"
	.byte 0
# 4 "data/maps/Route14/scripts.pory"

# 5 "data/maps/Route14/scripts.pory"
Route14_EventScript_RouteSign::
# 6 "data/maps/Route14/scripts.pory"
	msgbox Route14_Text_RouteSign, MSGBOX_SIGN
# 7 "data/maps/Route14/scripts.pory"
	end
# 8 "data/maps/Route14/scripts.pory"

# 9 "data/maps/Route14/scripts.pory"
Route14_EventScript_HealWoman::
# 10 "data/maps/Route14/scripts.pory"
	lock
# 11 "data/maps/Route14/scripts.pory"
	faceplayer
# 12 "data/maps/Route14/scripts.pory"
	msgbox Route14_Text_HealWoman1
# 13 "data/maps/Route14/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 14 "data/maps/Route14/scripts.pory"
	msgbox Route14_Text_HealWoman2
# 15 "data/maps/Route14/scripts.pory"
	release
# 16 "data/maps/Route14/scripts.pory"
	end
# 17 "data/maps/Route14/scripts.pory"

# 18 "data/maps/Route14/scripts.pory"
Route14_Text_HealWoman1::
# 19 "data/maps/Route14/scripts.pory"
	.string "I'm just enjoying the flowers,\n"
# 20 "data/maps/Route14/scripts.pory"
	.string "but I do know how far the\l"
# 21 "data/maps/Route14/scripts.pory"
	.string "next city is, so I also\l"
# 22 "data/maps/Route14/scripts.pory"
	.string "provide healing to trainers!$"
# 23 "data/maps/Route14/scripts.pory"

# 24 "data/maps/Route14/scripts.pory"
Route14_Text_HealWoman2::
# 25 "data/maps/Route14/scripts.pory"
	.string "Stay strong trainer!$"
