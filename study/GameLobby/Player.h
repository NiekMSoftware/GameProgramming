#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Player
{
public:
	// constructor
	Player(const string& name = "");

	string GetName() const;
	Player* GetNext() const;
	void SetNext(Player* next);

private:
	string m_Name;
	Player* m_pNext;
};
