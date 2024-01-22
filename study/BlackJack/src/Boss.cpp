#include "../lib/Boss.h"

Boss::Boss():
m_DamageMultiplier(3)
{}

void Boss::SpecialAttack()
{
	cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
	cout << " damage!\n";
}