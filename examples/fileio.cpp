#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{

   int num;
   int sum=0;
   int count=0;
   ifstream in;
   ofstream out;
   in.open("data2");
   in >> num;
   while (!in.eof())
   {
cerr << "read " << num << endl;
      sum += num;
      count++;
      in >> num;
   }
   in.close();
   out.open("result");
cerr << "sum = " << sum << endl;
cerr << "count = " << count << endl;
   out << "the average is " << static_cast<double>(sum)/count << endl;
   out.close();
   return 0;
}
