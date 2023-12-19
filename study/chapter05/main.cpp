#include <iostream>

using namespace std;

// Instructions
// Demonstrates writing new functions
void Instructions();

// Yes or No
// Demonstrates return values and parameters
char askYesNo1();
char askYesNo2(string question);
void askQuestions();

int main()
{
	askQuestions();
	return 0;
}

// function definition
void Instructions()
{
	cout << "Welcome to the most fun you've ever had with text!\n\n";
	cout << "Here's how to play the game...\n";
}

char askYesNo1()
{
	char response1;

	do
	{
		cout << "Please enter 'y' or 'n': ";
		cin >> response1;
	} while (response1 != 'y' && response1 != 'n');

	return response1;
}

char askYesNo2(string question)
{
	char response2;

	do
	{
		cout << question << " (y/n): ";
		cin >> response2;
	} while (response2 != 'y' && response2 != 'n');

	return response2;
}

void askQuestions()
{
	char answer1 = askYesNo1();
	cout << "Thanks for answering: " << answer1 << "\n\n";

	char answer2 = askYesNo2("Do you wish to save the game?");
	cout << "Thanks for answering: " << answer2 << "\n";
}