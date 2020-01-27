// File:     circle.h
// Author:   Dan Brekke

// Description
// This file contains the specification for a circle class

#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include <iostream>
#include <stdexcept>
const double PI = 3.141592654;
using namespace std;

enum outputFormat {Radius,Diameter,Circumference,Area};

class Circle
{
   public:
      explicit Circle(double=0);  // constructor with default radius
      operator double() const;
      operator string() const;
      void setRadius(double);
      double radius() const;
      double diameter() const;
      double area() const;
      double circumference() const;
      bool operator==(const Circle&) const;
      bool operator<(const Circle&) const;
      bool operator<=(const Circle&) const;
      Circle operator+(const Circle&) const;
      const Circle& operator=(double);
      static void setFormat(outputFormat);
      const Circle& operator++();    // pre increment
      Circle operator++(int); // post increment
      const Circle& operator+=(const Circle&);
//      const Circle& operator+=(double);

//      static outputFormat getFormat();
      friend ostream& operator<<(ostream&,const Circle&);
   private:
      double rad;
      static outputFormat format;
};

istream& operator>>(istream&,Circle&);
#endif
