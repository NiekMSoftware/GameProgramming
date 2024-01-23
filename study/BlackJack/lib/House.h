#pragma once
#include "GenericPlayer.h"

class House : public GenericPlayer
{
public:
    House(const string& name = "House");
    ~House() override;

    // indicates whether house is hitting - will always hit on 16 or less
    bool IsHitting() const override;

    // flips over first card
    void FlipFirstCard();
};
