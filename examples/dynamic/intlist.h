#ifndef INTLIST
#define INTLIST

namespace intlistspace
{

class intlist
{
   public:
      explicit intlist(int size=99);
      ~intlist(); // destructor
      intlist (const intlist&); // copy constructor
      const intlist& operator = (const intlist&); // operator =

      void add(int num); // add to end of the list
      int remove();      // remove and return the last int in the list
   private:
      int size;          // size of dynamically allocated array
      int count;         // current number of ints in the array
      int *thelist;      // dynamically allocated array
};
 
}

#endif
