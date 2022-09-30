# **A chunk of information acquired from here: [Click Here](https://www.simplilearn.com/tutorials/cpp-tutorial/random-number-generator-in-cpp "Read It")**
## How to Generate Random Numbers in C++ Within a Range

Similar to 1 and 10, you can generate random numbers within any range using the modulus operator. For instance, to generate numbers between 1 and 100, you can write int random = 1+ (rand() % 100). You can represent the general syntax of the equation as:

```C++
int random = offset + (rand() % range);
```

In the above syntax:

**offset**: _Defines the starting point of the range_


**range**: _The number of possible values between the start and end of the range with both numbers inclusive. For instance, for the range between 100 to 300, the offset will be 100, and the range will be 201._
Now, look at an example to generate random numbers between the range 100 to 300, as mentioned above. 
You will use the for loop in C++ to generate ten random numbers between the given range.

```C++
#include<iostream>

#include<cstdlib>

using namespace std;

int main()
{

	srand((unsigned) time(NULL)); 

	// Using for loop

	for(int x=0; x<10; x++)        
	{

		// Offset 100 and range 201 to generate random numbers between 100 and 300

		int random = 100 + (rand() % 201);

		cout<<random<<"   ";

	}

	return 1;

}
```
