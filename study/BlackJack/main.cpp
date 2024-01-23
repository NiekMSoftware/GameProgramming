#include <iostream>
#include <string>
#include <vector>

#include "lib/Card.h"
#include "lib/Game.h"
#include "lib/GenericPlayer.h"

using std::ostream;
using std::cout;
using std::cin;
using std::string;
using std::vector;

// function prototypes
ostream& operator<<(ostream& os, const Card& aCard);

int main()
{
    cout << "\t\tWelcome to Blackjack!\n\n";

    int numOfPlayers = 0;
    while (numOfPlayers < 1 || numOfPlayers > 7)
    {
        cout << "How many players? (1 - 7): ";
        cin >> numOfPlayers;
    }

    vector<string> names;
    string name;
    for (int i = 0; i < numOfPlayers; ++i)
    {
        cout << "Enter player name: ";
        cin >> name;
        names.push_back(name);
    }
    cout << "\n";

    // the game loop
    Game aGame(names);
    char again = 'y';
    while (again != 'n' && again != 'N')
    {
        aGame.Play();
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> again;
    }
    
    return 0;
}


// overloads << operator so Card object can be sent to cout
ostream& operator<<(ostream& os, const Card& aCard)
{
    const string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7",
                            "8", "9", "10", "J", "Q", "K"};
    const string SUITS[] = {"c", "d", "h", "s"};

    if(aCard.m_IsFaceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }

    return os;
}

// overloads << operator so a GenericPlayer object can be sent to cout
ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
    os << aGenericPlayer.m_Name << ":\t";

    vector<Card*>::const_iterator pCard;
    if(!aGenericPlayer.m_Cards.empty())
    {
        for(pCard = aGenericPlayer.m_Cards.begin(); pCard != aGenericPlayer.m_Cards.end(); ++pCard)
        {
            os << *(*pCard) << "\t";
        }

        if(aGenericPlayer.GetTotal() != 0)
        {
            cout << "(" << aGenericPlayer.GetTotal() << ")";
        }
    }
    else
    {
        os << "<empty>";
    }

    return os;
}