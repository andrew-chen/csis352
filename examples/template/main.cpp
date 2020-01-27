#include <iostream>
using namespace std;
#include "list.h"
using namespace listspace;

void func(list<int> somelist)
{
}

list<int> func2(list<int> anotherlist)
{
   return anotherlist;
}

int main()
{
   list<int> list1(20);
   list<int> list2(10);
   list<double> list3;
   list1.add(5);
   list1.add(2);
   list1.add(9);
   list1.add(7);

   func(list1);

   list2 = list1;
   list2 = list2;

   list2 = func2(list1);
   cout << list2.remove() << endl;
   cout << list2.remove() << endl;
   cout << list2.remove() << endl;
   cout << list2.remove() << endl;

   return 0;
}
