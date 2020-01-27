#include <iostream>
#include <stdexcept>
using namespace std;

int fact(int n) 
{
   int result=1;
   for (int i=2; i<=n; i++)
   {
      result *=i;
   }
   return result;
}

int main()
{
   int n;
   cout << "enter an int: ";
   cin >> n;
   cout << n << " factorial = " << fact(n) << endl;
   
   cout << "program terminates normally\n";
   return 0;
}

