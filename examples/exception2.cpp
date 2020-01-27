#include <iostream>
#include <stdexcept>
using namespace std;

int fact(int n) 
{
   if (n < 0)
      throw invalid_argument("argument must be non-negative");
   int result=1;
   for (int i=2; i<=n; i++)
   {
      result *=i;
      if (result < 0)
         throw overflow_error("argument too large, overflow!");
   }
   return result;
}

int main()
{
   int n;
   cout << "enter an int: ";
   cin >> n;
   try
   {
      cout << n << " factorial = " << fact(n) << endl;
   }
   catch (invalid_argument error)
   {
      cout << endl << error.what() << endl;
   }
   catch (overflow_error error)
   {
      cout << endl << error.what() << endl;
   }

   
   cout << "program terminates normally\n";
   return 0;
}

