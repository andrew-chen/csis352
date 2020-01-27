#include <iostream>
#include <string>
using namespace std;

int main()
{
   string name;
   int age;
   cout << "enter your name: ";
   getline(cin,name);
   while (!cin.eof())  // keyboard end of file is cntl-d
   {
      cout << "how old are you? ";
      cin >> age;
      cin.ignore(80,'\n');
      cout << "your name is " << name << " and you are " 
           << age << " years old." << endl;
      cout << "enter your name: ";
      getline(cin,name);
   }
   cout << endl;
   return 0;
}
