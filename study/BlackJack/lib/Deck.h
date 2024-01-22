#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

#include "GenericPlayer.h"
#include "Hand.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::ostream;
using std::random_shuffle;

class Deck : public Hand
{
public:
    Deck();
    ~Deck() override;

    // creates a standard deck of 52 cards
    void Populate();

    // shuffle cards
    void Shuffle();

    // deal one card to a hand
    void Deal(Hand& aHand);

    // gives additional cards to a generic player
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};
