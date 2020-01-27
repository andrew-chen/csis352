#ifndef _SOMECLASS_H_
#define _SOMECLASS_H_

#include <iostream>
using namespace std;

class someClass
{
   public:
      someClass();
      int getX() const;
      static int getY();
      void setX(int);
      static void setY(int);
   private:
      int X;
      static int Y;
};

#endif

