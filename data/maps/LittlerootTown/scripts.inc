LittlerootTown_MapScripts::
	.byte 0

NPCDonnePoke::
	lockall
	msgbox NPCDonnePoke_Text_0
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	givemon SPECIES_ZAPDOS_GALAR, 100, ITEM_MASTER_BALL
	givemon SPECIES_GRENINJA_BATTLE_BOND, 100, ITEM_LIFE_ORB
	playfanfare SE_SUCCESS
	msgbox NPCDonnePoke_Text_1
	waitfanfare
	releaseall
	end


NPCDonnePoke_Text_0:
	.string "Prends ce Pokémon.$"

NPCDonnePoke_Text_1:
	.string "{PLAYER} a reçu un Pokémon!$"
