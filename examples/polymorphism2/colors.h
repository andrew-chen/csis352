#ifndef _COLORS_H_
#define _COLORS_H_
#include <iostream>
using namespace std;

enum colors {black, white, red, blue, green, yellow};

ostream& operator << (ostream& o, colors c);

#endif
