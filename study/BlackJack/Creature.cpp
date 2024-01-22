#include "Creature.h"

Creature::Creature(int health):
m_Health(health)
{}

void Creature::DisplayHealth() const
{
	cout << "Health: " << m_Health << endl;
}
