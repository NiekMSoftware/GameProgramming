#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

#include "lib/Deck.h"
#include "lib/House.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::ostream;
using std::random_shuffle;

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
