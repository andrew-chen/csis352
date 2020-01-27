#include <iostream>
using namespace std;
#include <stack>

int main()
{
   stack<int> s;
   int num;

   cout << "enter ints, 0 to quit: ";
   cin >> num;
   while (num != 0)
   {
      s.push(num);
      cin >> num;
   }
   while (!s.empty())
   {
      cout << s.top() << ' ';
      s.pop();
   }
   cout << endl;
   return 0;
}
