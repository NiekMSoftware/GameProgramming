// Mad-Lib
// Creates a store based on input | Source

#include "Mad_Lib.h"

Mad_Lib::Mad_Lib() = default;

// Acting as main
void Mad_Lib::RunApp()
{
	cout << "Welcome to Mad Lib.\n\n";
	cout << "Answer the following questions to help create a new story.\n";

	string name = askText("Please enter a name: ");
	string noun = askText("Please enter a plural noun: ");
	int number = askNumber("Please enter a number: ");
	string bodyPart = askText("Please enter a body part: ");
	string verb = askText("Please enter a verb: ");

	tellStory(name, noun, number, bodyPart, verb);
}

int Mad_Lib::askNumber(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;

	return num;
}

string Mad_Lib::askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;

	return text;
}

void Mad_Lib::tellStory(string name, string noun, int number, string bodyPart, string verb)
{
	cout << "\nHere's your story:\n";
	cout << "The famous explorer " << name;
	cout << " had nearly given up a life-long quest to find\n";
	cout << "The Lost City of " << noun << " when one day, ";
	cout << "the " << noun << " found the explorer.\n";

	cout << "Surrounded by " << number << " " << noun;
	cout << ", a tear came to " << name << "'s " << bodyPart << ".\n";
	cout << "After all this time, the quest was finally over. ";
	cout << "And then the " << noun << "\n";
	cout << "promptly devoured " << name << '.';

	cout << "The moral of the story? Be careful what you " << verb << " for.";
}
