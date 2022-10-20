#include<iostream>

using namespace std;

int main(void)
{
	int a=10;
	int &b=a;

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";

	b=40;

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";

	return 0;
}
