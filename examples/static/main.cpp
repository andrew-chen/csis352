#include <iostream>
#include "someclass.h"
using namespace std;

int main()
{
   someClass s1;
   someClass s2;
   
   s1.setX(10);
//   s1.setY(20);
   s2.setX(30);
   s2.setY(40);
   cout << s1.getX() << endl;
   cout << s1.getY() << endl;
   cout << s2.getX() << endl;
   cout << s2.getY() << endl;
/*
   someClass::setY(50);
   cout << someClass::getY() << endl;
   cout << s1.getY() << endl;
   cout << s2.getY() << endl;
*/
   return 0;
}

