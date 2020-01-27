// use of a reference variable can be used to simplify an expression

#include <iostream>
using namespace std;

struct struct1
{
   int field1;
   int field2;
};

struct struct2
{
   struct1 fieldA;
   int fieldB;
};

int main()
{
   struct2 s2;
   s2.fieldA.field1 = 4;
   cout << s2.fieldA.field1 << endl;
   
   int& ref1 = s2.fieldA.field1;
   ref1 = 7;
   cout << ref1 << endl;
   cout << s2.fieldA.field1 << endl;
 
   struct1& ref2 = s2.fieldA;
   cout << ref2.field1 << endl;
   ref2.field2 = 5;
   cout << s2.fieldA.field2 << endl;

   return 0;
}
