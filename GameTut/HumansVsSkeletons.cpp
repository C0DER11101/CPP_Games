#include<iostream>
#include<iomanip>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

// HUMANS VS SKELETONS!!

using namespace std;

int main(void)
{
	int Humans, Skeletons;


	cout<<"enter number of humans: ";
	cin>>Humans;

	cout<<"enter number of skeletons: ";
	cin>>Skeletons;

	int humanHealth=Humans, skeletonHealth=Skeletons;

	srand(time(NULL));

	while(Humans!=0 && Skeletons!=0)
	{
		system("clear");
		cout<<"<Battle noises>"<<flush<<endl;
		if(rand()%10+1>5) // generate random numbers between 1 and 10
		{
			Skeletons--;
			skeletonHealth--;
		}

		else
		{
			Humans--;
			humanHealth--;
		}

		cout.setf(ios::left, ios::adjustfield);
		cout<<"[Human Health]"<<resetiosflags(ios::left)<<setw(30)<<"[Skeleton Health]"<<flush<<endl;
		cout.setf(ios::left, ios::adjustfield);
		cout<<"["<<humanHealth<<"%]"<<resetiosflags(ios::left)<<setw(30)<<"["<<skeletonHealth<<"%]"<<flush;
	}

	cout<<"\n\n\n";

	if(Humans==0)
		cout<<"[The skeletons won the battle!!]"<<"\n[Skeletons Left: "<<Skeletons<<"]"<<endl;
	else
		cout<<"[The humans won the battle!!]"<<"\n[Humans Left: "<<Humans<<"]"<<endl;
	return 0;
}
