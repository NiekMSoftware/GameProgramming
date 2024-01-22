#pragma once

#include <iostream>

using std::cout;
using std::endl;

class Creature
{
public:
	Creature(int health = 100);
	virtual void Greet() const = 0;	// pure virtual member func
	virtual void DisplayHealth() const;

protected:
	int m_Health;
};
