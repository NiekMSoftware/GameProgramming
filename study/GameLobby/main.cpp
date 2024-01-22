#include "Lobby.h"

int main()
{
	Lobby lobby;
	int choice;

	do
	{
		cout << lobby;
		cout << "\nGAME LOBBY\n";
		cout << "0 - Exit the program.\n";
		cout << "1 - Add a player to the lobby.\n";
		cout << "2 - Remove a player from the lobby.\n";
		cout << "3 - Clear the lobby.\n";
		cout << endl << "Enter choice: ";
		cin >> choice;

		switch (choice)
		{
			case 0: cout << "Good-bye.\n";
				break;
			case 1: lobby.AddPlayer();
				break;
			case 2: lobby.RemovePlayer();
				break;
			case 3: lobby.Clear();
				break;
			default: cout << "That was not a valid choice.\n";
		}
	} while (choice != 0);

	return 0;
}
