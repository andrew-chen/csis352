#include <iostream>
using namespace std;

const int arraysize = 10;

void read(int numbers[], int& count);
void output(const int numbers[], int count);
int sum(const int numbers[], int count);

int main()
{
   int numbers[arraysize];
   int count;
   cout << "enter ints, 0 to quit: ";
   read(numbers,count);
   cout << "array contents: ";
   output(numbers,count);
   cout << "the sum is " << sum(numbers,count) << endl;
   return 0;
}

void output(const int numbers[], int count)
{
   for (int i=0; i<count; i++)
      cout << numbers[i] << ' ';
   cout << endl;
}

void read(int numbers[],int& count)
{
   count = 0;
   int temp;
   cin >> temp;
   while (temp != 0 && count < arraysize)
   {
      numbers[count] = temp;
      count++;
      cin >> temp;
   }
   return; // the return in a void function is optional
}

int sum(const int numbers[], int count)
{
   int theSum = 0;
   for (int i=0; i<count; i++)
      theSum += numbers[i];
   return theSum;
}

