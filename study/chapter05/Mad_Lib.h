#pragma once

// Mad-Lib
// Creates a store based on input | Class

#include <iostream>
#include <string>

using namespace std;

class Mad_Lib
{
public:
	Mad_Lib();
	void RunApp();

private:
	string askText(string prompt);
	int askNumber(string prompt);
	void tellStory(string name, string noun, int number, string bodyPart, string verb);
};
