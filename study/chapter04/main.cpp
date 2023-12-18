#include <iostream>
#include <string>
#include <vector>

// libraries for high scores
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

// Hero's Inventory 2.0
// Demonstrates vectors
void Chapter4_1();

// Hero's Inventory 3.0
// Demonstrates iterators
void Chapter4_2();

// High Scores
// Demonstrates algorithms
void Chapter4_3();

// Understanding Vector Performance
void Chapter4_4();

int main()
{
	Chapter4_4();
	return 0;
}

void Chapter4_1()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "You have " << inventory.size() << " items.\n";

	cout << "\nYour items:\n";
	for(unsigned int i = 0; i < inventory.size(); ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";

	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "\nYour shield is destroyed in a fierce battle.";
	inventory.pop_back();
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou were robbed of all of your possessions by a thief.";
	inventory.clear();

	if(inventory.empty())
	{
		cout << "\nYou have nothing.\n";
	}
	else
	{
		cout << "\nYou have at least one item.\n";
	}
}

void Chapter4_2()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "\nYour items:\n";
	for(iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	myIterator = inventory.begin();
	*myIterator = "battle axe";
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nThe item name '" << *myIterator << "' has ";
	cout << (*myIterator).size() << " letters in it.\n";

	cout << "\nThe item name '" << *myIterator << "' has ";
	cout << myIterator->size() << " letters in it.\n";

	cout << "\nYou recover a crossbow from a slain enemy.";
	inventory.insert(inventory.begin(), "crossbow");
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nYour armor is destroyed in a fierce battle.";
	inventory.erase((inventory.begin() + 2));
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}
}

void Chapter4_3()
{
	vector<int>::const_iterator iter;

	cout << "Creating a list of scores.";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	cout << "\nHigh scores:\n";
	for(iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nFinding a score.";

	int score;
	cout << "\nEnter a score to find: ";
	cin >> score;

	iter = find(scores.begin(), scores.end(), score);
	if(iter != scores.end())
	{
		cout << "Score found.\n";
	}
	else
	{
		cout << "\nScore not found.\n";
	}

	cout << "\nRandomizing scores.";
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(scores.begin(), scores.end());

	cout << "\nHigh scores:\n";
	for(iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nSorting scores.";
	sort(scores.begin(), scores.end());
	cout << "\nHigh scores:\n";
	for(iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}
}

void Chapter4_4()
{
	cout << "Creating 10 element vector to hold scores.\n";
	vector<int> scores(10, 0);	// Initialize all 10 elements to 0
	cout << "Vector size is: " << scores.size() << endl;
	cout << "Vector capacity is: " << scores.capacity() << endl;

	cout << "\nAdding score.\n";
	scores.push_back(0); // memory is reallocated to accommodate growth
	cout << "Vector size is: " << scores.size() << endl;
	cout << "Vector capacity is: " << scores.capacity() << endl; // capacity should have changed with values between 10 - 20

	cout << "\nReserving more memory.\n";
	scores.reserve(20);
	cout << "Vector size is: " << scores.size() << endl;
	cout << "Vector capacity is: " << scores.capacity() << endl;
	cout << "Vector capacity is: " << scores.capacity() << endl;
}