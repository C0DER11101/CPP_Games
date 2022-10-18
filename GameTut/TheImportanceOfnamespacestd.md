# How important is the namespace std?

**The namespace `std` is very important in C++.**

This namespace contains the header files such as `<iostream>`, `<string.h>`, `<vector>`, etc....

The absence of the `using namespace std;` can make the compiler throw a bunch of errors, if the C++ file contains `string` type variables, or
`cout`, `cin`, etc...


Consider the following example:

```C++
#include<iostream>
#include<string.h>

class Student
{
	int roll;
	string name;

	public:
	// member functions!!

};

int main(void)
{
	Student s;
	// code....


	return 0;
}
```

Here the compiler will throw an error, such as `string doesnot define a type`, `name is undeclared in this scope`; if the code uses `cout` or
`cin` then errors such as `undefined variable "cout"` or `undefined variable "cin"` will be thrown by the compiler!! The reason of such type
of errors is that we have not included `using namespace std` in our code!!

This [link](https://www.programiz.com/cpp-programming/std-namespace "Click here!!") explains it all!!
