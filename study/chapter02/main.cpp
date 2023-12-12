#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "GuessNumber.h"

using namespace std;

// Score Rater
// Demonstrates the if statement
void ScoreRater();

// Score Rater 2.0
// Demonstrates an else clause
void ScoreRater2();

// Score Rater 3.0
// Demonstrates if else-if suite
void ScoreRater3();

// Menu chooser
// Demonstrates the switch statement
void MenuChooser();

// Play Again
// Demonstrates while loops
void PlayAgain();

// Play Again 2.0
// Demonstrates do loops
void PlayAgain2();

// Finicky Counter
// Demonstrates break and continue statements
void FinickyCounter();

// Designers Network
// Demonstrates logical operators
void DesignersNetwork();

// Die roller
// Demonstrates generating random numbers
void DieRoller();

int main()
{
	// Initialize the GuessNumber obj
	auto* guessNumber = new GuessNumber();

	return 0;
}

void ScoreRater()
{
	if(true)
	{
		cout << "This is always displayed.\n\n";
	}

	if(false)
	{
		cout << "This is never displayed.\n\n";
	}

	int score = 1000;
	if(score)
	{
		cout << "At least you didn't score zero.\n\n";
	}

	if(score >= 250)
	{
		cout << "You scored 250 or more. Decent. \n\n";
	}

	if(score >= 500)
	{
		cout << "You scored 500 or more. Nice.\n\n";
		if(score >= 1000)
		{
			cout << "You scored 1000 or more. Impressive.\n\n";
		}
	}
}

void ScoreRater2()
{
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if(score >= 1000)
	{
		cout << "You scored 1000 or more. Impressive!\n";
	}
	else
	{
		cout << "You scored less than 1000.\n";
	}
}

void ScoreRater3()
{
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if(score >= 1000)
	{
		cout << "You scored 1000 or more. Impressive!\n";
	}
	else if(score >= 500)
	{
		cout << "You scored 500 or more. Nice.\n";
	}
	else if(score >= 250)
	{
		cout << "You scored 250 or more. Decent.\n";
	}
	else
	{
		cout << "You scored less than 250. Nothing to brag about.\n";
	}
}

void MenuChooser()
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "You picked Easy.";
			break;
		case 2:
			cout << "You picked Normal.";
			break;
		case 3:
			cout << "You picked Hard.";
			break;
		default:
			cout << "You made an illegal choice.\n";
			break;
	}
}

void PlayAgain()
{
	char again = 'y';
	while(again == 'y')
	{
		cout << "\n**Played an exciting game**";
		cout << "\nDo you want to play again? (y/n): ";
		cin >> again;
	}

	cout << "\nOkay, bye.";
}

void PlayAgain2()
{
	char again;
	do
	{
		cout << "\n**Played an exciting game**";
		cout << "\nDo you want to play again? (y/n): ";
		cin >> again;
	} while (again == 'y');

	cout << "\nOkay, bye.";
}

void FinickyCounter()
{
	int count = 0;

	while(true)
	{
		count += 1;

		// end loop if count is greater than 10
		if(count > 10)
		{
			break;
		}

		// skip the number 5
		if(count == 5)
		{
			continue;
		}

		cout << count << endl;
	}
}

void DesignersNetwork()
{
	string username;
	string password;
	bool success;

	cout << "\tGame Designer's Network\n";

	do
	{
		cout << "\nUsername: ";
		cin >> username;

		cout << "Password: ";
		cin >> password;

		if(username == "Seldon" && password == "padme")
		{
			cout << "\nHey, Seldon.";
			success = true;
		}
		else if(username == "S.Miyamoto" && password == "mariobros")
		{
			cout << "\nKonichiwa, Miyamoto-san";
			success = true;
		}
		else if(username == "guest" || password == "guest")
		{
			cout << "\nWelcome, guest.";
			success = true;
		}
		else
		{
			cout << "\nYour login failed.";
			success = false;
		}
	} while (!success);
}

void DieRoller()
{
	srand(static_cast<unsigned int>(time(0)));	// seed random number generator

	int randomNumber = rand();	// generate random number

	int die = (randomNumber % 6) + 1; // Get a number between 1 and 6
	cout << "You rolled a " << die << endl;
}