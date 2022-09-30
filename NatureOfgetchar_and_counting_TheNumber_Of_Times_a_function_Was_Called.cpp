#include<iostream>

using namespace std;

static int tracker();

int main(void)
{
	char n;
	int counter, i=0;

	while(n!='e')
	{
		n=getchar();
		getchar(); // getchar() discards the carriage return which is provided as input to n=getchar() when you press enter after
		// entering a character, so to catch that discarded carriage return I have used another getchar() function here!!!
		counter=tracker();
	}

	cout<<"tracker() had been called "<<counter<<" times!!\n\n";

	return 0;
}


static int tracker()
{
	static int count=0;

	count++;
	return count;
}
