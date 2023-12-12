#include "GuessNumber.h"

GuessNumber::GuessNumber()
{
	RunApp();
}

void GuessNumber::RunApp()
{
	srand(static_cast<unsigned int>(time(0)));	// seed random number generator

	int secretNumber = rand() % 100 + 1; // random number between 1 and 100
	int tries = 0;
	int guess;

	cout << "\tWelcome to Guess My Number\n\n";

	/* Start the loop */
	do
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "To low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);
}