﻿#pragma once

#include "Card.h"

#include <algorithm>
#include<vector>

using std::vector;
using std::random_shuffle;

class Hand
{
public:
    Hand();
    virtual ~Hand();

    // adds a card to the hand
    void Add(Card* pCard);

    // clears hand of all cards
    void Clear();

    // gets hand total value, intelligently treats aces as 1 or 11
    int GetTotal() const;

protected:
    vector<Card*> m_Cards;
};
