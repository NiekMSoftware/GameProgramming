#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Hand.h"

using std::string;
using std::vector;
using std::cout;
using std::ostream;

class GenericPlayer : public Hand
{
    friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);
public:
    GenericPlayer(const string& name = "");
    ~GenericPlayer() override;

    // indicates whether or not generic player wants to keep hitting
    virtual bool IsHitting() const;

    // returns whether generic player has busted - has a total greater than 21
    bool IsBusted() const;

    // announces that the generic player busts
    void Bust() const;

protected:
    string m_Name;
};
