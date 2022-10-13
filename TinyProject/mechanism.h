#ifndef Mech_H
#define Mech_H

#include<time.h>

using namespace std;

class Text
{
	char symbol;
	char matrix[300][500];
	int repeatDuration;

	public:

	Text(char sym, int duration): symbol(sym), repeatDuration(duration)
	{
		matrix[0][0]=symbol;
		for(int i=0; i<300; i++)
			for(int j=1; j<500; j++)
				matrix[i][j]=' ';
	}

	void repeat();
	void Play();
};

void Text::repeat()
{
	srand(time(NULL));
	for(int i=0; i<repeatDuration; i++)
	{
		system("clear");
		Play();
		cout<<flush;
		system("sleep 1");
	}
}

void Text::Play()
{
	int r, c;
	for(int i=0; i<300; i++)
	{
		for(int j=0; j<500; j++)
		{
			if(matrix[i][j]==symbol)
				r=i, c=j;
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}

	matrix[0+rand()%297][0+rand()%497]=symbol;
	matrix[r][c]=' ';
}

#endif
