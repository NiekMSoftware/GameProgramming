#include <iostream>

// Referencing
// Demonstrates using references
void Chapter6_1();

// Swap
// Demonstrates passing references to alter argument variables
void Chapter6_2();
void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main()
{
	Chapter6_2();
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

void Chapter6_2()
{
	int myScore = 150;
	int yourScore = 1000;
	std::cout << "Original values\n";
	std::cout << "myScore: " << myScore << '\n';
	std::cout << "yourSCore: " << yourScore << "\n\n";

	std::cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore);
	std::cout << "myScore: " << myScore << '\n';
	std::cout << "yourSCore: " << yourScore << "\n\n";

	std::cout << "Calling goodSwap()\n";
	goodSwap(myScore, yourScore);
	std::cout << "myScore: " << myScore << '\n';
	std::cout << "yourSCore: " << yourScore << "\n\n";
}

void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
