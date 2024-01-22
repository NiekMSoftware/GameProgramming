#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

class Critter2
{
public:
	Critter2(const string& name = "", int age = 0);
	~Critter2();			// destructor prototype
	Critter2(const Critter2& c);		// copy of constructor prototype
	Critter2& operator=(const Critter2& c);	// overloaded assignment op
	void Greet() const;

private:
	string* m_pName;
	int m_Age;
};
