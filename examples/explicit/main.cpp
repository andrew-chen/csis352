// File:     main.cpp
// Author:   Dan Brekke

#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;

void func(Circle c2)
{
   cout << c2.radius() << endl;
}

int main()
{
   Circle c = 4; // implicit conversion
   cout << c.radius() << endl;
   c = 12; // implicit conversion
   cout << c.radius() << endl;
   func(15); // implicit conversion
   return 0;
}
