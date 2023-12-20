#pragma once

// Hangman Class

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

class HangMan
{
public:
	HangMan();

	void RunGame();

private:
	void Initialize();

	void GetGuess();
	bool OutOfGuess();

	const int MAX_WRONG;	// maximum of incorrect answers allowed
	int wrong;

	vector<string> words;	// collection of words to guess

	string used;

	char guess;
};