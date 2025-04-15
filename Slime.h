#pragma once
#include "Monster.h"
class ASlime : public AMonster
{
protected:
	//미끄러질 수 있게 셋팅하는 코드 등록
	void Action(ACharacter Target);
};

