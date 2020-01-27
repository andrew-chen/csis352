#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;
void dump_memory(void* data, int len);

int main()
{
   cout << showpoint << fixed << setprecision(10);

   float f1 = 10.4;
   cout << "float f1 = 10.4;" << endl;
   cout << "f1: ";
   dump_memory(&f1,sizeof(f1));
   cout << "f1 value: " << f1 << endl << endl;

   float f2 = 3000.4;
   cout << "float f2 = 3000.4;" << endl;
   cout << "f2: ";
   dump_memory(&f2,sizeof(f2));
   cout << "f2 value: " << f2 << endl << endl;

   float f3 = 5000000.125;
   cout << "float f3 = 5000000.4;" << endl;
   cout << "f3: ";
   dump_memory(&f3,sizeof(f3));
   cout << "f3 value: " << f3 << endl << endl;

   return 0;
}

void dump_memory(void* data, int len)
{
   cout << len << " bytes at address " << data << ": ";
   for (int i=len-1;i>=0;i--)
      printf("%02X ", (static_cast<unsigned char*>(data))[i] );
   printf("\n");
}


