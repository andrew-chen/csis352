// File:    main.cpp
// Author:  Dan Brekke

#include <iostream>
#include <string>
#include "person.h"
using namespace std;


int main()
{
    Person p1("John Doe",3);
    p1.UtilityFunction();

    Person p2("Jane Doe",2);
    p2.UtilityFunction();

    return 0; 
} // end main

