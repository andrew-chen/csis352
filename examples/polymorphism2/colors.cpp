#include "colors.h"

ostream& operator << (ostream& o, colors c)
{
   switch (c)
   {
      case black  : o << "black"; break;
      case white  : o << "white"; break;
      case red    : o << "red"; break;
      case blue   : o << "blue"; break;
      case green  : o << "green"; break;
      case yellow : o << "yellow"; break;
   }
   return o;
}

