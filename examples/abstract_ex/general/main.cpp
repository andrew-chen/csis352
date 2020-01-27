// File: main.cpp
#include <string>
#include <iostream>
#include <iomanip>
#include "vt100.h"

using namespace std;

int main()
{
   Display* display = new vt100;
   display->clearDisplay();
   display->setDisplayPosition(10,10);
   display->show(12);
   display->setDisplayPosition(20,20);
   display->show('X');
   display->setDisplayPosition(15,15);
   display->show(347.274);
   display->setDisplayPosition(15,16);
   display->clearLine(TOCURSOR);
   display->setDisplayPosition(23,1);
   return 0;
}
