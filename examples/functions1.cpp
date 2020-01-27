#include <iostream>
using namespace std;

void func1(void) // the parameter void is optional, I typically leave it blank
{
   cout << "hello\n";
}

void func2(int num)
{
   num = 99;
   cout << "in func2, x = " << num << endl;
}

void func3(int& num)
{
   num = 99;
   cout << "in func3, x = " << num << endl;
}

int func4(int x)
{
   x = x+1;
   return x;
}

int main()
{
   func1();
   int x = 44;
   func2(x);
   cout << "in main, x = " << x << endl;
   func3(x);
   cout << "in main, x = " << x << endl;
   cout << "result from func4 " << func4(x) << endl;
   cout << "in main, x = " << x << endl;

   return 0;
}
