// file: vt100.h
#ifndef _VT100_H_
#define _VT100_H_

#include <iostream>
#include "display.h"
#include "card.h"
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
         void show(const playingCard&) const;
   };
#endif
