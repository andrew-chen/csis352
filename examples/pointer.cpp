#include <iostream>
using namespace std;

void output(int* p)
{
   for (int i=0; i<5; i++)
      cout << *p++ << ' ';
   cout << endl;
}

int main()
{
   int numbers[] = {1,2,3,4,5};
   for (int i=0; i<5; i++)
      cout << numbers[i] << ' ';
   cout << endl;
   
   int *p;
   int *p2;
   p = p2 = numbers;
   cout << *p << endl;
   p++;
   cout << *p << endl;
   p2 = p++;
   cout << *p << endl;
   cout << *p2 << endl;
   *p =999;
   cout << *p << endl;
   p = numbers;
   for (int i=0; i<5; i++)
      cout << *p++ << ' ';
   cout << endl;
   p = numbers;
   output(p);
   output(numbers);
   while (p != numbers+5)
      cout << *p++ << ' ';
   cout << endl;

   return 0;
}

