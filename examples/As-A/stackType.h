#include <list>
using namespace std;

template <class T>
class stackType : protected list<T>
{
   public:
      void push(const T&);
      T top() const;
      void pop();
      bool isFullStack() const;
      bool isEmptyStack() const;
      void clearStack();
};

template <class T>
void stackType<T>::push(const T& newitem)
{
   list<T>::push_front(newitem);
}

template <class T>
T stackType<T>::top() const
{
   return list<T>::front();
}

template <class T>
void stackType<T>::pop()
{
   list<T>::pop_front();
}

template <class T>
bool stackType<T>::isEmptyStack() const
{
   return list<T>::empty();
}

template <class T>
bool stackType<T>::isFullStack() const
{
   return false;
}

template <class T>
void stackType<T>::clearStack()
{
   list<T>::clear();
}

