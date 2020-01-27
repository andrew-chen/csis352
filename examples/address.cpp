// File:     address.cpp
// Author:   Dan Brekke

// This program will output a memory dump for a set of variables.
// Note that there are "holes" in memory left unallocated.  This
// is done for efficiency purposes.  Also note that space for the
// variables are allocated in reverse order. In addition, to read 
// the values, look at them in the reverse order, byte by byte.

#include <iostream>
#include <iomanip>
using namespace std;

struct example
{
   int A;
   char B;
   short C;
   float D;
};

void dump(char *,char *);

void func(int x, int& y)
{
   int a=1,b=2,c=3,d=4;
   cout << "func" << endl;
   cout << "var type          size   value  start addr      end addr"
//        << "        stored value\n";
        << "\n";
   cout << "--- ------------  ----  ------  --------------  --------------"
//        << "  ------------\n";
        << "\n";
   cout << " a  int            " << setw(3) << sizeof(a)
        << setw(8) << a << "  "
        << &a << "  " << (void *)((char *)(&a+1)-1)
        << "  " << endl;
   cout << " b  int            " << setw(3) << sizeof(b)
        << setw(8) << b << "  "
        << &b << "  " << (void *)((char *)(&b+1)-1)
        << "  " << endl;
   cout << " c  int            " << setw(3) << sizeof(c)
        << setw(8) << c << "  "
        << &c << "  " << (void *)((char *)(&c+1)-1)
        << "  " << endl;
   cout << " d  int            " << setw(3) << sizeof(d)
        << setw(8) << d << "  "
        << &d << "  " << (void *)((char *)(&d+1)-1)
        << "  " << endl;
   cout << " x  int            " << setw(3) << sizeof(x)
        << setw(8) << x << "  "
        << &x << "  " << (void *)((char *)(&x+1)-1)
        << "  " << endl;
   cout << " y  int            " << setw(3) << sizeof(y)
        << setw(8) << y << "  "
        << &y << "  " << (void *)((char *)(&y+1)-1)
        << "  " << endl;
   cout << endl;
   dump(((char *)&a+144),((char *)&d-20));
}

int main()
{
   int A = -12;
   short B = -59;
   long C = 47;
   float D = -18.75;       // 8 bit exponent, 23 bit mantissa
   double E = -15.25;    // 11 bit exponent, 52 bit mantissa
   char F = 'A';
   char G = 'B';
   short H[5] = {10,20,30,40,50};
   example I; 
   I.A = 27; 
   I.B = 'C'; 
   I.C = -18; 
   I.D = 13.625;
   int J=-74;
   float K = -51.125;
   short L = -61;
   short M = B;

// THE REMAINDER OF THIS PROGRAM PROBABLY WILL NOT MAKE MUCH SENSE
// TO YOU.  LOOK AT IT ONLY IF YOU ARE INTERESTED... AND DON'T EXPECT
// AN EXPLANATION!!!

   cout << "*********\n* smaug *\n*********\n\n";

   cout << "var type          size   value  start addr      end addr"
//        << "        stored value\n";
        << "\n";
   cout << "--- ------------  ----  ------  --------------  --------------"
//        << "  ------------\n";
        << "\n";
   cout << " A  int            " << setw(3) << sizeof(A)
        << setw(8) << A << "  " 
        << &A << "  " << (void *)((char *)(&A+1)-1) 
        << "  " << endl;
   cout << " B  short          " << setw(3) << sizeof(B)
        << setw(8) << B << "  " 
        << &B << "  " << (void *)((char *)(&B+1)-1) << endl;
   cout << " C  long           " << setw(3) << sizeof(C)
        << setw(8) << C << "  " 
        << &C << "  " << (void *)((char *)(&C+1)-1) << endl;
   cout << " D  float          " << setw(3) << sizeof(D)
        << setw(8) << D << "  " 
        << &D << "  " << (void *)((char *)(&D+1)-1) << endl;
   cout << " E  double         " << setw(3) << sizeof(E)
        << setw(8) << E << "  " 
        << &E << "  " << (void *)((char *)(&E+1)-1) << endl;
   cout << " F  char           " << setw(3) << sizeof(F)
        << "       " << F << "  " 
        << (void *)&F << "  " << (void *)((char *)(&F+1)-1) << endl;
   cout << " G  char           " << setw(3) << sizeof(G)
        << "       " << G << "  " 
        << (void *)&G << "  " << (void *)((char *)(&G+1)-1) << endl;
   cout << " H  short array[5] " << setw(3) << sizeof(H)
        << "          " 
        << &H << "  " << (void *)((char *)(&H+1)-1) << endl;
   cout << "       H[0]        " << setw(3) << sizeof(H[0])
        << "      " << H[0] << "  " 
        << &H[0] << "  " << (void *)((char *)(&H[0]+1)-1) << endl;
   cout << "       H[1]        " << setw(3) << sizeof(H[1])
        << "      " << H[1] << "  " 
        << &H[1] << "  " << (void *)((char *)(&H[1]+1)-1) << endl;
   cout << "       H[2]        " << setw(3) << sizeof(H[2])
        << "      " << H[2] << "  " 
        << &H[2] << "  " << (void *)((char *)(&H[2]+1)-1) << endl;
   cout << "       H[3]        " << setw(3) << sizeof(H[3])
        << "      " << H[3] << "  " 
        << &H[3] << "  " << (void *)((char *)(&H[3]+1)-1) << endl;
   cout << "       H[4]        " << setw(3) << sizeof(H[4])
        << "      " << H[4] << "  " 
        << &H[4] << "  " << (void *)((char *)(&H[4]+1)-1) << endl;
   cout << " I  struct         " << setw(3) << sizeof(I)
        << "          " 
        << &I << "  " << (void *)((char *)(&I+1)-1) << endl;
   cout << "     I.A (int)     " << setw(3) << sizeof(I.A)
        << setw(8) << I.A << "  " 
        << &I.A << "  " << (void *)((char *)(&I.A+1)-1) << endl;
   cout << "     I.B (char)    " << setw(3) << sizeof(I.B)
        << "       " << I.B << "  " 
        << (void *)&I.B << "  " << (void *)((char *)(&I.B+1)-1) << endl;
   cout << "     I.C (short)   " << setw(3) << sizeof(I.C)
        << setw(8) << I.C << "  " 
        << &I.C << "  " << (void *)((char *)(&I.C+1)-1) << endl;
   cout << "     I.D (float)   " << setw(3) << sizeof(I.D)
        << setw(8) << I.D << "  " 
        << &I.D << "  " << (void *)((char *)(&I.D+1)-1) << endl;
   cout << " J  int            " << setw(3) << sizeof(J)
        << setw(8) << J << "  " 
        << &J << "  " << (void *)((char *)(&J+1)-1) << endl;
   cout << " K  float          " << setw(3) << sizeof(K)
        << setw(8) << K << "  " 
        << &K << "  " << (void *)((char *)(&K+1)-1) << endl;
   cout << " L  short          " << setw(3) << sizeof(L)
        << setw(8) << L << "  " 
        << &L << "  " << (void *)((char *)(&L+1)-1) << endl;
   cout << " M  short          " << setw(3) << sizeof(M)
        << setw(8) << M << "  " 
        << &M << "  " << (void *)((char *)(&M+1)-1) << endl;
   cout << endl;
   
   func(A,J);
   return 0;
}

void dump(char *start,char *end)
{
   // adjustments for different OS versions and compilers
   const int adjust = 0;  // used to align addresses output to last digit 0
   const int startline = -1; // used to adjust the number of lines output
   const int endline = 1; // used to adjust the number of lines output
   int num = start-end;
   cout << "Memory Contents\n";
   cout << "addresses         0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F\n";
   cout << "--------------   -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --\n";
   for (int i=startline; i<(num/16)+endline; i++)
   {
      cout << (void *)(end+i*16-adjust) << "  ";
      for (int j=0; j<16; j++)
      {
         if (int(((char *)end)[j+i*16-adjust]) < 0)
            cout << setw(3) << hex << int(((char *)end)[j+i*16-adjust]+256);
         else
         {
            if (int(((char *)end)[j+i*16-adjust]) < 16)
               cout << " 0" << hex << int(((char *)end)[j+i*16-adjust]);
            else
               cout << setw(3) << hex << int(((char *)end)[j+i*16-adjust]);
         }
      }
      cout << endl << endl;
   }
}
  
