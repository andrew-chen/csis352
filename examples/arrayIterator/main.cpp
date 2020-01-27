#include <iostream>
using namespace std;
#include "arrayIterator.h"

void output(arrayIterator<int> p)
{
   for (int i=0; i<5; i++)
      cout << *p++ << ' ';
   cout << endl;
}

int main()
{
   int numbers[] = {1,2,3,4,5};
   arrayIterator<int> p(numbers);
   arrayIterator<int> p2(numbers);

   for (int i=0; i<5; i++)
      cout << *p++ << ' ';
   cout << endl;

   output(numbers);

   p = p2 = numbers;
   output(p);
   for (int i=0; i<5; i++)
      cout << *p++ << ' ';
   cout << endl;
   for (int i=0; i<3; i++)
   {
      cout << *p2 << ' ';
      p2=p2+2;
   }
   cout << endl;

   for (p=numbers; p!=numbers+5; p++)
      cout << *p << ' ';
   cout << endl;
   
   for (p2=numbers; p2!=p; p2++)
      cout << *p2 << ' ';
   cout << endl;
      
   p = numbers;
   cout << *p << endl;
   *p = 99;

   for (p=numbers; p!=numbers+5; p++)
      cout << *p << ' ';
   cout << endl;
   
   p = numbers;
   int* x;
   x = p;
   cout << *x << endl;
   
   

   return 0;
}

