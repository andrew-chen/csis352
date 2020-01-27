#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;
void dump_memory(void* data, int len);

int main()
{

   float f1=0;
   cout << "f1: ";
   dump_memory(&f1,sizeof(f1));
   cout << "f1 value: " << f1 << endl << endl;

   *(int*)&f1 = 0x80000000;
   cout << "f1: ";
   dump_memory(&f1,sizeof(f1));
   cout << "f1 value: " << f1 << endl << endl;

   *(int*)&f1 = 0x7f800000;
   cout << "f1: ";
   dump_memory(&f1,sizeof(f1));
   cout << "f1 value: " << f1 << endl << endl;

   *(int*)&f1 = 0xff800000;
   cout << "f1: ";
   dump_memory(&f1,sizeof(f1));
   cout << "f1 value: " << f1 << endl << endl;

   return 0;
}

void dump_memory(void* data, int len)
{
   // stored as little endian but dumped out as big endian for readability
   cout << len << " bytes at address " << data << ": ";
   for (int i=len-1;i>=0;i--)
      printf("%02X ", (static_cast<unsigned char*>(data))[i] );
   printf("\n");
}


