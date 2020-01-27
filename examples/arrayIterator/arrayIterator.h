#ifndef _ARRAYITERATOR_H_
#define _ARRAYITERATOR_H_

template <class T>
class arrayIterator
{
   public:
      arrayIterator(T*);
      arrayIterator();
      const T& operator*() const;
      T& operator*();
      const arrayIterator<T> operator++(int);
      const arrayIterator<T> operator++();
      const arrayIterator<T> operator--(int);
      const arrayIterator<T> operator--();
      const arrayIterator<T> operator+(int inc) const;
      const arrayIterator<T> operator-(int dec) const;
      const arrayIterator<T>& operator=(T* array);
      operator T*() const; // makes relational operators unnecessary
//       bool operator==(const arrayIterator<T>& other) const;
//       bool operator!=(const arrayIterator<T>& other) const;
//       bool operator==(T* other) const;
//       bool operator!=(T* other) const;
   private:
      T* current;
};

template <class T>
arrayIterator<T>::operator T*() const
{
   return current;
}

template <class T>
arrayIterator<T>::arrayIterator(T* array) 
{
   current=array; 
}

template <class T>
arrayIterator<T>::arrayIterator() 
{ 
   current=NULL; 
}

template <class T>
const T& arrayIterator<T>::operator*() const
{ 
   return *current; 
}

template <class T>
T& arrayIterator<T>::operator*() 
{
   return *current; 
}

template <class T>
const arrayIterator<T> arrayIterator<T>::operator++(int)
{
   arrayIterator<T> temp = *this;
   current++;
   return temp; 
}

template <class T>
const arrayIterator<T> arrayIterator<T>::operator++()
{
   current++;
   return *this; 
}

template <class T>
const arrayIterator<T> arrayIterator<T>::operator--(int)
{
   arrayIterator<T> temp = *this;
   current--;
   return temp; 
}

template <class T>
const arrayIterator<T> arrayIterator<T>::operator--()
{
   current--;
   return *this; 
}

template <class T>
const arrayIterator<T> arrayIterator<T>::operator+(int inc) const
{
   arrayIterator<T> temp = *this;
   temp.current = temp.current + inc;
   return temp; 
}

template <class T>
const arrayIterator<T> arrayIterator<T>::operator-(int dec) const
{
   arrayIterator<T> temp = *this;
   temp.current = temp.current - dec;
   return temp; 
}

template <class T>
const arrayIterator<T>& arrayIterator<T>::operator=(T* array)
{
   current=array;
   return *this; 
}

// template <class T>
// bool arrayIterator<T>::operator==(const arrayIterator<T>& other) const
// {
//    return current == other.current; 
// }
// 
// template <class T>
// bool arrayIterator<T>::operator!=(const arrayIterator<T>& other) const
// {
//    return current != other.current; 
// }
// 
// template <class T>
// bool arrayIterator<T>::operator==(T* other) const
// {
//    return current == other; 
// }
// 
// template <class T>
// bool arrayIterator<T>::operator!=(T* other) const
// {
//    return current != other; 
// }

#endif
