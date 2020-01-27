#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

int main()
{
   Base b1(5);
   cout << b1.getX() << endl;
   b1.print();
   cout << "-----------" << endl;
   Derived d1(3,6);
   cout << d1.getX() << endl;
   cout << d1.getY() << endl;
   d1.print();
   cout << "-----------" << endl;
   d1.Base::print();

   
   return 0;
}
