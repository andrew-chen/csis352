#include <iostream>
#include <climits>
using namespace std;

int main()
{
   short s = -SHRT_MAX;
   cout << "short range: ";
   cout << s << " to ";
   s = SHRT_MAX;
   cout << s << endl;

   int i = -INT_MAX;
   cout << "int range: ";
   cout << i << " to ";
   i = INT_MAX;
   cout << i << endl;

   long l = -LONG_MAX;
   cout << "long range: ";
   cout << l << " to ";
   l = LONG_MAX;
   cout << l << endl;

   cout << s << endl;
   s++;
   cout << s << endl;

   return 0;
}

