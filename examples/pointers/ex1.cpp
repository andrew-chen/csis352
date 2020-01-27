#include <iostream>

// pointer operators
//    & - address of operator
//    * - dereferencing operator

using namespace std;

int main()
{
   int x=6;    // x is an int and assigned 6
   int y=27;   // y is an int and assigned 27
   int* p;     // p is a pointer to an int; same as int*p; int *p;
   p=&x;       // p is assigned the address of x
   cout << *p  // output what p is pointing at
      << endl; 
   *p=17;      // what p is pointing at is assigned 17
   cout << x << endl;
   cout << "the address of x is:      " << &x << endl;
   cout << "p is pointing at address: " << p << endl;
   return 0;
}
