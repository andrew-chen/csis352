// ex15.cpp

/* This is an example showing that the first catch block in stack
   unwinding will execute.  In this case funcB. */
#include <iostream>
#include <stdexcept>
using namespace std;

void funcC()
{
   throw runtime_error("runtime_error from funcC");
   cout << "execution continues in funcC\n";
}

void funcB()
{
   try
   {
      funcC();
   }
   catch (runtime_error e)
   {
      cout << "in funcB() catch block\n";
      cout << e.what() << endl;
   }
   cout << "execution continues in funcB\n";
}

void funcA()
{
   try
   {
      funcB();
   }
   catch (runtime_error e)
   {
      cout << "in funcA() catch block\n";
      cout << e.what() << endl;
   }
   cout << "execution continues in funcA\n";
}

int main()
{
   try
   {
      funcA();
   }
   catch (runtime_error e)
   {
      cout << "in main catch block\n";
      cout << e.what() << endl;
   }
   cout << "execution continues in main\n";
}

   
