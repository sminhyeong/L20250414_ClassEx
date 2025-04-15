#pragma once
#include "Character.h"

class UWorld
{
private:
	ACharacter *Player;
	ACharacter *Monter;
public :

	void SetPlayer(ACharacter* Player);
	void SetMonster(ACharacter* Player);
	void SetPlayers(ACharacter* Player, int Count);
	void SetMonsters(ACharacter* Player, int Count);
};

