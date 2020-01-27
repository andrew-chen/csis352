#include <iostream>
using namespace std;
#include <queue>

void dumpQueue(priority_queue<int> q)
{
   while (!q.empty())
   {
      cout << q.top() << ' ';
      q.pop();
   }
   cout << endl;
}

int main()
{
   priority_queue<int> q;
   int num;
   cout << "enter ints, 0 to quit: ";
   cin >> num;
   while (num != 0)
   {
      q.push(num);
      cin >> num;
   }
   dumpQueue(q);
   while (!q.empty())
   {
      cout << q.top() << ' ';
      q.pop();
   }
   cout << endl;
   cout << "here it is again... or not: ";
   while (!q.empty())
   {
      cout << q.top() << ' ';
      q.pop();
   }
   cout << endl;
   return 0;
}
