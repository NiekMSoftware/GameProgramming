#pragma once

#include <iostream>

using std::cout;
using std::cin;

// This class will be able to have a little monster called a Critter.
// You can take care of the Critter: talk, eat and play with the Critter.
// Player can also get the mood from the Critter
class critter_caretaker
{
public:
	// Constructor to initialize the hunger and boredom of the Critter.
	critter_caretaker(int hunger = 0, int boredom = 0);

	// Talk to the Critter
	void Talk();

	// Feed the Critter
	void Eat(int food = 4);

	// Play with the Critter
	void Play(int fun = 4);

	// Function to run this class as application
	void RunApp();
private:
	// m_Hunger is a stat of the Critter, make sure to initialize this in the constructor
	int m_Hunger;

	// m_Boredom is a stat of the Critter, make sure to initialize this in the constructor
	int m_Boredom;

	// Get the mood of the Critter, this is a constant value.
	int GetMood() const;

	// Pass time to increase the stats of the Critter.
	void PassTime(int time = 1);
};
