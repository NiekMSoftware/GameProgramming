#include <iostream>
#include <string>

using namespace std;

// Counter
// Demonstrates for loops
void Chapter3_1();

// String tester
// Demonstrates string objects
void Chapter3_2();

int main()
{
	Chapter3_2();
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