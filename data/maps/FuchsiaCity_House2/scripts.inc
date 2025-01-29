# 1 "data/maps/FuchsiaCity_House2/scripts.pory"

# 2 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_MapScripts::
# 3 "data/maps/FuchsiaCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_House2/scripts.pory"

# 5 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_FossilGuy::
# 6 "data/maps/FuchsiaCity_House2/scripts.pory"
	lock
# 7 "data/maps/FuchsiaCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_set FLAG_GOT_FOSSIL_FROM_FOSSIL_GUY, FuchsiaCity_House2_AlreadyGotFossil
# 9 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_HaveMonForSavingUs
# 10 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_House2_FossilOmanyte
# 11 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_set FLAG_GOT_HELIX_FOSSIL, FuchsiaCity_House2_FossilKabuto
# 12 "data/maps/FuchsiaCity_House2/scripts.pory"

# 13 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_FossilKabuto::
# 14 "data/maps/FuchsiaCity_House2/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KABUTO
# 15 "data/maps/FuchsiaCity_House2/scripts.pory"
	givemon SPECIES_KABUTO, 20
# 16 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FuchsiaCity_House2_ReceiveFossilPartyKabuto
# 17 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FuchsiaCity_House2_ReceiveFossilPCKabuto
# 18 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 19 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 20 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 21 "data/maps/FuchsiaCity_House2/scripts.pory"

# 22 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_FossilOmanyte::
# 23 "data/maps/FuchsiaCity_House2/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_OMANYTE
# 24 "data/maps/FuchsiaCity_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 20
# 25 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FuchsiaCity_House2_ReceiveFossilPartyOmanyte
# 26 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FuchsiaCity_House2_ReceiveFossilPCOmanyte
# 27 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 28 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 29 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 30 "data/maps/FuchsiaCity_House2/scripts.pory"

# 31 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_ReceiveFossilPartyKabuto::
# 32 "data/maps/FuchsiaCity_House2/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 33 "data/maps/FuchsiaCity_House2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 34 "data/maps/FuchsiaCity_House2/scripts.pory"
	message FuchsiaCity_House2_Text_ObtainedKabutoFromEmployee
# 35 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitmessage
# 36 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitfanfare
# 37 "data/maps/FuchsiaCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 38 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 39 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_House2_EndReceiveFossil
# 40 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 41 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_ChangePokemonNickname
# 42 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto FuchsiaCity_House2_EndReceiveFossil
# 43 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 44 "data/maps/FuchsiaCity_House2/scripts.pory"

# 45 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_ReceiveFossilPartyOmanyte::
# 46 "data/maps/FuchsiaCity_House2/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 47 "data/maps/FuchsiaCity_House2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 48 "data/maps/FuchsiaCity_House2/scripts.pory"
	message FuchsiaCity_House2_Text_ObtainedOmanyteFromEmployee
# 49 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitmessage
# 50 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitfanfare
# 51 "data/maps/FuchsiaCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 52 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 53 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_House2_EndReceiveFossil
# 54 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 55 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_ChangePokemonNickname
# 56 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto FuchsiaCity_House2_EndReceiveFossil
# 57 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 58 "data/maps/FuchsiaCity_House2/scripts.pory"

# 59 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_ReceiveFossilPCKabuto::
# 60 "data/maps/FuchsiaCity_House2/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 61 "data/maps/FuchsiaCity_House2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 62 "data/maps/FuchsiaCity_House2/scripts.pory"
	message FuchsiaCity_House2_Text_ObtainedKabutoFromEmployee
# 63 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitmessage
# 64 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitfanfare
# 65 "data/maps/FuchsiaCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 66 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 67 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_House2_FossilTransferredToPC
# 68 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 69 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto FuchsiaCity_House2_FossilTransferredToPC
# 70 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 71 "data/maps/FuchsiaCity_House2/scripts.pory"

# 72 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_ReceiveFossilPCOmanyte::
# 73 "data/maps/FuchsiaCity_House2/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 74 "data/maps/FuchsiaCity_House2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 75 "data/maps/FuchsiaCity_House2/scripts.pory"
	message FuchsiaCity_House2_Text_ObtainedOmanyteFromEmployee
# 76 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitmessage
# 77 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitfanfare
# 78 "data/maps/FuchsiaCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 79 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 80 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_House2_FossilTransferredToPC
# 81 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 82 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto FuchsiaCity_House2_FossilTransferredToPC
# 83 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 84 "data/maps/FuchsiaCity_House2/scripts.pory"

# 85 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_FossilTransferredToPC::
# 86 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_TransferredToPC
# 87 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto FuchsiaCity_House2_EndReceiveFossil
# 88 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 89 "data/maps/FuchsiaCity_House2/scripts.pory"

# 90 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_EndReceiveFossil::
# 91 "data/maps/FuchsiaCity_House2/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 92 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_ExplainFossil
# 93 "data/maps/FuchsiaCity_House2/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_FOSSIL_GUY
# 94 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 95 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 96 "data/maps/FuchsiaCity_House2/scripts.pory"

# 97 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_AlreadyGotFossil::
# 98 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_RocketBossWentToBoardroom
# 99 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 100 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
