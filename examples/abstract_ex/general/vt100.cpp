#include <iostream>
#include <iomanip>
#include "vt100.h"
using namespace std;

void vt100::show(int x) const
{
   cout << x;
}

void vt100::show(double x) const
{
   cout << x;
}

void vt100::show(char x) const
{
   cout << x;
}

// clear the terminal, does not move cursor
void vt100::clearDisplay() const
{
    char c = 27;

    cout<<c<<setw(3)<<"[2J";
}


//  To use positionCursor to locate the cursor at a specified position,
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

