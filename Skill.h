#pragma once
#include <string>
#include "Image.h"
#include "Characer.h"

class ASkill
{
public:
	//Location Parameter
	float LocationX;
	float LocationY;
	float LocationZ;
	//Rotation Parameter
	float RotationX;
	float RotationY;
	float RotationZ;
	//Scale Parameter
	float ScaleX;
	float ScaleY;
	float ScaleZ;

	//Skill Prameter
	float MaxDamage;
	float MinDamage;

	float Range;
	float CoolTime;

	std::string Name;
	AImage SkillIcon;

	void Action();

};

