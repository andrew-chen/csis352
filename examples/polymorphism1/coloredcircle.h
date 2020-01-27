#ifndef _COLOREDCIRCLE_H_
#define _COLOREDCIRCLE_H_
#include "circle.h"
#include "colors.h"
#include <iostream>

class ColoredCircle : public Circle
{
   public:
      ColoredCircle(double r=0, colors c=black);
      ColoredCircle(colors color);
      ColoredCircle(const Circle&);
      ColoredCircle& operator=(const Circle& c);
      void operator=(Circle*);
      void setColor(colors);
      colors Color() const;
      virtual void Display() const;
   private:
      colors color;
};
#endif
