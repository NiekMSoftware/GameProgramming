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

// Heap
// Demonstrates dynamically allocating memory
int* intOnHeap();	// returns an int on the heap
void leak1();		// creates a memory leak
void leak2();		// creates another memory leak
void Chapter9_3();

int main()
{
	Chapter9_3();
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

int* intOnHeap()
{
	int* pTemp = new int(20);
	return pTemp;
}

void leak1()
{
	int* drip = new int(30);
}

void leak2()
{
	int* drip2 = new int(50);
	drip2 = new int(100);
	delete drip2;
}

void Chapter9_3()
{
	int* pHeap = new int;
	*pHeap = 10;
	cout << "*pHeap: " << *pHeap << "\n\n";

	int* pHeap2 = intOnHeap();
	cout << "*pHeap2: " << *pHeap2 << "\n\n";

	cout << "Freeing memory pointed to by pHeap.\n\n";
	delete pHeap;

	cout << "Freeing memory pointed to by pHeap2.\n\n";
	delete pHeap2;

	// get rid of dangling pointers
	pHeap = 0;
	pHeap2 = 0;
}