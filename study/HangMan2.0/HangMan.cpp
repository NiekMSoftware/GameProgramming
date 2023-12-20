// Source script of Hangman

#include "HangMan.h"

HangMan::HangMan()
	:MAX_WRONG(8)
{
	Initialize();
}

void HangMan::RunGame()
{
	const string THE_WORD = words[0];

	// generate random words to write to the console
	srand(static_cast<unsigned int>(time(0)));
	std::random_shuffle(words.begin(), words.end());

	string soFar(THE_WORD.size(), '-');

	cout << "Welcome to Hangman. Good luck!\n";

	// main loop
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	{
		cout << "\n\nYou have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left.\n";
		cout << "\nYou've used the following letters:\n" << used << endl;
		cout << "\nSo far, the word is:\n" << soFar << endl;

		// Get the guess
		GetGuess();

		// process the guess
		if (THE_WORD.find(guess) != string::npos)
		{
			cout << "That's right! " << guess << " is in the word.\n";

			// update soFar to include newly guessed letters
			for (int i = 0; i < THE_WORD.length(); ++i)
			{
				if (THE_WORD[i] == guess)
				{
					soFar[i] = guess;
				}
			}
		}
		else
		{
			cout << "Sorry, " << guess << " isn't in the word.\n";
			++wrong;

			// Update the hangman ascii
		}
	}

	OutOfGuess();
}

void HangMan::Initialize()
{
	wrong = 0;

	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");
	words.push_back("CINDER-BLOCK");
	words.push_back("SEESHARP");
}

void HangMan::GetGuess()
{
	// Get player guess
	cout << "\n\nEnter your guess: ";
	cin >> guess;
	guess = toupper(guess);	// make uppercase since secret word in uppercase
	while (used.find(guess) != string::npos)
	{
		cout << "\nYou've already guessed " << guess << endl;
		cout << "Enter your guess: ";
		cin >> guess;
		guess = toupper(guess);
	}

	used += guess;
}

bool HangMan::OutOfGuess()
{
	if(wrong == MAX_WRONG)
	{
		cout << "\nYou have been hanged!";
		return true;
	}

	cout << "\nYou guess it!";
	return false;
}
