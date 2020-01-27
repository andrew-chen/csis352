#include <iostream>
#include "circle.h"

Circle::Circle(double r) : radius(r)
{ }

void Circle::setRadius(double r)
{
   radius = r;
}

double Circle::Radius() const
{
   return radius;
}

double Circle::Diameter() const
{
   return radius*2;
}

double Circle::Area() const
{
   return PI*radius*radius;
}

double Circle::Circumference() const
{
   return 2*PI*radius;
}

void Circle::Display() const
{
   cout << "radius=" << Radius() << endl;
}

