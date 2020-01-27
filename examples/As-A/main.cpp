#include <iostream>
using namespace std;
#include "stackType.h"
const int sentinel=0;

int main()
{
   stackType<int> stack;
   int num;
   cout << "enter ints (" << sentinel << " to quit): ";
   cin >> num;
   while (num != sentinel && !stack.isFullStack() )
   {
      stack.push(num);
      cin >> num;
   }
   if (num != sentinel)
      cout << "stack size exceeded, some values not stored\n";

   cout << "values in the stack: \n";
   while (!stack.isEmptyStack())
   {
      cout << stack.top() << ' ';
      stack.pop();
   }
   cout << endl;
   return 0;
}

