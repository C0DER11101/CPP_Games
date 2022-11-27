#include<iostream>

using namespace std;

int main(void)
{
        const bool a=true;
        
        cout<<a<<"\n";
        a=false; // error:  cannot modify a constant variable!!
        cout<<a<<"\n"; // erro!!
        
        return 0;
}
