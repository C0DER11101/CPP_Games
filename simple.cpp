#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(void)
{
	srand(time(0));

	system("clear");
	for(int i=0; i<10; i++)
	{
		cout<<rand()%30+10<<flush; // formula to generate random numbers in a range!!
		system("sleep 1");
		system("clear");
	}

	return 0;
}
