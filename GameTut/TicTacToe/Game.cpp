#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include "Game.h"
#include "GamePlay.cpp"

int main(void)
{
	string name1, name2;
	char sym1, sym2;
	int dim, turn=0;

	cout<<"**Welcome to Tic-Tac-Toe**\n\n";

	cout<<"\n\nEnter dimensions for the board: ";
	cin>>dim;

	cout<<"Enter name of player1: ";
	cin>>name1;
	cout<<name1<<", please enter your preferred symbol: ";
	cin>>sym1;

	Game player1(name1, dim, sym1);

	cout<<"Enter name of player2: ";
	cin>>name2;
	cout<<name2<<", please enter your preferred symbol: ";
	cin>>sym2;
	Game player2(name2, dim, sym2);

	Game winner;

	system("sleep 1");
	system("clear");
	showBoard(dim);

	while(true)
	{
		if(turn==0)
		{
			int result=player1.playerInput();
			if(result==-1)
			{
				cout<<"\nEnter again!!\n\n";
				continue;
			}

			system("clear");

			turn=1;
		}

		else
		{
			int result=player2.playerInput();
			if(result==-1)
			{
				cout<<"\nEnter again!!\n\n";
				continue;
			}

			system("clear");

			turn=0;
		}

		showBoard(dim);
		winner=checkWinner(player1, player2, dim);
		defobj.verifyPlayer(winner, player1, player2);

	}

	return 0;
}
