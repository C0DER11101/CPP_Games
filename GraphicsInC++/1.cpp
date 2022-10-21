// C++ code to illustrate using
// graphics in linux environment

#include<iostream>
#include<stdlib.h>
#include<graphics.h>

using namespace std;

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);

	circle(50, 50, 30);

	delay(500000);
	closegraph();
	return 0;
}

