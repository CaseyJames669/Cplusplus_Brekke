#include <iostream>
#include <iomanip>
using namespace std;


const int sentinel = 0;

int main()
{
   int num;
   cout << "enter a number in range 1 to 10\n";
   cin >> num;
//    while ( !(1 <= num <= 10) )
   while ( num < 1 || num > 10 )
   {
      cout << "not in range, try again: ";
      cin >> num;
   }
   cout << "you entered " << num << endl;
   return 0;
}
