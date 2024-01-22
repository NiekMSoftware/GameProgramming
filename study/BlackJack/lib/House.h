#pragma once

#include <iostream>
#include <vector>

#include "GenericPlayer.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::ostream;

class House : public GenericPlayer
{
public:
    House(const string& name = "House");
    virtual ~House();

    // indicates whether house is hitting - will always hit on 16 or less
    virtual bool IsHitting() const;

    // flips over first card
    void FlipFirstCard();
};
