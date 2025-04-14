#pragma once
#include <string>
#include "Image.h"
#include "Characer.h"
#include "Transform.h"

class ASkill
{
public:

	ATransform* Transform;

	//Skill Prameter
	float MaxDamage;
	float MinDamage;

	float Range;
	float CoolTime;

	std::string Name;
	UImage SkillIcon;

	void Action();

};

