#include <iostream>
#include <list>
using namespace std;

void output(const list<int>& v)
{
   list<int>::const_iterator p;
   p = v.begin();
   while (p != v.end())
      cout << *p++ << ' ';
   cout << endl;
}

void outputReverse(const list<int>& v)
{
   list<int>::const_reverse_iterator p;
   p = v.rbegin();
   while (p != v.rend())
      cout << *p++ << ' ';
   cout << endl;
}

int main()
{
   list<int> v;
   cout << "max_size: " << v.max_size() << endl;
   cout << "size    : " << v.size()<< endl;
   for (int i=0; i<10; i++)
      v.push_back(i);
   cout << "size    : " << v.size()<< endl;
   v.push_back(10);
   output(v);
   cout << "size    : " << v.size()<< endl;
   for (int i=11; i<=20; i++)
      v.push_back(i);
   cout << "size    : " << v.size()<< endl;
   v.pop_back();
   cout << "size    : " << v.size()<< endl;
   output(v);
   list<int>::iterator p;
   p = v.begin();
   p++; p++; p++;
   p = v.insert(p,99);
   cout << *p << endl;
   outputReverse(v);
   return 0;
}
