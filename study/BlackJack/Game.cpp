#include "Game.h"

Game::Game(const vector<string>& names)
{
    // Create a vector of players from a vector of names
    vector<string>::const_iterator pName;
    for (pName == names.begin(); pName != names.end(); ++pName)
    {
        m_Players.push_back(Player(*pName));
    }

    // seed the random num gen
    srand(static_cast<unsigned int>(time(0)));
    m_Deck.Populate();
    m_Deck.Shuffle();
}

Game::~Game()
{}

void Game::Play()
{
    // deal initial 2 cards to everyone
    vector<Player>::iterator pPlayer;
    for (int i = 0; i < 2; ++i)
    {
        for (auto player : m_Players)
        {
            m_Deck.Deal(player);
        }
        m_Deck.Deal(m_House);
    }
}