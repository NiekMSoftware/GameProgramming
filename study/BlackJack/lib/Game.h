#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

#include "Deck.h"
#include "House.h"
#include "Player.h"

using std::vector;
using std::string;
using std::cout;
using std::cin;

class Game
{
public:
    Game(const vector<string>& names);
    ~Game();

    // plays the game of blackjack
    void Play();

private:
    Deck m_Deck;
    House m_House;
    vector<Player> m_Players;
};
