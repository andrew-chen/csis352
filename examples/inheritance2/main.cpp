#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

void func1(Base b)
{
   cout << "---------- starting func1 --------\n";
   b.print();
   cout << "---------- exiting func1 --------\n";
}

void func2(Derived d)
{
   cout << "---------- starting func2 --------\n";
   d.print();
   cout << "---------- exiting func2 --------\n";
}

void func3(Base& b)
{
   cout << "---------- starting func3 --------\n";
   b.print();
   cout << "---------- exiting func3 --------\n";
}

void func4(Derived& d)
{
   cout << "---------- starting func4 --------\n";
   d.print();
   cout << "---------- exiting func4 --------\n";
}

int main()
{
   Base b(5);
   Derived d(3,6);
   cout << "--------------\n";
   b.print();
   cout << "--------------\n";
   d.print();
   cout << "--------------\n";
   d.Base::print();
   cout << "--------------\n";
   b = d;
   b.print();
//   d = b;  // error unless operator = overloaded
   b.setX(5);
   func1(b); // Base argument
   func1(d); // Base argument
// func2(b); // Derived argument - error unless there is a copy constructor
   func2(d); // Derived argument
   func3(b); // Base& argument
   func3(d); // Base& argument
// func4(b); // Derived& argument - error unless const& and a copy constructor
   func4(d);

// pointer stuff
   Base *bp;
   Derived *dp;
   cout << "Base pointer pointing to a Base object\n";
   bp = &b;
   bp->print();
   cout << "Base pointer pointing to a Derived object\n";
   bp = &d;
   bp->print();
   cout << "Derived pointer pointing to a Derived object\n";
   dp = &d;
   dp->print();
   cout << "Derived pointer pointing to a Base object - ";
//   dp = &b;  // can't, could static_cast<Derived*>(&b)
               // but there would be garbage in the Y attribute
//   dp->print();
   cout << "can't do it\n";
   return 0;
}
