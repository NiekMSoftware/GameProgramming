#include <iostream>]
#include <string>
#include <vector>

#include "critter_farm.h"

using std::cout;
using std::endl;
using std::string;

// Critter Farm
// Demonstrates object containment
void Chapter9_1();

// Friend Critters
// Demonstrates friend functions and operator overloading
void Peek(const Critter& critter);
ostream& operator<<(ostream& os, const Critter& aCritter);
void Chapter9_2();

int main()
{
	Chapter9_2();
	return 0;
}

void Chapter9_1()
{
	Critter critter("Pookie");
	cout << "My critter's name is " << critter.GetName() << endl;

	cout << "\nCreating Critter farm.\n";
	Farm myFarm(3);

	cout << "\nAdding three Critters to the farm.\n";
	myFarm.Add(Critter("Joe"));
	myFarm.Add(Critter("Bob"));
	myFarm.Add(Critter("Larry"));

	cout << "\nCalling Roll...\n";
	myFarm.RollCall();
}

void Chapter9_2()
{
	Critter critter("Pookie");

	cout << "Calling Peek() to access critter's private data member, m_Name:\n";
	Peek(critter);

	cout << "\nSending critter object to cout with the << operator:\n";
	cout << critter;
}

void Peek(const Critter& aCritter)
{
	cout << aCritter.m_Name << "\n";
}

ostream& operator<<(ostream& os, const Critter& aCritter)
{
	os << "Critter Object - ";
	os << "m_Name: " << aCritter.m_Name;
	return os;
}
