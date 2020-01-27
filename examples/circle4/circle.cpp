// File:     circle.cpp
// Author:   Dan Brekke

// Description
// This file contains the implementation for a circle class

#include "circle.h"

Circle::operator double() const
{
cerr << "in operator double, returning " << radius() << endl;
   return radius();
}

Circle::operator string() const
{
cerr << "in operator string, returning " << "'hello'" << endl;
   return "hello";
}

/*
outputFormat Circle::getFormat()
{
   return format;
}
*/

const Circle& Circle::operator++()
{
   setRadius(radius()+1);
   return *this;
}

Circle Circle::operator++(int)
{
   Circle temp(radius());
   setRadius(radius()+1);
   return temp;
}

const Circle& Circle::operator+=(const Circle& c)
{
   setRadius(radius()+c.radius());
   return *this;
}

/*
const Circle& Circle::operator+=(double d)
{
   setRadius(radius()+d);
   return *this;
}
*/

void Circle::setFormat(outputFormat f)
{
   format = f;
}

outputFormat Circle::format=Radius;

const Circle& Circle::operator=(double d)
{
cerr << "in operator=, argument=" << d << endl;
   setRadius(d);
   return *this;
}

istream& operator>>(istream& i,Circle& c)
{
   double temp;
   i >> temp;
   if (i.fail())
   {
      i.clear();
      i.ignore(1000,'\n');
      throw ios_base::failure("input error");
   }
   c.setRadius(temp);
   return i;
}

ostream& operator<<(ostream& o,const Circle& c)
{
//   switch (Circle::getFormat())
   switch (c.format)
   {
      case Radius : o << c.radius(); break;
      case Diameter: o << c.diameter(); break;
      case Circumference: o << c.circumference(); break;
      case Area: o << c.area(); break;
   }
   return o;
}

Circle Circle::operator+(const Circle& c) const
{
   Circle temp(radius()+c.radius());
   return temp;
}

bool Circle::operator==(const Circle& c) const
{
   return radius() == c.radius();
}

bool Circle::operator<(const Circle& c) const
{
   return radius() < c.radius();
}

bool Circle::operator<=(const Circle& c) const
{
   return *this == c || *this < c;
}

Circle::Circle(double r)
{
cerr << "in the constructor, argument=" << r << endl;
   setRadius(r);
}

void Circle::setRadius(double r)
{
   rad = r;
}

double Circle::radius() const
{
   return rad;
}

double Circle::diameter() const
{
   return radius()*2;
}

double Circle::area() const
{
   return PI*radius()*radius();
}

double Circle::circumference() const
{
   return 2*PI*radius();
}
