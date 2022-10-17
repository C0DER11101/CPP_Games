#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>
#include<iomanip>

using namespace std;

// Humans vs Skeletons version 2


void fight(int&, int&);
void Status(int, int);
char winner(int, int);

int main(void)
{
	srand(time(NULL));
	int numHumans, numSkeletons;

	cout<<"enter number of humans: ";
	cin>>numHumans;
	cout<<"enter number of skeletons: ";
	cin>>numSkeletons;

	while(numHumans!=0 && numSkeletons!=0)
	{
		system("clear");
		fight(numHumans, numSkeletons);
		cout<<flush;
		system("sleep 1");
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
	if((1+(rand()%10))%2==0)
		numH--;
	else
		numS--;
	Status(numH, numS);
}

void Status(int numH, int numS)
{
	cout.setf(ios::left, ios::adjustfield);
	cout<<"Humans"<<setw(30)<<resetiosflags(ios::left)<<"Skeletons"<<"\n";
	cout.setf(ios::left, ios::adjustfield);
	cout<<"["<<numH<<"]"<<setw(30)<<resetiosflags(ios::left)<<"["<<numS<<"]"<<"\n";
}

char winner(int numH, int numS)
{
	if(numH>numS)
		return 'h';
	else
		return 's';
}
