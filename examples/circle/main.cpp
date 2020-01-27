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
   cout << showpoint << fixed << setprecision(2);
   Circle c1(3);
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c1.radius() << endl;
   cout << left << setw(14) << "diameter" 
        << right << setw(10) << c1.diameter() << endl;
   cout << left << setw(14) << "area" 
        << right << setw(10) << c1.area() << endl;
   cout << left << setw(14) << "circumference" 
        << right << setw(10) << c1.circumference() << endl;
   cout << endl;

   Circle c2;
   c2.setRadius(2);
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c2.radius() << endl;
   cout << left << setw(14) << "diameter" 
        << right << setw(10) << c2.diameter() << endl;
   cout << left << setw(14) << "area" 
        << right << setw(10) << c2.area() << endl;
   cout << left << setw(14) << "circumference" 
        << right << setw(10) << c2.circumference() << endl;
   cout << endl;

   return 0;
}
