#include <iostream>
#include <vector>
using namespace std;

void output(vector<int> v)
{
   for (int i=0; i<v.size(); i++)
      cout << v[i] << ' ';
   cout << endl;
}

void output2(vector<int> v)
{
   vector<int>::iterator p;
   p = v.begin();
   while (p != v.end())
      cout << *p++ << ' ';
   cout << endl;
}

int main()
{
   vector<int> v(10);
   for (int i=0; i<10; i++)
      v[i] = i;
   cout << "max_size: " << v.max_size() << endl;
   cout << "capacity: " << v.capacity()<< endl;
   cout << "size    : " << v.size()<< endl;
   v.push_back(10);
   output(v);
   cout << "capacity: " << v.capacity()<< endl;
   cout << "size    : " << v.size()<< endl;
   for (int i=11; i<=20; i++)
      v.push_back(i);
   cout << "capacity: " << v.capacity()<< endl;
   cout << "size    : " << v.size()<< endl;
   v.pop_back();
   cout << "capacity: " << v.capacity()<< endl;
   cout << "size    : " << v.size()<< endl;
   output2(v);
   vector<int>::iterator p;
   p = v.begin();
   p++; p++; p++;
   v.insert(p,99);
   output2(v);
   cout << *p << endl;
   cout << "capacity: " << v.capacity()<< endl;
   cout << "size    : " << v.size()<< endl;
   return 0;
}
