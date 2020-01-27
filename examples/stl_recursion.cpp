#include <iostream>
#include <list>
using namespace std;

void visit(int& value)
{
   cout << value << ' ';
}

template <class T>
class sortedList : public list<T>
{
   public:
      void insert(const T&);
      void print() const;
      void print_recursive() const;
      void traverse(void (*) (T&));
   private:
      void printr(typename list<T>::const_iterator) const;
};

template <class T>
void sortedList<T>::printr(typename list<T>::const_iterator p) const
{
   if (p != list<T>::end())
   {
      /* forward
      cout << *p << ' ';
      printr(++p);
       */
      /* reverse
       */
      typename list<T>::const_iterator q = p;
      printr(++p);
      cout << *q << ' ';
   }
}

template <class T>
void sortedList<T>::print_recursive() const
{
   printr(list<T>::begin());
   cout << endl;
}

template <class T>
void sortedList<T>::traverse(void (*funcPtr) (T&))
{
   typename list<T>::iterator p;
   for (p=list<T>::begin(); p!=list<T>::end(); p++)
      funcPtr(*p);
}

template <class T>
void sortedList<T>::print() const
{
   typename list<T>::const_iterator p;
   for (p=list<T>::begin(); p!=list<T>::end(); p++)
      cout << *p << ' ';
   cout << endl;
}

template <class T>
void sortedList<T>::insert(const T& newitem)
{
   typename list<T>::iterator p;
   p = list<T>::begin();
   while (p!=list<T>::end() && newitem>*p)
      p++;
   list<T>::insert(p,newitem);
}


int main()
{
   sortedList<int> x;
   x.insert(6);
   x.insert(2);
   x.insert(8);
   x.insert(5);
   if (x.empty())
      cout << "empty" << endl;
   else
      cout << "not empty" << endl;
   x.print();
   x.traverse(visit);
   cout << endl;
   x.print_recursive();
   return 0;
}
