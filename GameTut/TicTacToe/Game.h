#ifndef Name_H
#define Name_H

using namespace std;

char board[100][100];

class Game
{
	string _PlayerName;
	int _dimension; // board's dimensions
	char _PlayerSymbol;

	public:

	Game();
	Game(string, int, char);
	int playerInput();
	char playerSymbol(); // returns the player's symbol
	int placeSymbol(int, int);
	void quoteWinner();
	void verifyPlayer(Game&, Game&, Game&); // verifies if the player participated in the game or not!!

};

Game defobj; // just a default object!!
void showBoard(int);
Game&checkWinner(Game&, Game&, int); // checks who has entered 3 consecutive symbols(This function is incomplete!!!)

#endif
