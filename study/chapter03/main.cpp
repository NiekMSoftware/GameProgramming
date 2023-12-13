#include <iostream>
#include <string>
#include <cstdlib> // used for jumble word
#include <ctime> // used for jumble word

using namespace std;

// Counter
// Demonstrates for loops
void Chapter3_1();

// String tester
// Demonstrates string objects
void Chapter3_2();

// Hero's Inventory
// Demonstrates arrays
void Chapter3_3();

// Tic-Tac-Toe Board
// Demonstrates multidimensional arrays
void Chapter3_4();

// Word Jumble!
// The classic word jumble game where the player can ask for a hint
void Chapter3_Project();

int main()
{
	Chapter3_Project();
	return 0;
}

void Chapter3_1()
{
	cout << "Counting forward:\n";
	for(int i = 0; i < 10; ++i)
	{
		cout << i << " ";
	}

	cout << "\n\nCounting backward:\n";
	for(int i = 9; i >= 0; --i)
	{
		cout << i << " ";
	}

	cout << "\n\nCounting by fives:\n";
	for(int i = 0; i <= 50; i += 5)
	{
		cout << i << " ";
	}

	cout << "\n\nCounting with null statements:\n";
	int count = 0;
	for( ; count < 10;)
	{
		cout << count << " ";
		++count;
	}

	cout << "\n\nCounting with nested for loops:\n";
	const int ROWS = 5;
	const int COLUMNS = 3;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << i << "," << j << " ";
		}

		cout << endl;
	}
}

void Chapter3_2()
{
	string word1 = "Game";
	string word2 = "Over";
	string word3(3, '!');

	string phrase = word1 + " " + word2 + word3;
	cout << "The phrase is: " << phrase << "\n\n";

	cout << "The phrase has " << phrase.size() << " characters in it.\n\n";

	cout << "The character at position 0 is: " << phrase[0] << "\n\n";

	cout << "Changing the character at position 0." << "\n";
	phrase[0] = 'L';
	cout << "The phrase is now: " << phrase << "\n\n";

	for(unsigned int i = 0; i < phrase.size(); ++i)
	{
		cout << "Character at position " << i << " is: " << phrase[i] << endl;
	}

	cout << "\nThe sequence 'Over' begins at location ";
	cout << phrase.find("Over") << endl;

	if(phrase.find("eggplant") == string::npos)
	{
		cout << "'eggplant' is not in the phrase.\n\n";
	}

	phrase.erase(4, 5);
	cout << "The phrase is now: " << phrase << endl;

	phrase.erase(4);
	cout << "The phrase is now: " << phrase << endl;

	phrase.erase();
	cout << "The phrase is now: " << phrase << endl;

	if(phrase.empty())
	{
		cout << "\nThe phrase is no more.\n";
	}
}

void Chapter3_3()
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int numItems = 0;
	inventory[numItems++] = "Sword";
	inventory[numItems++] = "Shield";
	inventory[numItems++] = "Armor";

	cout << "Your items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe.\n";
	inventory[0] = "Battle axe";

	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "\nYou find a healing potion.\n";
	if(numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "Healing potion";
	}
	else
	{
		cout << "You have too many items and can't carry another.";
	}

	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}
}

void Chapter3_4()
{
	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = 
	{
		{'O', 'X', 'O'},
		{' ', 'X', 'X'},
		{'X', 'O', 'X'}
	};

	cout << "Here's the tic-tac-toe board:\n";
	for (int i = 0; i < ROWS; ++i)
	{
		for(int j = 0; j < COLUMNS; ++j)
		{
			cout << board[i][j];
		}

		cout << endl;
	}

	cout << "\n'X' moves to the empty location.\n\n";
	board[1][0] = 'X';

	cout << "Now the tic-tac-toe board is:\n";
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << board[i][j];
		}

		cout << endl;
	}

	cout << "\n'X' wins!";
}

void Chapter3_Project()
{
	
}