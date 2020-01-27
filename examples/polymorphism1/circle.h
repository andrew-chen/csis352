#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include <iostream>
using namespace std;

const double PI=3.1415927;

class Circle
{
   public:
      Circle(double);
      void setRadius(double);
      double Radius() const;
      double Diameter() const;
      double Area() const;
      double Circumference() const;
      virtual void Display() const; // virtual makes it polymorphic
   private:
      double radius;
};

#endif
