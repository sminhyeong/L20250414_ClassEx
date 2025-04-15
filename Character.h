#pragma once
#include "Transform.h"
#include <string>

class ACharacter
{
protected:
	//status Parameter
	bool IsDie;

	int PoketGold;
	
	float Hp;
	float Mp;
	float AttackImpuls;
	float MoveSpeed;
	std::string Name;

public :
	UTransform* Translate;

	void SetHp(float Hp);
	void SetMp(float Hp);
	void SetMoveSpeed(float Speed);

	bool GetIsDie();
	
	float GetAttack();
	int GetPoketGold();
	
	std::string GetName();

	void SetPoketGold(int Gold);
	void LoadCharacterParams(std::string path);
	void Move();
	void Attack(ACharacter target);
	void Hit(float Damage);
	void UseSkill();
	void Die();
	void SetLocation(float X, float Y, float Z);
	void SetRotation(float X, float Y, float Z);
	void SetScale(float X, float Y, float Z);

};

