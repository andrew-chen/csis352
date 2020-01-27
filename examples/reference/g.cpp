// even with returning a const reference, const casting still accesses
// the private data of the class

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
   string& x = const_cast<string&>(s.getData());
   cout << x << endl;
   x = "oops";
   cout << s.getData() << endl;

   return 0;
}
