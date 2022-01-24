LittlerootTown_MapScripts::
	.byte 0

NPCDonnePoke::
	lockall
	msgbox NPCDonnePoke_Text_0
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	givemon SPECIES_BULBASAUR, 5, ITEM_NONE
	playfanfare SE_SUCCESS
	msgbox NPCDonnePoke_Text_1
	waitfanfare
	releaseall
	end


NPCDonnePoke_Text_0:
	.string "Take this Pokemon:$"

NPCDonnePoke_Text_1:
	.string "{PLAYER} received a Pokémon!$"
