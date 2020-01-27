// vector of vectors

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void output(vector<vector<int>> v)
{
   cout << "from output" << endl;
   for (int i=0; i<v.size(); i++)
   {
      for (int j=0; j<v[i].size(); j++)
         cout << setw(4) <<  v[i][j] << ' ';
      cout << endl;
   }
}

void output2(const vector<vector<int>>& v)
{
   cout << "from output2" << endl;
   vector<int>::const_iterator p;
   for (int i=0; i<v.size(); i++)
   {
      for (p=v[i].begin(); p!=v[i].end(); p++)
         cout << setw(4) << *p << ' ';
      cout << endl;
   }
}

void output3(const vector<vector<int>>& v)
{
   cout << "from output3" << endl;
   vector<vector<int>>::const_iterator p1;
   vector<int>::const_iterator p2;
   for (p1=v.begin(); p1!=v.end(); p1++)
   {
      for (p2=p1->begin(); p2!=p1->end(); p2++)
         cout << setw(4) << *p2 << ' ';
      cout << endl;
   }
}

int main()
{
   /*
   vector<vector<int>> v(10);  // 10 empty vectors
   for (int i=0; i<10; i++)
      v[i].resize(10);
   */
   vector<vector<int>> v(10,vector<int>(10));  // same as above
   int count=1;
   for (int i=0; i<10; i++)
      for (int j=0; j<10; j++)
         v[i][j] = count++;
   for (int i=0; i<10; i++)
   {
      for (int j=0; j<10; j++)
         cout << setw(4) <<  v[i][j] << ' ';
      cout << endl;
   }

   cout << "-------------------------------------------------\n";
   output(v);
   cout << "-------------------------------------------------\n";
   output2(v);
   cout << "-------------------------------------------------\n";
   output3(v);

   return 0;
}
