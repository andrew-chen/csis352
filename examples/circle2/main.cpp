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

   if (c1 == c2)
      cout << "equal" << endl;
   else
      cout << "not equal" << endl;
   Circle c3;
   c3 = c1+c2;
   cout << c3.radius() << endl;
   cout << c3 << endl;
//   cin >> c1 >> c2;
   cout << c1 << ' ' << c2 << endl;
   c3 = c1;
   c3 = 4.67;
   c1 = c2 = c3 = 4;
   cout << c3 << endl;
   c3.setRadius(5);
   cout << "Radius: " << c3 << endl;
   Circle::setFormat(Diameter);
//   cout << Circle::getFormat() << endl;
   cout << "Diameter: " << c3 << endl;
   Circle::setFormat(Circumference);
   cout << "Circumference: " << c3 << endl;
   Circle::setFormat(Area);
   cout << "Area: " << c3 << endl;
//   c3.setFormat(Radius);   OK, but not a good way
   return 0;
}
