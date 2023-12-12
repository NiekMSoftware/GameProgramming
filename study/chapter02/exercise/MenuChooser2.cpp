#include "MenuChooser2.h"

MenuChooser2::MenuChooser2()
{
	difficulty = Normal;
	choice = difficulty;
}

MenuChooser2::~MenuChooser2() = default;

void MenuChooser2::Run()
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n";

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
