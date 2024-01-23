#pragma once
#include "GenericPlayer.h"
#include "Hand.h"

class Deck : public Hand
{
public:
    Deck();
    ~Deck() override;

    // create a standard deck of 52 cards
    void Populate();

    // shuffle cards
    void Shuffle();

    // deal one card to a hand
    void Deal(Hand& aHand);

    // give additional cards to a generic player
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};
