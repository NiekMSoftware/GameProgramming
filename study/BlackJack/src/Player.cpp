#include "../lib/Player.h"

Player::Player(const string& name):
    GenericPlayer(name)
{}

Player::~Player()
{}

bool Player::IsHitting() const
{
    cout << m_Name << ", do you want a hit? (y/n)";
    char response;
    cin >> response;

    // check response
    if(response == 'y')
        return true;
    if(response == 'n')
        return false;

    // if the user enters anything else, ask again
    return IsHitting();
}

void Player::Win() const
{
    cout << m_Name << " wins!\n";
}

void Player::Lose() const
{
    cout << m_Name << " lost!\n";
}

void Player::Push() const
{
    cout << m_Name << " pushes.\n";   
}