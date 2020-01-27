#include <iostream>
#include <iomanip>
using namespace std;

void output(const int numbers[][4][3],int x,int rows, int columns);

int main()
{
   int array[2][4][3] = { {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}},
                           {{13,14,15}, {16,17,18}, {19,20,21}, {22,23,24}} };
   output(array,2,4,3);
   return 0;
}

void output(const int numbers[][4][3],int x,int rows, int columns)
{
   for (int i=0; i<x; i++)
   {
      for (int j=0; j<rows; j++)
      {
         for (int k=0; k<columns; k++)
            cout << setw(4) << numbers[i][j][k];
         cout << endl;
      }
      cout << endl;
   }
}

