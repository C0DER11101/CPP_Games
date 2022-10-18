#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

using namespace std;

class Monster
{
	public:

		void growl()
		{
			cout<<"Growl!!!\n";
		}

		void setName(string name) // setter function!!
		{
			_name=name;
		}

		// getter
		string getName()
		{
			return _name;
		}
	private:
		string _name;
		/*
		 * Programming practice: for private members use the underscore(_) before the name of the variable
		 * Reason: It will help you to differentiate between private, public and protected members!!
		 */
};

int main(void)
{
	Monster monster1;
	monster1.setName("Jerry");
	monster1.growl();
	cout<<monster1.getName()<<"\n";
	return 0;
}
