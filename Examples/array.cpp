#include <iostream>
using namespace std;

const int arraysize=5;
const int sentinel=0;

int main()
{
   int numbers[arraysize];
   int num;
   int count=0;
   cout << "enter ints, " << sentinel << " to quit: ";
//    cin >> numbers[count];
   cin >> num;
//    cout << "just read into numbers[" << count << "]\n";
//    while (numbers[count] != sentinel && count < arraysize)
   while (num != sentinel && count < arraysize)
   {
      numbers[count++] = num;
//       count++;
//       cin >> numbers[count];
//       cout << "just read into numbers[" << count << "]\n";
      cin >> num;
   }
   for (int i=0; i<count; i++)
      cout << numbers[i] << ' ';
   cout << endl;
   int sum=0;
   for (int i=0; i<count; i++)
      sum += numbers[i];
   cout << "sum is " << sum << endl;
   int big; // all variables really should be at top
   big = numbers[0]; // precondition, array has at least 1 value
   for (int i=1; i<count; i++)
      if (numbers[i] > big)
         big = numbers[i];
//       else
//          big = big;
   cout << "the biggest is " << big << endl;
   return 0;
}
