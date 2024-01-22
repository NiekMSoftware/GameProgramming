#pragma once

#include <iostream>

using std::cout;

class Enemy
{
public:
	Enemy(int damage = 10);
	virtual ~Enemy();
	void virtual Attack() const;

protected:
	int* m_pDamage;
};