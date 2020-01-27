#include <iostream>
using namespace std;
#include "intlist.h"
using namespace intlistspace;

void func(intlist somelist)
{
   cout << "starting func\n";
   cout << "exiting func\n";
}

intlist func2(intlist anotherlist)
{
   cout << "starting func2\n";
   cout << "exiting func2\n";
   return anotherlist;
}

int main()
{
   cout << "declare list, size 20*******************************************\n";
   intlist list(20);
   cout << "declare list2, size 10******************************************\n";
   intlist list2(10);
   cout << "add 4 items to the list*****************************************\n";
   list.add(5);
   list.add(2);
   list.add(9);
   list.add(7);

   cout << "before func call************************************************\n";
   func(list);
   cout << "after func call*************************************************\n";
   cout << "assign list2 = list*********************************************\n";
   list2 = list;
   cout << "assign list2 = list2********************************************\n";
   list2 = list2;

   cout << "before func2 call***********************************************\n";
   list2 = func2(list);
   cout << "after func2 call************************************************\n";

   cout << "exiting program" << endl;
   return 0;
}
