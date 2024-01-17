#include "critter_caretaker.h"

critter_caretaker::critter_caretaker(int hunger, int boredom):
m_Hunger(hunger),
m_Boredom(boredom)
{}

inline int critter_caretaker::GetMood() const
{
	return (m_Hunger + m_Boredom);
}

void critter_caretaker::PassTime(int time)
{
	m_Hunger += time;
	m_Boredom += time;
}

void critter_caretaker::Talk()
{
	cout << "I'm a critter and I feel ";
	int mood = GetMood();

	if(mood > 15)
	{
		cout << "mad.\n";
	}
	else if(mood > 10)
	{
		cout << "frustrated.\n";
	}
	else if(mood > 5)
	{
		cout << "okay.\n";
	}
	else
	{
		cout << "happy.\n";
	}

	PassTime();
}


void critter_caretaker::Eat(int food)
{
	cout << "Brruppp.\n";

	m_Hunger -= food;
	if(m_Hunger < 0)
	{
		m_Hunger = 0;
	}
	PassTime();
}

void critter_caretaker::Play(int fun)
{
	cout << "Wheee!\n";

	m_Boredom -= fun;
	if(m_Boredom < 0)
	{
		m_Boredom = 0;
	}
	PassTime();
}

void critter_caretaker::RunApp()
{
	critter_caretaker critter;
	critter.Talk();

	int choice;
	do
	{
		cout << "\nCritter Caretaker\n\n";
		cout << "0 - Quit\n";
		cout << "1 - Listen to your Critter\n";
		cout << "2 - Feed your Critter\n";
		cout << "3 - Play with your Critter\n\n";

		cout << "Choice:\n" << "> ";
		cin >> choice;

		switch (choice)
		{
			case 1:
				critter.Talk();
				break;
			case 2:
				critter.Eat();
				break;
			case 3:
				critter.Play();
				break;
				default:
					cout << "\nSorry, but " << choice << " isn't a valid choice.\n";
		}
	} while (choice != 0);
}