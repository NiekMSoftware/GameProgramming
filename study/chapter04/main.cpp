#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Hero's Inventory 2.0
// Demonstrates vectors
void Chapter4_1();

// Hero's Inventory 3.0
// Demonstrates iterators
void Chapter4_2();

int main()
{
	Chapter4_2();
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