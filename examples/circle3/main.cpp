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
   Circle c1,c2,c3,c4,c5,c6;
   /*
   cout << "enter c1: ";
   try
   {
      cin >> c1;
   }
   catch (ios_base::failure inputerror)
   {
      cout << inputerror.what() << endl;
   }
   cout << "enter c2: ";
   try
   {
      cin >> c2;
   }
   catch (ios_base::failure inputerror)
   {
      cout << inputerror.what() << endl;
   }
   */
   c1.setRadius(2);
   c2.setRadius(3);
   cout << "c1 = " << c1 << endl;
   cout << "c2 = " << c2 << endl;
   ++c1;
   cout << "c1 = " << c1 << endl;
   c2 = ++c1;
   cout << "c1 = " << c1 << endl;
   cout << "c2 = " << c2 << endl;
   c1++;
   cout << "c1 = " << c1 << endl;
   c2 = c1++;
   cout << "c1 = " << c1 << endl;
   cout << "c2 = " << c2 << endl;
   c1 += c2;
   cout << "c1 = " << c1 << endl;
   cout << "-------------" << endl;
   c1 += 2;
   cout << "c1 = " << c1 << endl;

   cout << "program terminates normally\n";

   return 0;
}

