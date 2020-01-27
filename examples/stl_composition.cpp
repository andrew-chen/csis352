#include <iostream>
#include <list>
using namespace std;

template <class T>
class myClass
{
   public:
      void insert(const T&);
      void print() const;
   private:
      list<T> values;
};

template <class T>
void myClass<T>::print() const
{
   typename list<T>::const_iterator p;
   for (p=values.begin(); p!=values.end(); p++)
      cout << *p << ' ';
   cout << endl;
}

template <class T>
void myClass<T>::insert(const T& item)
{
   values.insert(values.end(),item);
}

int main()
{
   myClass<int> x;
   x.insert(4);
   x.insert(12);
   x.insert(7);
   x.insert(9);
   x.print();
   return 0;
}

