#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

void columnNumbers()
{
   cout << "         1         2         3         4         5         6         7         8" << endl;
   cout << "12345678901234567890123456789012345678901234567890123456789012345678901234567890" << endl;
}

void outputAlphabet()
{
   for (char c='A'; c<='Z'; c++)
      cout << c;
}

void outputAlphabet2()
{
   stringstream output;
   for (char c='A'; c<='Z'; c++)
      output << c;
   cout << output.str();
}

int main()
{
   columnNumbers();
//   cout << left;
   cout << setw(30);
   outputAlphabet2();
   cout << setw(30);
   outputAlphabet2();
   cout << endl;
   return 0;
}
