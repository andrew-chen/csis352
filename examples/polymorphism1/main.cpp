#include <iostream>
#include "circle.h"
#include "coloredcircle.h"
using namespace std;

void func(Circle* p)  // polymophism: Display is virtual in Circle
{
   p->Display();
}

void func2(const Circle& c)
{
   c.Display();
}

int main()
{
   Circle c(3);
   ColoredCircle cc(5,blue);
   Circle* p;

   p = &c;
   p->Display();
   func(p);
   func2(*p);

cout << "------------------\n";
   p = &cc;
   p->Display();
   func(p);
   func2(*p);
   /*cout << "------------------\n";
   func(&c);
   func2(c);
cout << "------------------\n";
   func(&cc);
   func2(cc);
   */
   return 0;
}
