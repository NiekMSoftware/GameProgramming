#pragma once
#include "Card.h"

class Hand
{
public:
    Hand();

    virtual ~Hand();

    // adds card to the hand
    void Add(Card* pCard);

    // clears hand of all cards
    void Clear();

    // gets h and total value, intelligently treats aces as 1 or 11
    int GetTotal() const;

protected:
    vector<Card*> m_Cards;
};
