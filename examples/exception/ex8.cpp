// ex8.cpp

/* This shows an example of throwing a bad_alloc exception after
   dynamic memory is exhausted. */

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;


int main()
{
   int *p;
   int count=0;
   try
   {
      while (true)
      {
         p=new int[1000000000];
         count++;
         cout << "allocated 1 billion ints\n";
      }
   }
   catch (bad_alloc error)
   {
      cout << "allocation exception - " << error.what() << endl;
   }
   
   cout << count << " billion ints were allocated\n";
   cout << "execution continues after the catch block\n";
   return 0;
}
