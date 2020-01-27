#include "derived.h"

Derived::Derived(double value1, double value2) : Base(value1), Y(value2)
{ 
   cout << "in the Derived constructor\n";
}

void Derived::setY(double value)
{
   Y = value;
}

double Derived::getY() const
{
   return Y;
}

void Derived::print() const
{
   cout << "Derived print()\n";
   Base::print();
   cout << "   X = " << getX() << endl;
   cout << "   Y = " << getY() << endl;
   
}

