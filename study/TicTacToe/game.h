// Tic-Tac-Toe
// Plays the game of tick-tack-toe against a human opponent

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class game
{

public:
	game();
	~game();

	void runGame();

private:
	// ==========================================================
	//
	// global constant chars
	//
	// ==========================================================

	const char X = 'X';
	const char O = 'O';
	const char EMPTY = ' ';
	const char TIE = 'T';
	const char NO_ONE = 'N';

	// ==========================================================
	//
	// void functions
	//
	// ==========================================================
	void instructions();
	void displayBoard(const vector<char>& board);
	void announceWinner(char winner, char computer, char human);

	// ==========================================================
	//
	// Char functions
	//
	// ==========================================================

	char askYesNo(string question);
	char humanPiece();
	char opponent(char piece);
	char winner(const vector<char>& board);

	// ==========================================================
	//
	// integer functions
	//
	// ==========================================================

	int askNumber(string question, int high, int low = 0);
	int humanMove(const vector<char>& board, char human);
	int computerMove(vector<char>& board, char computer);

	// ==========================================================
	//
	// Remaining functions
	//
	// ==========================================================

	bool isLegal(const vector<char>& board, int move);
};
