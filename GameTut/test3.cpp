#include<iostream>

using namespace std;

int main(void)
{
	int a=10, c;

	int&b=a;

	c=b;

	cout<<"\n------------------\n";
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";

	c=30;

	cout<<"\nc is made 30";
	cout<<"\n------------------\n";
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";

	a=40;

	cout<<"\na is made 40";
	cout<<"\n------------------\n";
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";

	b=100;

	cout<<"\nb is made 100";
	cout<<"\n------------------\n";
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	return 0;
}
