#include <iostream>
using namespace std;

int main()
{
   int num;
   do
   {
      cout << "enter an int in the range of 1 to 10 inclusive: ";
      cin >> num;
   }
   while (num < 1 || num > 10);  
   cout << "you entered " << num << endl;
   return 0;
}
