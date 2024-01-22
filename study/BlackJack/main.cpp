#include <iostream>

#include "lib/Boss.h"
#include "lib/Enemy.h"

using std::cout;

int main()
{
	cout << "Enemy Object:\n";
	Enemy enemy1;
	enemy1.Taunt();
	enemy1.Attack();

	cout << "\n\nBoss Object:\n";
	Boss boss1;
	boss1.Taunt();
	boss1.Attack();

	return 0;
}