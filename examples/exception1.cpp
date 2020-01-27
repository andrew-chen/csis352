#include <iostream>
using namespace std;

int main()
{
   int x,y,z;
   cout << "enter two ints: ";
   cin >> x >> y;
   try
   {
      if (y==0)
         throw string("can't divide by zero");
      z = x/y;
      cout << x << '/' << y << '=' << z << endl;
   }
   catch (string anythingIwant)
   {
      cout << anythingIwant << endl;
   }
   
   cout << "program terminates normally\n";
   return 0;
}

