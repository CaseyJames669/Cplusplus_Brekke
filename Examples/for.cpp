#include <iostream>
using namespace std;

int main()
{
   for (int i=1; i<=10; i++)
      cout << i << endl;
   for (int i=10; i>=1; i--)
      cout << i << endl;
   for (int i=1; i<=10; i=i+2)
      cout << i << endl;
   return 0;
}