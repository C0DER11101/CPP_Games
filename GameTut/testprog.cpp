#include<iostream>
#include<string.h>

using namespace std;


class Student
{
	char*name;
	int roll;

	static int counter;

	public:

	Student()
	{
		cout<<"Default constructor called!! Object created!!\n";
	}

	Student(char*n, int r):roll(r)
	{
		name=new char[100];
		strcpy(name, n);
	}

	~Student()
	{
		if(counter==0)
		{
			cout<<"\n\nProgram executed successfully!!\n\n";
			counter++;
			delete name;
		}
	}

	void show()
	{
		cout<<"Student name: "<<name<<"\n";
		cout<<"Student roll number: "<<roll<<"\n";
	}

	int retrieveRoll()
	{
		return roll;
	}

	void tamperRoll()
	{
		cout<<"Tampering with roll number with s\n";
		roll=1001;
	}
};

int Student::counter;

Student&acquireRoll(Student&);

int main(void)
{
	char*name=new char[100];
	int roll;

	cout<<"Enter student's name: ";
	cin>>name;

	cout<<"Enter roll number: ";
	cin>>roll;

	Student S(name, roll);

	cout<<"\nS displays details!!\n\n";
	S.show();
	cout<<"\n\n";

	Student s;

	s=acquireRoll(S);

	cout<<"\ns displays details!!\n\n";
	s.show();
	cout<<"\n\n";

	s.tamperRoll();

	cout<<"\nS displays details!!\n\n";
	S.show();
	cout<<"\n\n";
	cout<<"\ns displays details!!\n\n";
	s.show();
	cout<<"\n\n";

	delete name;

	return 0;
}

Student&acquireRoll(Student&s)
{
	cout<<"\nInside acquireRoll()\n";
	cout<<"Student's roll number :"<<s.retrieveRoll()<<"\n";

	return s;
}
