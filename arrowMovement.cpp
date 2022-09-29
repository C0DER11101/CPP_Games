#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	for(int i=0; i<50; i++)
	{
		system("clear");
		cout<<setiosflags(ios::left);
		cout<<resetiosflags(ios::left);
		cout<<"["<<i<<"]"<<flush;
		cout<<setw(i*2)<<"->"<<flush;
		system("sleep 0.09");
	}
	cout<<"\n\n";

	return 0;
}
