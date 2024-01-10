#include <iostream>

// Referencing
// Demonstrates using references
void Chapter6_1();

// Swap
// Demonstrates passing references to alter argument variables
void Chapter6_2();

int main()
{
	Chapter6_1();
}

void Chapter6_1()
{
	int myScore = 1000;
	int& mikesScore = myScore;	// Create a reference

	std::cout << "myScore is: " << myScore << "\n";
	std::cout << "mikesScore is: " << mikesScore << "\n\n";

	std::cout << "Adding 500 to myScore:\n";
	myScore += 500;

	std::cout << "mikesScore is: " << mikesScore << "\n\n";

	std::cout << "Adding 500 to mikesScore\n";
	mikesScore += 500;
	std::cout << "myScore is: " << myScore << "\n";
	std::cout << "mikesScore is: " << mikesScore << "\n\n";
}