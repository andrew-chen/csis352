// File: where.cpp

#include <iostream>
#include <cstdio>
using namespace std;

void dump_memory(void*, int);
void dump_memory2(void*, int);

const int num = 30;
int number = 15;  // we know it's bad to declare a variable outside a function

void func2(int x, int& y)
{
   int a = 10;
   int b = 20;
   cout << "in func2, value paramenter x, address " << &x << ", value "
        << x << endl;
   cout << "in func2, reference paramenter y, address " << &y << ", value "
        << y << endl;
   cout << "in func2, local variable a, address " << &a << ", value "
        << a << endl;
   cout << "in func2, local variable b, address " << &b << ", value "
        << b << endl;
}

void func1(int x, int& y)
{
   int a = 10;
   int b = 20;
   cout << "in func1, value paramenter x, address " << &x << ", value "
        << x << endl;
   cout << "in func1, reference paramenter y, address " << &y << ", value "
        << y << endl;
   cout << "in func1, local variable a, address " << &a << ", value "
        << a << endl;
   cout << "in func1, local variable b, address " << &b << ", value "
        << b << endl;
   cout << endl;
   func2(a,b);
}

int main()
{
// dump out the function addresses
   int (*fp2)(void);
   fp2 = main;
   cout << "MAIN ADDRESS: ";
   dump_memory2(&fp2,sizeof(fp2));
   void (*fp)(int,int&);
   fp = func1;
   cout << "FUNC1 ADDRESS: ";
   dump_memory2(&fp,sizeof(fp));
   fp = func2;
   cout << "FUNC2 ADDRESS: ";
   dump_memory2(&fp,sizeof(fp));
   cout << endl;
// dump out constant address and global variable address
   cout << "constant num, address " << &num << ", value "
        << num << endl;
   cout << "global number, address " << &number << ", value "
        << number << endl;
   cout << endl;

   int m=20;
   int n=30;
   cout << "in main, local variable m, address " << &m << ", value "
        << m << endl;
   cout << "in main, local variable n, address " << &n << ", value "
        << n << endl;
   int* p;
   cout << "in main, pointer p, address = " << &p << endl;
   p = new int;
   cout << "in main, p points at address = " << p << endl;
   p = new int;
   cout << "in main, p points at address = " << p << endl;
   cout << endl;
   func1(m,n);
   cout << endl;


   return 0;
}

void dump_memory(void* data, int len)
{
   cout << len << " bytes at address " << data << ": ";
   for (int i=len-1;i>=0;i--)
      printf("%02X ", (static_cast<unsigned char*>(data))[i] );
   printf("\n");
}

void dump_memory2(void* data, int len)
{
   for (int i=len-1;i>=0;i--)
      printf("%02X ", (static_cast<unsigned char*>(data))[i] );
   printf("\n");
}

