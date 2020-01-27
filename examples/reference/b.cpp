// reference identifier, alias

#include <iostream>
using namespace std;

int main()
{
   int x = 7;
   int& y = x; // a reference must be initialized
   y = 12;
   cout << x << endl;
   cout << y << endl;
   cout << &x << endl;
   cout << &y << endl;
   return 0;
}
