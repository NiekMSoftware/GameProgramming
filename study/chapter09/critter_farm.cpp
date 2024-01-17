#include "critter_farm.h"

// Critter class
Critter::Critter(const string& name):
m_Name(name)
{}

string Critter::GetName() const
{
	return m_Name;
}

// Farm class
Farm::Farm(int spaces)
{
	m_Critters.reserve(spaces);
}

void Farm::Add(const Critter& aCritter)
{
	m_Critters.push_back(aCritter);
}

void Farm::RollCall() const
{
	for (auto& critter : m_Critters)
	{
		cout << critter.GetName() << " here.\n";
	}
}