#include "GuessMyNumber2.h"

GuessMyNumber2::GuessMyNumber2()
{
	Init();
}

void GuessMyNumber2::Init()
{
	lowerBound = 1;
	upperBound = 100;

	tries = 0;
}

void GuessMyNumber2::Run()
{
	cout << "Welcome to Guess My Number\n\n";
	cout << "Enter a number between 1 and 100 for the computer to guess: ";
	cin >> targetNumber;

	while (targetNumber < 1 || targetNumber > 100)
	{
		cout << "Invalid number. Please enter a number between 1 and 100: ";
		cin >> targetNumber;
	}

	do
	{
		guess = (lowerBound + upperBound) / 2;
		++tries;
		if (guess > targetNumber)
		{
			cout << "The computer guessed " << guess << ", which is too high.\n";
			upperBound = guess - 1;
		}
		else if (guess < targetNumber)
		{
			cout << "The computer guess " << guess << ", which is too low.\n";
			lowerBound = guess + 1;
		}
		else
		{
			cout << "Hooray! The computer guessed your number in " << tries << " tries!\n";
		}
	} while (guess != targetNumber);
}
