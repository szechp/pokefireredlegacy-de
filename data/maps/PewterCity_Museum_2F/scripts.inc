# 1 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 2 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_MapScripts::
# 3 "data/maps/PewterCity_Museum_2F/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 5 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_Man::
# 6 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WhatsSpecialAboutMoonStone, MSGBOX_NPC
# 7 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 8 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 9 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_OldMan::
# 10 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BoughtColorTVForMoonLanding, MSGBOX_NPC
# 11 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 12 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 13 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_Scientist::
# 14 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_RunningSpaceExhibitThisMonth, MSGBOX_NPC
# 15 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 16 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 17 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_LittleGirl::
# 18 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AskedDaddyToCatchPikachu, MSGBOX_NPC
# 19 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 20 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 21 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_BaldingMan::
# 22 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise, MSGBOX_NPC
# 23 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 24 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 25 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_SpaceShuttle::
# 26 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_SpaceShuttle, MSGBOX_SIGN
# 27 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 28 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 29 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_MoonStone::
# 30 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
# 31 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 32 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 33 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_AuroraGuy::
# 34 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_EliteTicket, MSGBOX_NPC
# 35 "data/maps/PewterCity_Museum_2F/scripts.pory"
	special GetDeoxys
# 36 "data/maps/PewterCity_Museum_2F/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, PewterCity_Museum_2F_EventScript_AuroraGuyTicket
# 37 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
# 38 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 39 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 40 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_AuroraGuyTicket::
# 41 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Ticket, MSGBOX_NPC
# 42 "data/maps/PewterCity_Museum_2F/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 43 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
# 44 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
