#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(void)
{
	srand(time(NULL));
	for(int i=0; i<10; i++)
	{
		cout<<"["<<rand()%30<<","<<rand()%135<<"]"<<flush<<endl;
		system("sleep 1");
	}

	cout<<"\n\n";

	return 0;
}
