#include<iostream>
#include<string.h>

using namespace std;

const int numItems=6;
const string shopItemNames[numItems]={"Boots", "Swords", "Helmets", "Kittens", "Poleaxes", "Leggings"}; // array of strings!!
// constant variables and arrays can be made global!!

void printInventory(int[numItems]);

int main(void)
{
	
	int playerInventory[numItems]={0, 0, 0, 1, 0, 0};
	cout<<"***Welcome to Item Shop!!\n";

	for(int i=0; i<numItems; i++)
		cout<<shopItemNames[i]<<"\n";
	cout<<"*****************\n";
	printInventory(playerInventory);
	cout<<"What would you like to buy?\n";

	return 0;
}

void printInventory(int playerInventory[numItems])
{
	cout<<"You inventory is:\n";
	for(int i=0; i<numItems; i++)
	{
		if(playerInventory[i]>0)
			cout<<playerInventory[i]<<" x "<<shopItemNames[i]<<"\n";
	}
	cout<<"\n";
}
