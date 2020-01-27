#include <iostream>
using namespace std;

template <class T>
class arrayIterator
{
   public:
      arrayIterator();
      arrayIterator(T*);
      const arrayIterator& operator=(T*);
      T& operator*();
      const T& operator*() const;
      const arrayIterator operator++(int);
   private:
      T* iterator;
};

template <class T>
const arrayIterator<T> arrayIterator<T>::operator++(int)
{
   arrayIterator<T> temp = *this;
   iterator++;
   return temp;
}

template <class T>
T& arrayIterator<T>::operator*()
{
   return *iterator;
}

template <class T>
const T& arrayIterator<T>::operator*() const
{
   return *iterator;
}

template <class T>
const arrayIterator<T>& arrayIterator<T>::operator=(T* arg)
{
   iterator = arg;
   return *this;
}

template <class T>
arrayIterator<T>::arrayIterator(T* arg)
{
   iterator = arg;
}

template <class T>
arrayIterator<T>::arrayIterator()
{
   iterator = NULL;
}

void output(arrayIterator<int> p)
{
   for (int i=0; i<5; i++)
      cout << *p++ << ' ';
   cout << endl;
}

int main()
{
   int numbers[] = {1,2,3,4,5};
   for (int i=0; i<5; i++)
      cout << numbers[i] << ' ';
   cout << endl;
   
   arrayIterator<int> p,p2;

   p = p2 = numbers;
   cout << *p << endl;
   p++;
   cout << *p << endl;
   p2 = p++;
   cout << *p << endl;
   cout << *p2 << endl;
   *p =999;
   cout << *p << endl;
   p = numbers;
   for (int i=0; i<5; i++)
      cout << *p++ << ' ';
   cout << endl;
   p = numbers;
   output(p);
   output(numbers);
   return 0;
}

