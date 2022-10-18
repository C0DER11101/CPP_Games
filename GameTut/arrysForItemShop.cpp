#include<iostream>
#include<string.h>

using namespace std;

int main(void)
{
	string shopItemNames[4]={"Boots", "Sword", "Helmet", "Kitten"}; // array of strings!!
	
	cout<<"***Welcome to Item Shop!!\n";

	for(int i=0; i<4; i++)
		cout<<shopItemNames[i]<<"\n";
	cout<<"*****************\n";
	cout<<"What would you like to buy?\n";

	return 0;
}
