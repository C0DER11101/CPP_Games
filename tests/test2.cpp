#include<iostream>

using namespace std;

void arrow();
int main(void)
{
	arrow();
	return 0;
}

void arrow()
{
	for(int i=0; i<30; i++)
	{
		system("clear");
		cout.width(i*2);
		cout<<"->"<<flush;
		system("sleep 0.1");
	}
	cout<<"\n\n";
}
