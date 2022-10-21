#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

using namespace std;

int main(void)
{
	int row=30, col=140;
	char box[row][col], player='@', move;

	srand(time(NULL));
	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
			box[i][j]=' ';


	for(int i=1; i<col-2; i++)
		box[0][i]='-';

	for(int i=0; i<row; i++)
		box[i][0]='|';
	for(int i=0; i<row; i++)
		box[i][col-1]='|';
	for(int i=1; i<col-2; i++)
		box[row-1][i]='-';

	int prow=1, pcol=1;
	box[prow][pcol]=player;

	system("clear");
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
			cout<<box[i][j];
		cout<<"\n";
	}

	while(move!='q')
	{
		move=_getche();

		switch(move)
		{
			case 'h': case 'H':
				if(pcol!=1)
				{
					box[prow][pcol]=' ';
					pcol--;
					box[prow][pcol]=player;
				}

				box[rand()%(row-2)+1][rand()%(col-2)+1]='$';

				break;

			case 'j': case 'J':
				if(prow!=row-2)
				{
					box[prow][pcol]=' ';
					prow++;
					box[prow][pcol]=player;
				}

				box[rand()%(row-2)+1][rand()%(col-2)+1]='$';

				break;

			case 'k': case 'K':
				if(prow!=1)
				{
					box[prow][pcol]=' ';
					prow--;
					box[prow][pcol]=player;
				}

				box[rand()%(row-2)+1][rand()%(col-2)+1]='$';

				break;

			case 'l': case 'L':
				if(pcol!=col-2)
				{
					box[prow][pcol]=' ';
					pcol++;
					box[prow][pcol]=player;
				}

				box[rand()%(row-2)+1][rand()%(col-2)+1]='$';

				break;

		}

		system("clear");
		for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
				cout<<box[i][j];
			cout<<"\n";
		}

		for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
				if(box[i][j]=='$')
					box[i][j]=' ';
			}
		}
	}

	return 0;
}
