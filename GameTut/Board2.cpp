#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(void)
{
	char board[8][8];

	for(int i=0; i<8; i++)
		for(int j=0; j<8; j++)
			board[i][j]=' ';
	cout<<"  ";
	for(int i=0; i<8; i++)
		cout<<" "<<i;
	cout<<"\n";
	for(int i=0; i<8; i++)
	{
		cout<<" "<<i<<"|";
		for(int j=0; j<8; j++)
			cout<<board[i][j]<<"|";
		cout<<"\n";
	}

	board[0][0]='@';
	cout<<"\n\n\n";
	cout<<"  ";
	for(int i=0; i<8; i++)
		cout<<" "<<i;
	cout<<"\n";
	for(int i=0; i<8; i++)
	{
		cout<<" "<<i<<"|";
		for(int j=0; j<8; j++)
			cout<<board[i][j]<<"|";
		cout<<"\n";
	}

	board[2][2]='^';
	cout<<"\n\n\n";
	cout<<"  ";
	for(int i=0; i<8; i++)
		cout<<" "<<i;
	cout<<"\n";
	for(int i=0; i<8; i++)
	{
		cout<<" "<<i<<"|";
		for(int j=0; j<8; j++)
			cout<<board[i][j]<<"|";
		cout<<"\n";
	}

	return 0;
}
