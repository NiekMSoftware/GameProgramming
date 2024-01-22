#pragma once

#include <iostream>

using std::cout;

class Enemy
{
public:
	int m_Damage;

	Enemy();
	void Attack() const;
};