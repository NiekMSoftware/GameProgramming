#pragma once
#include "Enemy.h"

class Boss : public Enemy
{
public:
	int m_DamageMultiplier;

	Boss();
	void SpecialAttack();
};
