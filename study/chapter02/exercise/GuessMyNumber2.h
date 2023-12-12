#pragma once

#include <iostream>

using namespace std;

class GuessMyNumber2
{
public:
	GuessMyNumber2();

	void Run();

private:
	void Init();

	int lowerBound;
	int upperBound;

	int targetNumber;
	int guess;
	int tries;
};
