#include <iostream>
#include <iomanip>
using namespace std;


const int sentinel = 0;

int main()
{
   cout << fixed << showpoint << setprecision(2);
   int num;
   int sum = 0;
   int count = 0;
   double average;
/* This is crap.  I had to add two patches   
   num = 1;
   while (num != sentinel)
   {
      cin >> num;
      sum += num;
      count++;
   }
   count--;
*/
// This is good
   cin >> num;
   while (num != sentinel)
   {
      count++;
      sum += num;
      cin >> num;
   }
   
//    cerr << "sum is " << sum << endl;
//    cerr << "count is " << count << endl;
   average = static_cast<double>(sum)/count;
   cout << "average is " << average << endl;
   return 0;
}
