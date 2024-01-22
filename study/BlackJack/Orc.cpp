#include "Orc.h"

Orc::Orc(int health):
Creature(health)
{}

void Orc::Greet() const
{
	cout << "The orc grunts hello.\n";
}