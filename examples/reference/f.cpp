// returning const reference is OK, ... or is it?  see g.cpp

#include <iostream>
#include <string>
using namespace std;

class someclass
{
   public:
      someclass(const string&);
      const string& getData();
   private:
      string data;
};

someclass::someclass(const string& s)
{
   data = s;
}

const string& someclass::getData()
{
   return data;
}

int main()
{
   someclass s("hello");
   cout << s.getData() << endl;
   const string& x = s.getData();
   cout << x << endl;
//   x = "oops";
//   cout << s.getData() << endl;

   return 0;
}
