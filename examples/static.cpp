#include <iostream>
using namespace std;

void func()
{
   static int staticVariable=66; // by default initialized to zero
   staticVariable++;
   cout << "staticVariable is " << staticVariable << endl;
}

int main()
{
   func();
   func();
   func();
   func();
   func();
   func();
   return 0;
}
