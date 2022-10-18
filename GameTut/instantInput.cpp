#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>

using namespace std;

int main(void)
{
	char n='a';
	int row=-1, col=-1;

	while(row==-1 || col==-1)
	{
		n=_getche();
		row=n-'0';
		n=_getche();
		col=n-'0';
	}

	cout<<"\n\nRow = "<<row<<setw(20)<<"Col = "<<col<<"\n";
	cout<<"\n\nSum of rows and columns: "<<row+col<<"\n";
	return 0;
}
