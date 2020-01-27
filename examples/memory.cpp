#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;
void dump_memory(void* data, int len);

int main()
{
   short num = -41;
   cout << "num: ";
   dump_memory(&num,sizeof(num));
   cout << "num value: " << num << endl << endl;

   float f = -13.75;
   cout << "f: ";
   dump_memory(&f,sizeof(f));
   cout << "f value: " << f << endl << endl;

   return 0;
}

void dump_memory(void* data, int len)
{
   cout << len << " bytes at address " << data << ": ";
   for (int i=len-1;i>=0;i--)
      printf("%02X ", (static_cast<unsigned char*>(data))[i] );
   printf("\n");
}


