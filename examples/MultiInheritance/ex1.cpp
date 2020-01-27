#include <iostream>
using namespace std;
class base1
{
   public:
      base1(int n=0) : x(n) {}
      int getx() const { return x; }
      void setx(int n) { x = n; }
   private: 
      int x;
};
class base2
{
   public:
      base2(int n=0) : y(n) {}
      int gety() const { return y; }
      void sety(int n) { y = n; }
   private: 
      int y;
};
class derived : public base1, public base2
{
   public:
      derived(int n1=0, int n2=0) : base1(n1), base2(n2) {}
};
int main()
{
   derived d(12,34);
   cout << d.getx() << ' ' << d.gety() << endl;
   return 0;
}


