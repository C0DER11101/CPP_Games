#ifndef Monster_H
#define Monster_H

class Monster
{
	public:
		Monster(string name);
		/*{
			_name=name;
		}
		*/

		void printName();
		/*{
			cout<<"My name is "<<_name<<"\n";
		}
		*/
		
	private:
		string _name;
};

#endif
