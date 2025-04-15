#include "Character.h"

void ACharacter::SetPoketGold(int Gold)
{
}

void ACharacter::LoadCharacterParams(std::string path)
{
}

void ACharacter::Move()
{
}

void ACharacter::Attack(ACharacter target)
{
}

void ACharacter::Hit(float Damage)
{
}

void ACharacter::UseSkill()
{
}

void ACharacter::Die()
{
}

void ACharacter::SetLocation(float X, float Y, float Z)
{
}

void ACharacter::SetRotation(float X, float Y, float Z)
{
}

void ACharacter::SetScale(float X, float Y, float Z)
{
}

void ACharacter::SetHp(float Hp)
{
}

void ACharacter::SetMp(float Hp)
{
}

void ACharacter::SetMoveSpeed(float Speed)
{
}

bool ACharacter::GetIsDie()
{
	return IsDie;
}

float ACharacter::GetAttack()
{
	return AttackImpuls;
}

int ACharacter::GetPoketGold()
{
	return PoketGold;
}

std::string ACharacter::GetName()
{
	return Name;
}
