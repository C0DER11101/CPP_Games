#include<iostream>
#include "mechanism.h"

int main(void)
{
	int duration;
	char symbol;

	cout<<"enter symbol to display: ";
	cin>>symbol;

	cout<<"enter duration: ";
	cin>>duration;

	Text t(symbol, duration);

	t.repeat();

	return 0;
}
