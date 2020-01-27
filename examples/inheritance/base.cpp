#include <iostream>
#include "base.h"

Base::Base(double value) : X(value)
{
   cout << "in the Base constructor\n";
} 
 
void Base::setX(double value)
{
   X = value;
}

double Base::getX() const
{
   return X;
}

void Base::print() const
{
   cout << "Base print()\n";
   cout << "   X = " << getX() << endl;
}


