#ifndef _DISPLAY_H_
#define _DISPLAY_H_
#include <iostream>
#include "card.h"
using namespace std;

class Display
{
   public:
      virtual void clearDisplay() const = 0;
      virtual void setDisplayPosition(int x, int y) const = 0;
      virtual void clearLine(int) const = 0;
      virtual void show(const playingCard&) const = 0;
};

#endif
