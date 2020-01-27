#include <iostream>
using namespace std;

void print(int numbers[],int i,int n)
{
   if (i<=n)
   {
      print(numbers,i+1,n);
      cout << numbers[i] << endl;
   }
}

int main()
{
   int numbers[] = {1,2,3,4,5};
   print(numbers,0,4);
   return 0;
}

