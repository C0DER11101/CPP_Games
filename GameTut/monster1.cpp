#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include "Monster.h"
#include "Monster.cpp"


int main(void)
{
	Monster monster1("Tom");
	Monster monster2("Jerry");
	
	monster1.printName();
	monster2.printName();
	return 0;
}
