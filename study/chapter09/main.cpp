#include <iostream>]
#include <string>
#include <vector>

#include "critter_farm.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

// Critter Farm
// Demonstrates object containment
void Chapter9_1();

int main()
{
	Chapter9_1();
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