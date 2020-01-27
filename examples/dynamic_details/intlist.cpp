#include <iostream>
using namespace std;
#include "intlist.h"

namespace intlistspace
{

intlist::intlist(int s)
{
               cout << "in constructor, size = " << s << endl;
   thelist = new int[s];
               cout << "   object address = " << this << endl;
//               cout << "   size address = " << &size<< endl;
//               cout << "   count address = " << &count << endl;
//               cout << "   thelist address = " << &thelist<< endl;
               cout << "   dynamic array address = " << thelist << endl;
   count=0;
   size = s;
}

intlist::~intlist()
{
               cout << "in destructor\n";
               cout << "   object address = " << this << endl;
               cout << "   deleting the array, address = " << thelist << endl;
//               cout << "   assigning the array pointer to NULL\n";
   delete [] thelist;
   thelist = NULL;
}

intlist::intlist(const intlist& list)
{
               cout << "in copy constructor\n";
   thelist = new int[list.size];
   count = list.count;
   size = list.size;
               cout << "   copying obj from " << &list 
                    << " to new obj " << this << endl;
               cout << "   creating new dynamic array at address "
                    << thelist << endl; 
               cout << "   copying array from " << list.thelist 
                    << " to new array " << thelist << endl;
//               cout << "   size assigned " << size << endl;
//               cout << "   count assigned " << count << endl;
//               cout << "   values copied =";
//               for (int i=0; i<count; i++)
//                  cout << ' ' << list.thelist[i];
//               cout << endl;
//               for (int i=0; i<count; i++)
//                  cout << "      " << list.thelist[i] << " copied from "
//                       << &list.thelist[i] << " to " << &thelist[i] << endl;
   for (int i=0; i<count; i++)
      thelist[i] = list.thelist[i];
}

const intlist& intlist::operator = (const intlist& list)
{
               cout << "in operator =\n";
               cout << "   assigning obj from address " << &list
                    << " to obj at address " << this << endl;
               if (&list == this)
                  cout << "   assignment is to the same object, do nothing\n";
   if (&list != this)
   {
//               cout << "   old array size " << this->size << endl;
//               cout << "   new array size " << list.size << endl;
               cout << "   deleting array at address " << thelist << endl; 
      delete [] thelist;
      thelist = new int[list.size];
               cout << "   creating new dynamic array at address "
                    << thelist << endl; 
      count = list.count;
      size = list.size;
//               cout << "   size assigned " << list.size << endl;
//               cout << "   count assigned " << list.count << endl;
//               cout << "   values copied =";
//               for (int i=0; i<count; i++)
//                  cout << ' ' << list.thelist[i];
//               cout << endl;
               cout << "   copying array from " << list.thelist 
                    << " to new array " << thelist << endl;
//               for (int i=0; i<count; i++)
//                  cout << "      " << list.thelist[i] << " copied from "
//                       << &list.thelist[i] << " to " << &thelist[i] << endl;
      for (int i=0; i<count; i++)
         thelist[i] = list.thelist[i];
   }
   return *this;
}
   

void intlist::add(int num)
{
//               cout << "In add method, adding " << num 
//                    << ", count is now " << count+1 << endl;
   thelist[count] = num;
//               cout << "   value added at address " << &thelist[count] << endl;
   count++;
}

int intlist::remove()
{
   count--;
   int temp=thelist[count];
//               cout << "In remove method, removing " << temp 
//                    << ", count is now " << count << endl;
//               cout << "   value removed at address " 
//                    << &thelist[count] << endl;
   return temp;
}

} // end of namespace intlistspace
