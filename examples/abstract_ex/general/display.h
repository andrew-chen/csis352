#ifndef _DISPLAY_H_
#define _DISPLAY_H_

class Display
{
   public:
      virtual void clearDisplay() const = 0;
      virtual void setDisplayPosition(int x, int y) const = 0;
      virtual void clearLine(int) const = 0;
      virtual void show(int) const = 0;
      virtual void show(double) const = 0;
      virtual void show(char) const = 0;
};

#endif
