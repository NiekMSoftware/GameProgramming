#pragma once
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;
using std::ostream;
using std::cin;

class Critter
{
	friend void Peek(const Critter& aCritter);
	friend ostream& operator<<(ostream& os, const Critter& aCritter);

public:
	Critter(const string& name = "");
	string GetName() const;

private:
	string m_Name;
};

class Farm
{
public:
	Farm(int spaces = 1);
	void Add(const Critter& aCritter);
	void RollCall() const;

private:
	vector<Critter> m_Critters;
};
