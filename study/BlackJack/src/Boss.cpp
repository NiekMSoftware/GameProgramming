#include "../lib/Boss.h"

Boss::Boss(int damage):
Enemy(damage)			// call base class constructor with arg
{}

void Boss::Taunt() const
{
	cout << "The boss says he will end your pitiful existence.\n";
}

void Boss::Attack() const
{
	Enemy::Attack();	// call base class member func
	cout << " And laughs heartily at you.\n";
}