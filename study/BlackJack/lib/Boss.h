#pragma once
#include "Enemy.h"

class Boss : public Enemy
{
public:
	Boss(int damage = 30);
	void Taunt() const override;
	void Attack() const override;
};
