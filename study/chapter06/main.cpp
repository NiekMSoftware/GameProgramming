#include <iostream>
#include <string>
#include <vector>

// Referencing
// Demonstrates using references
void Chapter6_1();

// Swap
// Demonstrates passing references to alter argument variables
void Chapter6_2();
void badSwap(int x, int y);
void goodSwap(int& x, int& y);

// Inventory Displayer
// Demonstrates const references
void Chapter6_3();
// param vector is a constant ref to a vector of strings
void display(const std::vector<std::string>& inventory);

int main()
{
	Chapter6_3();
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

void Chapter6_3()
{
	std::vector<std::string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	display(inventory);
}

void display(const std::vector<std::string>& vec)
{
	std::cout << "Your items:\n";
	for(std::vector<std::string>::const_iterator iter = vec.begin();
		iter != vec.end(); ++iter)
	{
		std::cout << *iter << '\n';
	}
}