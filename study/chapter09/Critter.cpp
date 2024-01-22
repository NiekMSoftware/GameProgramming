#include "Critter.h"

Critter2::Critter2(const string& name, int age)
{
	cout << "Constructor called\n";
	m_pName = new string(name);
	m_Age = age;
}

Critter2::~Critter2()
{
	cout << "Destructor called\n";
	delete m_pName;
}

Critter2::Critter2(const Critter2& c)
{
	cout << "Copy Constructor called\n";
	m_pName = new string(*(c.m_pName));
	m_Age = c.m_Age;
}

Critter2& Critter2::operator=(const Critter2& c)
{
	cout << "Overloaded Assignment Operator called\n";
	if(this != &c)
	{
		delete m_pName;
		m_pName = new string(*(c.m_pName));
		m_Age = c.m_Age;
	}
	return *this;
}

void Critter2::Greet() const
{
	cout << "I'm " << *m_pName << " and I'm " << m_Age << " years old. ";
	cout << "&m_pName: " << &m_pName << endl;
}