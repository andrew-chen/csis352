// pass by reference parameter (nothing new/tricky here)

#include <iostream>
using namespace std;

void square(int& y)
{
   cout << "address of y = " << &y << endl;
   y = y*y;
}

int main()
{
   int x = 7;
   cout << "address of x = " << &x << endl;
   square(x);
   cout << x << endl;
   return 0;
}
