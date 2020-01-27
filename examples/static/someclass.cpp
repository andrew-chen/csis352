#include "someclass.h"

someClass::someClass()
{
   cout << "creating new object: ";
   cout << "   X: " << &X;
   cout << "   Y: " << &Y << endl;
}

int someClass::Y = 0;

int someClass::getX() const
{
   return X;
}

int someClass::getY()
{
   return Y;
}

void someClass::setX(int newX)
{
   X = newX;
}

void someClass::setY(int newY)
{
   Y = newY;
}

