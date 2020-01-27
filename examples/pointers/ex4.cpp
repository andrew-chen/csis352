#include <iostream>

using namespace std;

int main()
{
   int *p;
   p=new int;
   *p = 7;
   cout << *p << endl;
   p=new int;           // memory leak because of previous allocation
   *p = 12;
   cout << *p << endl;
   delete p;            // prevents memory leak
   cout << *p << endl;  // dangling pointer (points to unallocated memory)
   p = NULL;            // prevents dangling pointer
/*
Moral of the story
   Any time dynamic memory is used, it should be deleted when it's
      no longer needed.  This prevents a memory leak.
   Any time dynamic memory is deleted, the pointer should be set
      to NULL.  This prevents a dangling pointer.
*/
   return 0;
}
