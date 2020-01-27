#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

int main()
{
   stringstream input;
   stringstream output;
   output << fixed << showpoint << setprecision(3);
   input.str("17.4\n            54\n     6.9387\n8.72\n");
   double num;
   input >> num;
   while (!input.eof())
   {
      output << setw(10) << num << endl;
      input >> num;
   }
   cout << output.str();

   output.str("");
   cout << endl;
   output << "hello there" << endl;
   cout << output.str();

   return 0;
}

