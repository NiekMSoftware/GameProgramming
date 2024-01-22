#include "../lib/Enemy.h"

Enemy::Enemy(int damage):
m_Damage(damage)
{}

void Enemy::Taunt() const
{
	cout << "The enemy says it will fight you!\n";
}

void Enemy::Attack() const
{
	cout << "Attack! Inflicts " << m_Damage << " damage!";
}