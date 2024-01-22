#include <iostream>

#include "lib/Boss.h"
#include "lib/Enemy.h"

using std::cout;

int main()
{
	cout << "Calling Attack() on Boss object through pointer to Enemy:\n";
	Enemy* pBadGuy = new Boss();
	pBadGuy->Attack();

	cout << "\n\nDeleting pointer to Enemy:\n";
	delete pBadGuy;
	pBadGuy = 0;
	return 0;
}