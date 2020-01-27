// File: main.cpp
#include <iostream>
#include "vt100.h"
#include "vtalt.h"
#include "card.h"

using namespace std;

int main()
{
   Display* display = new vt100;
   playingCard card(11,Clubs);
   display->clearDisplay();
   display->setDisplayPosition(10,10);
   display->show(card);
   display->setDisplayPosition(23,1);
   return 0;
}
