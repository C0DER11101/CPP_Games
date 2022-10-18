#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(void)
{
	// print the loading symbol....
	while(true)
	{
		cout<<setw(70)<<"\\";
		system("sleep 0.1");
		system("clear");
		cout<<flush;
		cout<<setw(70)<<"|";
		system("sleep 0.1");
		system("clear");
		cout<<flush;
		cout<<setw(70)<<"/";
		system("sleep 0.1");
		system("clear");
		cout<<flush;
	}
	return 0;
}
