#include <iostream>

#include "lib/Boss.h"
#include "lib/Enemy.h"

using std::cout;

int main()
{
	cout << "Creating an enemy...\n";
	Enemy enemy1;
	enemy1.Attack();

	cout << "\nCreating a boss...\n";
	Boss boss1;
	boss1.Attack();
	boss1.SpecialAttack();

	return 0;
}