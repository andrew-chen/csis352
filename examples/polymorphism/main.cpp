#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

int main()
{
   Base b1(5);
   Derived d1(3,6);
   Base* bp;
   bp = &b1;
   bp->print();
   cout << "-----------\n";
   bp = &d1;
   bp->print();
   return 0;
}
