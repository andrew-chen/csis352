#ifndef _LIST_H_
#define _LIST_H_

#include <iostream>
using namespace std;
namespace ListNameSpace
{

template <class T> class listIterator;

template <class T>
class List
{
   public:
      explicit List(int size=99);
      ~List(); // destructor
      List (const List&); // copy constructor
      const List& operator = (const List&); // operator =
      bool empty() const;
      bool full() const;

      void add(T num); // add to end of the list
      T remove();      // remove and return the last int in the list

      typedef listIterator<T> iterator;
      
      listIterator<T> begin() const;
      listIterator<T> end() const;
   private:
      int size;          // size of dynamically allocated array
      int count;         // current number of ints in the array
      T *thelist;      // dynamically allocated array
};
 


// constructor
template <class T>
List<T>::List(int s)
{
   thelist = new T[s];
   count=0;
   size = s;
}

// destructor
template <class T>
List<T>::~List()
{
   delete [] thelist;
   thelist = NULL;
}

// copy constructor
template <class T>
List<T>::List(const List<T>& list)
{
   thelist = new T[list.size];
   count = list.count;
   size = list.size;
   for (int i=0; i<count; i++)
      thelist[i] = list.thelist[i];
}

// operator=
template <class T>
const List<T>& List<T>::operator= (const List<T>& list)
{
   if (&list != this)
   {
      delete [] thelist;
      thelist = new T[list.size];
      count = list.count;
      size = list.size;
      for (int i=0; i<count; i++)
         thelist[i] = list.thelist[i];
   }
   return *this;
}
   

template <class T>
void List<T>::add(T num)
{
   thelist[count] = num;
   count++;
}

template <class T>
T List<T>::remove()
{
   count--;
   T temp=thelist[count];
   return temp;
}

template <class T>
bool List<T>::empty() const
{
   return count==0;
}

template <class T>
bool List<T>::full() const
{
   return count==size;
}


template <class T>
listIterator<T> List<T>::begin() const
{
   listIterator<T> iter(thelist);
   return iter;
}

template <class T>
listIterator<T> List<T>::end() const
{
   listIterator<T> iter(thelist+count);
   return iter;
}

template <class T>
class listIterator
{
   public:
      listIterator();
      explicit listIterator(T*);
      const T& operator*() const;
      T& operator*();
      const listIterator operator++();
      const listIterator operator++(int);
      const listIterator operator--();
      const listIterator operator--(int);
      const listIterator operator+(int) const;
      const listIterator operator-(int) const;
      bool operator==(const listIterator&) const;
      bool operator!=(const listIterator&) const;
   private:
      T* current;
};

template <class T>
const listIterator<T> listIterator<T>::operator+(int inc) const
{
   listIterator<T> newiterator = *this;
   newiterator.current += inc;
   return newiterator;
}

template <class T>
const listIterator<T> listIterator<T>::operator-(int dec) const
{
   listIterator<T> newiterator = *this;
   newiterator.current -= dec;
   return newiterator;
}

template <class T>
listIterator<T>::listIterator()
{
   current = NULL;
}

template <class T>
listIterator<T>::listIterator(T* ptr)
{
   current = ptr;
}

template <class T>
const T& listIterator<T>::operator*() const
{
   return *current;
};

template <class T>
T& listIterator<T>::operator*() 
{
   return *current;
};

template <class T>
const listIterator<T> listIterator<T>::operator++()
{
   current++;
   return *this;
}

template <class T>
const listIterator<T> listIterator<T>::operator++(int)
{
   listIterator<T> temp = *this;
   current++;
   return temp;
}

template <class T>
const listIterator<T> listIterator<T>::operator--()
{
   current--;
   return *this;
}

template <class T>
const listIterator<T> listIterator<T>::operator--(int)
{
   listIterator<T> temp = *this;
   current--;
   return temp;
}

template <class T>
bool listIterator<T>::operator==(const listIterator<T>& arg) const
{
   return (current == arg.current);
}

template <class T>
bool listIterator<T>::operator!=(const listIterator<T>& arg) const
{
   return (current != arg.current);
}


} // end ListNameSpace
#endif
