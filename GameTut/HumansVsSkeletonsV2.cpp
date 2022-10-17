#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>
#include<iomanip>

using namespace std;

// Humans vs Skeletons version 2


void fight(int&, int&);
void showHealthBar(int&, int&);
char winner(int, int);

int main(void)
{
	int numHumans, numSkeletons;

	cout<<"enter number of humans: ";
	cin>>numHumans;
	cout<<"enter number of skeletons: ";
	cin>>numSkeletons;

	while(numHumans!=0 && numSkeletons!=0)
	{
		fight(numHumans, numSkeletons);
		showHealthBar(numHumans, numSkeletons);
	}

	char Victory;

	Victory=winner(numHumans, numSkeletons);

	if(tolower(Victory)=='h')
		cout<<"Humans won the battle!!\n\n";
	else
		cout<<"Skeletons won the battle!!\n\n";
	return 0;
}

void fight(int& numH, int& numS)
{
