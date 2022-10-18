#include<iostream>
#include<string.h>

using namespace std;

const int numItems=6;
const string shopItemNames[numItems]={"Boots", "Swords", "Helmets", "Kittens", "Poleaxes", "Leggings"}; // array of strings!!
// constant variables and arrays can be made global!!

void printInventory(int[numItems]);
void printShop();
void BuyItems(int[numItems]);

int main(void)
{
	bool Done=false;
	
	int playerInventory[numItems]={0, 0, 0, 1, 0, 0};
	
	while(!Done) // this is the "Game Loop"
	{
		printShop();
		printInventory(playerInventory);
		BuyItems(playerInventory);
	}

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

void printShop()
{
	cout<<"***Welcome to Item Shop!!\n";

	for(int i=0; i<numItems; i++)
		cout<<i+1<<"."<<shopItemNames[i]<<"\n";
	cout<<"*****************\n";
}

void BuyItems(int playerInventory[numItems])
{
	int input;
	cout<<"What would you like to buy? Enter ["<<1<<"-"<<numItems<<"]"<<":";
	cin>>input;

	if(input<0)
	{
		cout<<"Visit again!!\n";
		exit(0);
	}

	if(input-1>=0 && input-1<numItems)
	{
		playerInventory[input-1]++;
	}

	else
	{
		cout<<"\n\nUh-oh! That was not expected!!\n";
		return;
	}
}
