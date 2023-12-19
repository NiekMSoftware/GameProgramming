// Source script of Hangman

#include "Hangman.h"

void Hangman::RunGame()
{
	// setup
	const int MAX_WRONG = 8;	// maximum of incorrect answers allowed

	vector<string> words;	// collection of possible words to guess
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");
	words.push_back("CINDER-BLOCK");
	words.push_back("SEESHARP");

	char answer;	// to get final answer of player

	do
	{
		// generate random words to write to the console
		srand(static_cast<unsigned int>(time(0)));
		std::random_shuffle(words.begin(), words.end());

		const string THE_WORD = words[0];
		int wrong = 0;
		string soFar(THE_WORD.size(), '-');
		string used = "";

		cout << "Welcome to Hangman. Good luck!\n";

		// main loop
		while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
		{
			cout << "\n\nYou have " << (MAX_WRONG - wrong);
			cout << " incorrect guesses left.\n";
			cout << "\nYou've used the following letters:\n" << used << endl;
			cout << "\nSo far, the word is:\n" << soFar << endl;

			// Get player guess
			char guess;
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
			}
		}

		if (wrong == MAX_WRONG)
		{
			cout << "\nYou've been hanged!\n";
		}
		else
		{
			cout << "\nYou guessed it!\n";
		}

		cout << "\nWould you like to play again? (y/n): ";
		cin >> answer;
	} while (answer != 'n');

	answer = ' '; // reset answer's value
}
