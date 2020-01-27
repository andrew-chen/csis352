// File:     main.cpp
// Author:   Dan Brekke

// Description
// This program will test the circle class

#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;

int main()
{
   Circle c1(3);
   c1 = 5;

   if (c1 == 5)
      cout << "true" << endl;
   else
      cout << "false" << endl;

   double d;
   d = static_cast<double>(c1);
   cout << d << endl;

   d = c1; // better to use static_cast
   cout << d << endl;

   if (5 == c1) // better to use static_cast
      cout << "true" << endl;
   else
      cout << "false" << endl;

   string s;
   s = static_cast<string>(c1);
   cout << s << endl;

   return 0;
}

