#ifndef _LIST_H_
#define _LIST_H_

namespace listspace
{

template <class T>
class list
{
   public:
      explicit list(int size=99);
      ~list(); // destructor
      list (const list&); // copy constructor
      const list& operator = (const list&); // operator =

      T& operator[](int index);
      const T& operator[](int index) const;
      void traversal(void (*) (T&));

      void add(T num); // add to end of the list
      T remove();      // remove and return the last int in the list
   private:
      int size;          // size of dynamically allocated array
      int count;         // current number of ints in the array
      T *thelist;      // dynamically allocated array
};
 
template <class T>
void list<T>::traversal(void (*f)(T&))
{
   for (int i=0; i<count; i++)
      f(thelist[i]);
}

template <class T>
T& list<T>::operator[](int index)
{
   return thelist[index];
}

template <class T>
const T& list<T>::operator[](int index) const
{
   return thelist[index];
}

template <class T>
list<T>::list(int s)
{
   thelist = new T[s];
   count=0;
   size = s;
}

template <class T>
list<T>::~list()
{
   delete [] thelist;
   thelist = NULL;
}

template <class T>
list<T>::list(const list<T>& list)
{
   thelist = new T[list.size];
   count = list.count;
   size = list.size;
   for (int i=0; i<count; i++)
      thelist[i] = list.thelist[i];
}

template <class T>
const list<T>& list<T>::operator = (const list<T>& list)
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
void list<T>::add(T num)
{
   thelist[count] = num;
   count++;
}

template <class T>
T list<T>::remove()
{
   count--;
   return thelist[count];
}

}

#endif
