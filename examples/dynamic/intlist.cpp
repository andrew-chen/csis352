#include <iostream>
using namespace std;
#include "intlist.h"

namespace intlistspace
{

intlist::intlist(int s)
{
   thelist = new int[s];
   count=0;
   size = s;
}

intlist::~intlist()
{
   delete [] thelist;
   thelist = NULL;
}

intlist::intlist(const intlist& list)
{
   thelist = new int[list.size];
   count = list.count;
   size = list.size;
   for (int i=0; i<count; i++)
      thelist[i] = list.thelist[i];
}

const intlist& intlist::operator = (const intlist& list)
{
   if (&list != this)
   {
      delete [] thelist;
      thelist = new int[list.size];
      count = list.count;
      size = list.size;
      for (int i=0; i<count; i++)
         thelist[i] = list.thelist[i];
   }
   return *this;
}
   

void intlist::add(int num)
{
   thelist[count] = num;
   count++;
}

int intlist::remove()
{
   count--;
   return thelist[count];
}

} // end of namespace intlistspace
