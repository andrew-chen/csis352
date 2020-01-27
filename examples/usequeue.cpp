#include <iostream>
using namespace std;
#include "queueType.h"

void dumpQueue(queueType<int> q)
{
   while (!q.isEmptyQueue())
   {
      cout << q.front() << ' ';
      q.deleteQueue();
   }
   cout << endl;
}

int main()
{
   queueType<int> q;
   int num;
   cout << "enter ints, 0 to quit: ";
   cin >> num;
   while (num != 0 && !q.isFullQueue())
   {
      q.addQueue(num);
      cin >> num;
   }
   dumpQueue(q);
   while (!q.isEmptyQueue())
   {
      cout << q.front() << ' ';
      q.deleteQueue();
   }
   cout << endl;
   cout << "here it is again... or not: ";
   while (!q.isEmptyQueue())
   {
      cout << q.front() << ' ';
      q.deleteQueue();
   }
   cout << endl;
   return 0;
}
