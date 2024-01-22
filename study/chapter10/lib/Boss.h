#pragma once
#include "Enemy.h"

class Boss : public Enemy
{
public:
	Boss(int multiplier = 3);
	~Boss() override;
	void Attack() const override;

private:
	int* m_pMultiplier;
};
