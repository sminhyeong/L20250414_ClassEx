#pragma once
#include "Skill.h"
#include "Transform.h"

class ACharacer
{
public :

	//status Parameter
	bool IsDie;
	float Hp;
	float Mp;
	float Stemina;
	float Attack;
	float Defend;

	float MoveSpeed;
	float AttackSpeed;

	float CriticalRate;
	float CriticalDamageRate;

	std::string Name;

	ATransform* Translate;

	ASkill CurrentSkill;
	void LoadCharacterParams(std::string path);
	void Move();
	void Attack(ACharacer target);
	void Hit(float Damage);
	void UseSkill(ASkill SelectedSkill);
	void Die();
	void SetLocation(float X, float Y, float Z);
	void SetRotation(float X, float Y, float Z);
	void SetScale(float X, float Y, float Z);

};

