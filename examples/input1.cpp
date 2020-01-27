#include <iostream>
#include <string>
using namespace std;

int main()
{
   string name;
   int age;
   cout << "enter your name: ";
   getline(cin, name);
   cout << "how old are you? ";
   cin >> age;
   cout << "your name is " << name << endl;
   cout << "you are " << age << " years old\n";
   
   cin.ignore(80,'\n');
   cout << "enter your name: ";
   getline(cin, name);
   cout << "how old are you? ";
   cin >> age;
   cout << "your name is " << name << endl;
   cout << "you are " << age << " years old\n";
   
   return 0;
}
