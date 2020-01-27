#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string grade(float pct)
{
   string grade;
   if (pct >= .90)
      grade = "A";
   else if (pct >= .89)
      grade = "A-";
   else if (pct >= .87)
      grade = "B+";
   else if (pct >= .80)
      grade = "B";
   else if (pct >= .79)
      grade = "B-";
   else if (pct >= .77)
      grade = "C+";
   else if (pct >= .70)
      grade = "C";
   else if (pct >= .69)
      grade = "C-";
   else if (pct >= .67)
      grade = "D+";
   else if (pct >= .60)
      grade = "D";
   else if (pct >= .59)
      grade = "D-";
   else
      grade = "F";
   return grade;
}

int main()
{
   cout << fixed << showpoint << setprecision(10);
   int maximum;
   int score;
   float pct;
   cout << "enter maximum test score: ";
   cin >> maximum;
   cout << "enter student test score: ";
   cin >> score;
   pct = static_cast<float>(score)/maximum;
   cout << "maximum test score: " << maximum << endl;
   cout << "student test score: " << score << endl;
   cout << "        percentage: " << pct << endl;
   cout << "             grade: " << grade(pct) << endl;

   return 0;
}
