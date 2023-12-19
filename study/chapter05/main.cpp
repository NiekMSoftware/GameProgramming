#include <iostream>

using namespace std;

// Instructions
// Demonstrates writing new functions
void chapter5_1();

// Yes or No
// Demonstrates return values and parameters
char askYesNo1();
char askYesNo2(string question);
void chapter5_2();

// Scoping
// Demonstrates scropes
void func();
void chapter5_3();

int main()
{
	chapter5_3();
	return 0;
}

// function definition
void chapter5_1()
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

// ask questions
void chapter5_2()
{
	char answer1 = askYesNo1();
	cout << "Thanks for answering: " << answer1 << "\n\n";

	char answer2 = askYesNo2("Do you wish to save the game?");
	cout << "Thanks for answering: " << answer2 << "\n";
}

void func()
{
	int var = 15; // local variable in func()
	cout << "In func() var is: " << var << "\n\n";
}

// run in main | each paragraph acts as the main
void chapter5_3()
{
	int var = 5;	// local variable in main()
	cout << "In main() var is: " << var << "\n\n";

	func();

	cout << "Back in main() var is: " << var << "\n\n";

	{
		cout << "In main() in a new scope var is: " << var << "\n\n";

		cout << "Creating new var in a new scope.\n";
		int var = 10; // variable in new scope, hides other variable named var.
		cout << "In main() in a new scope var is: " << var << "\n\n";
	}

	cout << "At the end of main() var created in new scope no longer exists.\n";
	cout << "At ehn end of main() var is: " << var << "\n\n";
}