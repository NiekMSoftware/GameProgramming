#pragma once

#include <iostream>

using std::cout;

class Enemy
{
public:
	Enemy(int damage = 10);
	void virtual Taunt() const;
	void virtual Attack() const;

private:
	int m_Damage;
};