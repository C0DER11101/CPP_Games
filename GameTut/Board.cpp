#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(void)
{
	char board[10][10];

	for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
			board[i][j]='|';

	cout<<" ";
	for(int i=0; i<9; i++)
		cout<<" "<<i;
	cout<<"\n ";
	for(int i=0; i<19; i++)
		cout<<"-";
	cout<<"\n";

	for(int i=0; i<10; i++)
	{
		cout<<i;
		for(int j=0; j<10; j++)
			cout<<board[i][j]<<" ";
		cout<<"\n ";
		for(int j=0; j<19; j++)
			cout<<"-";
		cout<<"\n";
	}


	return 0;
}
