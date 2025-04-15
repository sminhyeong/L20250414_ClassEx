#pragma once
#include "Monster.h"
class AGoblin : public AMonster
{
protected:
	//달리 수 있게 셋팅하는 기능 등록
	void Action(ACharacter Target);
};

