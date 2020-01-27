#include <iostream>
#include <list>
#include "circle.h"
#include "coloredcircle.h"
using namespace std;

int main()
{
   list<Circle*> mylist;
   list<Circle*>::iterator i;

// populate the linked list of Circle pointers
   Circle c1(3);
   mylist.push_back(&c1);

   ColoredCircle cc1(5,blue);
   mylist.push_back(&cc1);

   Circle c2(7);
   mylist.push_back(&c2);

   Circle c3(2);
   mylist.push_back(&c3);

   ColoredCircle cc2(1,green);
   mylist.push_back(&cc2);

   Circle c4(6);
   mylist.push_back(&c4);

// output the list
   Circle* p;
   for (i=mylist.begin(); i!=mylist.end(); i++)
   {
      p = *i;
      p->Display();
   }
   return 0;
}
