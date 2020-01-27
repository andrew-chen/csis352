// potential bad things can happen when returning a reference

#include <iostream>
#include <string>
using namespace std;

class someclass
{
   public:
      someclass(const string&);
      string& getData();
   private:
      string data;
};

someclass::someclass(const string& s)
{
   data = s;
}

string& someclass::getData()
{
   return data;
}

int main()
{
   someclass s("hello");
   cout << s.getData() << endl;
   string& x = s.getData();
   cout << x << endl;
   x = "oops";
   cout << s.getData() << endl;

   return 0;
}
