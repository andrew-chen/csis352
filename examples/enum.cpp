#include <iostream>
using namespace std;

enum DaysOfWeek {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

void OutputDay(DaysOfWeek d)
{
   switch (d)
   {
      case Mon : cout << "Mon"; break;
      case Tue : cout << "Tue"; break;
      case Wed : cout << "Wed"; break;
      case Thu : cout << "Thu"; break;
      case Fri : cout << "Fri"; break;
      case Sat : cout << "Sat"; break;
      case Sun : cout << "Sun"; break;
   }
}

int main()
{
   DaysOfWeek day;
   day = Wed;
//   day=day+1;  // illegal
//   day++;      // illegal
//   day = static_cast<DaysOfWeek>(static_cast<int>(day)+1);  // OK
   cout << day << endl;
   day = static_cast<DaysOfWeek>(day+1);  // also OK
   cout << day << endl;
   for (day=Mon;day<=Sun;day=static_cast<DaysOfWeek>(day+1))
   {
      OutputDay(day);
      cout << endl;
   }
   return 0;
}
