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

void output(const list<int>& list1)
{
   for (int i=0; i<20; i++)
      cout << list1[i] << ' ';
   cout << endl;
}

void visit(int& num)
{
   cout << num << ' ';
}

void doubleIt(int& num)
{
   num *= 2;
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
   for (int i=0; i<20; i++)
      cout << list1[i] << ' ';
   cout << endl;
   output(list1);
   list1.traversal(doubleIt);
   list1.traversal(visit);
   cout << endl;
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
