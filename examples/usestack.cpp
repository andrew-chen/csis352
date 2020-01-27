#include <iostream>
using namespace std;
#include "linkedStack.h"

int main()
{
   linkedStackType<int> s;
   int num;

   cout << "enter ints, 0 to quit: ";
   cin >> num;
   while (num != 0 && !s.isFullStack())
   {
      s.push(num);
      cin >> num;
   }
   while (!s.isEmptyStack())
   {
      cout << s.top() << ' ';
      s.pop();
   }
   cout << endl;
   return 0;
}
