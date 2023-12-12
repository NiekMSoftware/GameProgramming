#pragma once

#include <iostream>

using namespace std;

class MenuChooser2
{
public:
	MenuChooser2();
	~MenuChooser2();

	void Run();

private:
	enum Difficulty { Easy = 1, Normal = 2, Hard = 3};
	Difficulty difficulty;

	int choice;
};

