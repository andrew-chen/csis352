#include <iostream>
using namespace std;
#include "intlist.h"
using namespace intlistspace;

void func(intlist somelist)
{
}

intlist func2(intlist anotherlist)
{
   return anotherlist;
}

int main()
{
   intlist list(20);
   intlist list2(10);
   list.add(5);
   list.add(2);
   list.add(9);
   list.add(7);

   func(list);

   list2 = list;
   list2 = list2;

   list2 = func2(list);

   return 0;
}
