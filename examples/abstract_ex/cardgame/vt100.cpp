#include <iostream>
#include <iomanip>
#include "vt100.h"
using namespace std;

void vt100::show(const playingCard& c) const
{
   switch(c.Value())
   {
      case 11 : cout << "J"; break;
      case 12 : cout << "Q"; break;
      case 13 : cout << "K"; break;
      case 1  : cout << "A"; break;
      default : cout << c.Value();
   }
   switch(c.Suit())
   {
      case Spades   : cout << "S"; break;
      case Diamonds : cout << "D"; break;
      case Hearts   : cout << "H"; break;
      case Clubs    : cout << "C"; 
   }
}

// clear the vt100 terminal, does not move the display position
void vt100::clearDisplay() const
{
    char c = 27;

    cout<<c<<setw(3)<<"[2J";
}

//  x represents a row on the terminal ... numbered 1 thru 24 from
//  the top and y represents a column on the terminal ... numbered
//  1 thru 80 from the left.
void vt100::setDisplayPosition(const int x, const int y) const
{
    char c = 27;

    cout<<c<<'['<< setw(1)<<x<<';'<<setw(1)<<y<<'H';
}


//  The clearLine function clears a line
//       if clearType is TOEND, clears from the cursor to the end of the line
//       if clearType is TOCURSOR, clears from beginning of line to the cursor
//       if clearType is ALL, clears from beginning to end
void vt100::clearLine(int clearType) const
{
    char c = 27;

    cout<<c<<'['<< setw(1)<<clearType<<'K';
}

