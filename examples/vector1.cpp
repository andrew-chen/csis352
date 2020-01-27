// array of vectors

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void output(const vector<int> v[])
{
   cout << "from output" << endl;
   for (int i=0; i<10; i++)
   {
      for (int j=0; j<10; j++)
         cout << setw(4) << v[i][j] << ' ';
      cout << endl;
   }
}

void output2(const vector<int> v[])
{
   cout << "from output2" << endl;
   vector<int>::const_iterator p;
   for (int i=0; i<10; i++)
   {
      for (p=v[i].begin(); p!=v[i].end(); p++)
         cout << setw(4) << *p << ' ';
      cout << endl;
   }
}

int main()
{
   vector<int> v[10];
   for (int i=0; i<10; i++)
      cout << v[i].size() << ' ';
   cout << endl;
   for (int i=0; i<10; i++)
      v[i].resize(10);
   int count=1;
   for (int i=0; i<10; i++)
      for (int j=0; j<10; j++)
         v[i][j] = count++;
   for (int i=0; i<10; i++)
   {
      for (int j=0; j<10; j++)
         cout << setw(4) << v[i][j] << ' ';
      cout << endl;
   }
   cout << "-------------------------------------------------\n";
   output(v);
   cout << "-------------------------------------------------\n";
   output2(v);

   return 0;
}
