// file: terminal.h
#ifndef _TERMINAL_H_
#define _TERMINAL_H_

#include <iostream>
#include "display.h"
using namespace std;

//  Values used by clearLine to determine which part of a line to clear:
   #define TOEND 0  // clear from cursor to end of line
   #define TOCURSOR 1  // clear from beginning of line to the cursor
   #define ALL 2    // clear entire line

   class vt100 : public Display
   {
      public:
         void clearDisplay() const;  // clear the screen
         void setDisplayPosition(const int x, const int y) const;
         void clearLine(int clearType) const; // clear line (see above types)
         void show(int) const;
         void show(double) const;
         void show(char) const;
   };
#endif
