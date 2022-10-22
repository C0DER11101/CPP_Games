#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main(void)
{
	int row, col;

	char n;

	while(n!='e')
	{
		n=_getche();
		row=n-'0';
		n=_getche(); // for the space!!!
		n=_getche();
		col=n-'0';

		cout<<"\n\n";
		cout<<"Row"<<setw(30)<<"Col"<<"\n";
		cout<<row<<setw(30)<<col<<"\n";
	}

	return 0;
}
