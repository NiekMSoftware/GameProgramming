#pragma once
#include "Creature.h"

class Orc : public Creature
{
public:
	Orc(int health = 120);
	virtual void Greet() const;
};
