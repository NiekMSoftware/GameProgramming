#pragma once

#include <iostream>
#include <string>

#include "Player.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

class Lobby
{
	friend ostream& operator<<(ostream& os, const Lobby& aLobby);

public:
	Lobby();
	~Lobby();

	void AddPlayer();
	void RemovePlayer();
	void Clear();

private:
	Player* m_pHead;
};
