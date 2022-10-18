#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class CheckerBoard
{
	public:
		void initBoard() // initialize board!!
		{
			for(int i=0; i<8; i++)
			{
				for(int j=0; j<8; j++)
				{
					if(i%2==0)
					{
						if(j%2==0)
							_board[i][j]='#';
						else
							_board[i][j]='^';
					}

					else
					{
						if(j%2==0)
							_board[i][j]='^';
						else
							_board[i][j]='#';
					}
				}
			}

		}

		void printBoard()
		{
			for(int i=0; i<8; i++)
			{
				for(int j=0; j<8; j++)
					cout<<_board[i][j]<<" ";
				cout<<"\n";
			}
		}

	private:
		char _board[8][8];
};

int main(void)
{
	CheckerBoard checkerboard;

	checkerboard.initBoard();
	checkerboard.printBoard();
	return 0;
}
