#include <iostream>
using namespace std;
const int arraysize = 5;
int main()
{
   int numbers1[arraysize] = {1,2,3,4,5};
   int numbers2[arraysize] = {1,2,3,4,5};
   for (int i=0; i<arraysize; i++)
      cout << numbers1[i] << ' ';
   cout << endl;
   for (int i=0; i<arraysize; i++)
      cout << numbers2[i] << ' ';
   cout << endl;
   // can't compare arrays
   if (numbers1 == numbers2)
      cout << "EQUAL\n";
   else
      cout << "NOT EQUAL\n";
   // can't output array contents as a whole
   cout << "numbers1 is " << numbers1 << endl;
   cout << "numbers2 is " << numbers2 << endl;
   // can't input an entire array
   // cin >> numbers1;
   // can't use assignment to an array
//    numbers1 = numbers2;
   return 0;
}
