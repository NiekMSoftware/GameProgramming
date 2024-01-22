#include <iostream>

#include "Creature.h"
#include "Orc.h"
#include "lib/Boss.h"
#include "lib/Enemy.h"

using std::cout;

int main()
{
	Creature* pCreature = new Orc();
	pCreature->Greet();
	pCreature->DisplayHealth();

	return 0;
}