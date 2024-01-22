#include "Player.h"

Player::Player(const string& name):
m_Name(name),
m_pNext(0)
{}

string Player::GetName() const
{
	return m_Name;
}

Player* Player::GetNext() const
{
	return m_pNext;
}

void Player::SetNext(Player* next)
{
	m_pNext = next;
}