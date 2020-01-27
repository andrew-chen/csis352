// reference to dynamic memory allocated in a function

#include <iostream>
using namespace std;

int& func(void) 
{
   int *x = new int;
   *x = 15;
   return *x;
}

int main()
{
   int& a = func();
   cout << a << endl;
   return 0;
}
