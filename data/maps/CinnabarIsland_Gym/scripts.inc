# 1 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 2 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_QUINN, 1
# 3 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_AVERY, 3
# 4 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_RAMON, 4
# 5 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_DEREK, 5
# 6 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_DUSTY, 6
# 7 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_ZAC,   7
# 8 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 9 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_MapScripts::
# 10 "data/maps/CinnabarIsland_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_OnLoad
# 11 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.byte 0
# 12 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 13 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoad::
# 14 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_OnLoadOpenAllDoors
# 15 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_OnLoadOpenDoor1
# 16 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_OnLoadOpenDoor2
# 17 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_OnLoadOpenDoor3
# 18 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_OnLoadOpenDoor4
# 19 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_OnLoadOpenDoor5
# 20 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_OnLoadOpenDoor6
# 21 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 22 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 23 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenAllDoors::
# 24 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 25 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 26 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 27 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 28 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 29 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 30 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 31 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 32 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor1::
# 33 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 34 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 35 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 36 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor2::
# 37 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 38 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 39 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 40 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor3::
# 41 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 42 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 43 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 44 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor4::
# 45 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 46 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 47 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 48 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor5::
# 49 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 50 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 51 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 52 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor6::
# 53 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 54 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 55 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 56 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Blaine::
# 57 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 58 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE, CinnabarIsland_Gym_Text_BlaineIntro, CinnabarIsland_Gym_Text_BlaineDefeat, CinnabarIsland_Gym_EventScript_DefeatedBlaine, NO_MUSIC
# 59 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM38_FROM_BLAINE, CinnabarIsland_Gym_EventScript_GiveTM38
# 60 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, CinnabarIsland_Gym_EventScript_RematchBlaine
# 61 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostBattle
# 62 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 63 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 64 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 65 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedBlaine::
# 66 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 1
# 67 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BLAINE
# 68 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 69 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setrespawn SPAWN_CINNABAR_ISLAND
# 70 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 1
# 71 "data/maps/CinnabarIsland_Gym/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 72 "data/maps/CinnabarIsland_Gym/scripts.pory"
	set_gym_trainers 7
# 73 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
# 74 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 75 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 76 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GiveTM38::
# 77 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ExplainVolcanoBadge
# 78 "data/maps/CinnabarIsland_Gym/scripts.pory"
	checkitemspace ITEM_TM38
# 79 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CinnabarIsland_Gym_EventScript_NoRoomForTM38
# 80 "data/maps/CinnabarIsland_Gym/scripts.pory"
	giveitem_msg CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine, ITEM_TM38
# 81 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GOT_TM38_FROM_BLAINE
# 82 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove
# 83 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 84 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 85 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 86 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRoomForTM38::
# 87 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_MakeSpaceForThis
# 88 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 89 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 90 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 91 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RematchBlaine::
# 92 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RematchBlaine, MSGBOX_YESNO
# 93 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_NoRematchBlaine
# 94 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE2, CinnabarIsland_Gym_Text_RematchYesBlaine, CinnabarIsland_Gym_Text_RematchBlaineDefeat, CinnabarIsland_Gym_EventScript_PostRematchBlaine, NO_MUSIC
# 95 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 96 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 97 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 98 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_PostRematchBlaine::
# 99 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostRematchBattle
# 100 "data/maps/CinnabarIsland_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_BLAINE2
# 101 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 102 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 103 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 104 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRematchBlaine::
# 105 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlaineNoRematchBattle
# 106 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 107 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 108 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 109 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 110 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Erik::
# 111 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 112 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 114 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 115 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Avery::
# 116 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 117 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 119 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 120 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 121 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer
# 122 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 123 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 124 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 125 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer::
# 126 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 127 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 128 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 129 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Derek::
# 130 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 131 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 132 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 134 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 135 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 136 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer
# 137 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 138 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 139 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 140 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer::
# 141 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 142 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 143 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 144 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Zac::
# 145 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 146 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 148 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 149 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedZac::
# 150 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer
# 151 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 152 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 153 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 154 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer::
# 155 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 156 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 157 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 158 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quinn::
# 159 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 160 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
# 161 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 162 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 163 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 164 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer
# 165 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 166 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 167 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 168 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer::
# 169 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 170 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 171 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 172 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Ramon::
# 173 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 174 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
# 175 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 176 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 177 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 178 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer
# 179 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 180 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 181 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 182 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer::
# 183 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 184 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 185 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 186 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Dusty::
# 187 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 188 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 190 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 191 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 192 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer
# 193 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 194 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 195 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 196 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer::
# 197 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 198 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 199 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 200 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuy::
# 201 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lock
# 202 "data/maps/CinnabarIsland_Gym/scripts.pory"
	faceplayer
# 203 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuyPostVictory
# 204 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
# 205 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 206 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 207 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 208 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuyPostVictory::
# 209 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
# 210 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 211 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 212 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 213 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatue::
# 214 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 215 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatuePostVictory
# 216 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
# 217 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 218 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 219 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 220 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatuePostVictory::
# 221 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
# 222 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 223 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 224 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 225 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Left::
# 226 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 227 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 228 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 229 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 230 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 231 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Right::
# 232 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 233 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 234 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 235 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 236 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 237 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1::
# 238 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 239 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 240 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz1Correct
# 241 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz1Incorrect
# 242 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 243 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 244 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 245 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 246 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitfanfare
# 247 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
# 248 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 249 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 250 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 251 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 252 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_BOO
# 253 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 254 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 255 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 256 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 257 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 258 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Correct::
# 259 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 260 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 261 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 262 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 263 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 264 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 265 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 266 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 267 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 268 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 269 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 270 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
# 271 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 272 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 273 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
# 274 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 275 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 276 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 277 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
# 278 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 279 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_EventScript_BattleQuinn
# 280 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 281 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 282 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 283 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn::
# 284 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_QuinnApproachLeft
# 285 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_QuinnApproachRight
# 286 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 287 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 288 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 289 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 290 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 291 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 292 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 293 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 294 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachLeft::
# 295 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 296 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachLeft
# 297 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 298 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 299 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 300 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachRight::
# 301 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 302 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachRight
# 303 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 304 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 305 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 306 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachLeft::
# 307 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 308 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 309 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 310 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 311 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachRight::
# 312 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 313 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 314 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 315 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Left::
# 316 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 317 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 318 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 319 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 320 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 321 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Right::
# 322 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 323 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 324 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 325 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 326 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 327 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2::
# 328 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 329 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 330 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz2Incorrect
# 331 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz2Correct
# 332 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 333 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 334 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Correct::
# 335 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 336 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 337 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 338 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 339 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 340 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 341 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 342 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 343 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 344 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 345 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 346 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
# 347 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 348 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 349 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
# 350 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 351 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_EventScript_BattleAvery
# 352 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 353 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 354 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 355 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery::
# 356 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_AveryApproachLeft
# 357 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_AveryApproachRight
# 358 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 359 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 360 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 361 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 362 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 363 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 364 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 365 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 366 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachLeft::
# 367 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 368 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachLeft
# 369 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 370 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 371 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 372 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachRight::
# 373 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 374 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachRight
# 375 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 376 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 377 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 378 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachLeft::
# 379 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 380 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 381 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 382 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 383 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 384 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachRight::
# 385 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 386 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 387 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_left
# 388 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 389 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 390 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_PlayerFaceAvery::
# 391 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 392 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 393 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_right
# 394 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 395 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 396 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Left::
# 397 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 398 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 399 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 400 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 401 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 402 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Right::
# 403 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 404 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 405 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 406 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 407 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 408 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3::
# 409 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 410 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 411 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz3Incorrect
# 412 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz3Correct
# 413 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 414 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 415 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Correct::
# 416 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 417 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 418 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 419 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 420 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 421 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 422 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 423 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 424 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 425 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 426 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 427 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
# 428 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 429 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 430 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Incorrect::
# 431 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 432 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_EventScript_BattleRamon
# 433 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 434 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 435 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 436 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon::
# 437 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_RamonApproachLeft
# 438 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_RamonApproachRight
# 439 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 440 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 441 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 442 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 443 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 444 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 445 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 446 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 447 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachLeft::
# 448 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 449 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachLeft
# 450 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 451 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 452 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 453 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachRight::
# 454 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 455 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachRight
# 456 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 457 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 458 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 459 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachLeft::
# 460 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 461 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 462 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 463 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 464 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachRight::
# 465 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 466 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 467 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 468 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Left::
# 469 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 470 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 471 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 472 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 473 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 474 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Right::
# 475 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 476 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 477 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 478 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 479 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 480 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4::
# 481 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 482 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 483 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz4Incorrect
# 484 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz4Correct
# 485 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 486 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 487 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Correct::
# 488 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 489 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 490 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 491 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 492 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 493 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 494 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 495 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 496 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 497 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 498 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 499 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
# 500 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 501 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 502 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Incorrect::
# 503 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 504 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_EventScript_BattleDerek
# 505 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 506 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 507 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 508 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek::
# 509 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DerekApproachLeft
# 510 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DerekApproachRight
# 511 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 512 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 513 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 514 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 515 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 516 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 517 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 518 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 519 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachLeft::
# 520 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 521 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachLeft
# 522 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 523 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 524 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 525 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachRight::
# 526 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 527 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachRight
# 528 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 529 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 530 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 531 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachLeft::
# 532 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 533 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 534 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 535 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 536 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachRight::
# 537 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 538 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 539 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 540 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Left::
# 541 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 542 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 543 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 544 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 545 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 546 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Right::
# 547 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 548 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 549 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 550 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 551 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 552 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5::
# 553 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 554 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 555 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz5Correct
# 556 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz5Incorrect
# 557 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 558 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 559 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Correct::
# 560 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 561 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 562 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 563 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 564 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 565 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 566 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 567 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 568 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 569 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 570 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 571 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
# 572 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 573 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 574 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Incorrect::
# 575 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 576 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_EventScript_BattleDusty
# 577 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 578 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 579 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 580 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty::
# 581 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DustyApproachLeft
# 582 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DustyApproachRight
# 583 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 584 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 585 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 586 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 587 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 588 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 589 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 590 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 591 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachLeft::
# 592 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 593 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachLeft
# 594 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 595 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 596 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 597 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachRight::
# 598 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 599 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachRight
# 600 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 601 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 602 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 603 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachLeft::
# 604 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 605 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 606 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 607 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 608 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachRight::
# 609 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 610 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 611 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 612 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Left::
# 613 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 614 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 615 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 616 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 617 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 618 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Right::
# 619 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 620 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 621 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 622 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 623 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 624 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6::
# 625 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 626 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 627 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz6Incorrect
# 628 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz6Correct
# 629 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 630 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 631 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Correct::
# 632 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 633 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 634 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 635 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 636 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 637 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 638 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 639 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 640 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 641 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 642 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 643 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
# 644 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 645 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 646 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Incorrect::
# 647 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 648 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_EventScript_BattleZac
# 649 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 650 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 651 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 652 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac::
# 653 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_ZacApproachLeft
# 654 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_ZacApproachRight
# 655 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 656 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 657 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 658 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 659 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 660 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 661 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 662 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 663 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachLeft::
# 664 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 665 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachLeft
# 666 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 667 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 668 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 669 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachRight::
# 670 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 671 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachRight
# 672 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 673 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 674 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 675 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachLeft::
# 676 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 677 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 678 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 679 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 680 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachRight::
# 681 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 682 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 683 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 684 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor1::
# 685 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 686 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 687 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 688 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 689 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 690 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 691 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 692 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 693 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 694 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor2::
# 695 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 696 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 697 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 698 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 699 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 700 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 701 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 702 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 703 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 704 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor3::
# 705 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 706 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 707 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 708 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 709 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 710 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 711 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 712 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 713 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 714 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor4::
# 715 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 716 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 717 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
# 718 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 719 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 720 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor5::
# 721 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 722 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 723 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 724 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 725 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 726 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 18, METATILE_CinnabarGym_Floor, 0
# 727 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 728 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 729 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 730 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor6::
# 731 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 732 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 733 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 734 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 735 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 736 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 10, METATILE_CinnabarGym_Floor, 0
# 737 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 738 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
